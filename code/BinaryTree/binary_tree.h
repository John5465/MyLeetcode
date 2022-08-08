#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
#include <queue>
#include <utility>
#include <vector>

namespace leetcode {

using namespace std;

struct BinaryTreeNode {
  int val;
  BinaryTreeNode* left;
  BinaryTreeNode* right;

  BinaryTreeNode(const int& val = 0)
      : val(val), left(nullptr), right(nullptr) {}
};

typedef BinaryTreeNode Node;

class BinaryTree {
 public:
  BinaryTree();

  BinaryTree(const BinaryTree& t);

  ~BinaryTree();

  BinaryTree& operator=(const BinaryTree& t);

  Node* ArrayToBinaryTree(const vector<int> array);

  void PrevOrder(Node* root);

  void InOrder(Node* root);

  void PostOrder(Node* root);

 private:
  Node* Copy(Node* root);

  void Destroy(Node* root);

 public:
  Node* root_;
};

}  // namespace leetcode

#endif