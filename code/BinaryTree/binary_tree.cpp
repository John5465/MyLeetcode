#include "binary_tree.h"

namespace leetcode {

BinaryTree::BinaryTree() : root_(nullptr) {}

BinaryTree::BinaryTree(const BinaryTree& t) { root_ = Copy(t.root_); }

BinaryTree::~BinaryTree() {
  Destroy(root_);
  root_ = nullptr;
}

BinaryTree& BinaryTree::operator=(const BinaryTree& t) {
  if (this != &t) {
    root_ = Copy(t.root_);
  }
  return *this;

  // std::swap(root_, t.root_);
  // return *this;
}

Node* BinaryTree::ArrayToBinaryTree(const vector<int> array) {
  if (array.empty()) {
    return nullptr;
  }

  // level-order
  auto iter = array.begin();
  Node* node = new Node(*iter);
  queue<Node*> q;
  q.push(node);

  iter += 1;
  while (iter != array.end()) {
    Node* front = q.front();
    q.pop();

    if (iter != array.end()) {
      if (front->left == nullptr) {
        Node* left = new Node(*iter);
        front->left = left;
        q.push(left);
        iter += 1;
      }

      if (front->right == nullptr) {
        Node* right = new Node(*iter);
        front->right = right;
        q.push(right);
        iter += 1;
      }
    }
  }
  return node;
}

void BinaryTree::PrevOrder(Node* root) {
  if (root == nullptr) {
    cout << "null ";
    return;
  }

  cout << root->val << " ";
  PrevOrder(root->left);
  PrevOrder(root->right);
}

void BinaryTree::InOrder(Node* root) {
  if (root == nullptr) {
    cout << "null ";
    return;
  }

  InOrder(root->left);
  cout << root->val << " ";
  InOrder(root->right);
}

void BinaryTree::PostOrder(Node* root) {
  if (root == nullptr) {
    cout << "null ";
    return;
  }

  PostOrder(root->left);
  PostOrder(root->right);
  cout << root->val << " ";
}

Node* BinaryTree::Copy(Node* root) {
  if (root == nullptr) {
    return nullptr;
  }

  Node* copy_node = new Node(root->val);
  copy_node->left = Copy(root->left);
  copy_node->right = Copy(root->right);

  return copy_node;
}

void BinaryTree::Destroy(Node* root) {
  if (root == nullptr) {
    return;
  }

  Destroy(root->left);
  Destroy(root->right);
  delete root;
}

}  // namespace leetcode