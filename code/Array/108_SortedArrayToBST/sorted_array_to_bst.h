#ifndef SORTED_ARRAY_TO_BST_H
#define SORTED_ARRAY_TO_BST_H

#include <vector>

namespace leetcode {

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class SortedArrayToBst {
 public:
  TreeNode *run(vector<int> &nums);

 private:
  TreeNode *helper(vector<int> &nums, int left, int right);

 public:
  vector<int> nums_ = {-10, -3, 0, 5, 9};
};

}  // namespace leetcode

#endif