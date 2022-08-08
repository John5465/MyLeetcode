#include "sorted_array_to_bst.h"

namespace leetcode {

TreeNode *SortedArrayToBst::run(vector<int> &nums) {
  return helper(nums, 0, nums.size() - 1);
}

TreeNode *SortedArrayToBst::helper(vector<int> &nums, int left, int right) {
  if (left > right) {
    return nullptr;
  }

  int mid = (left + right) >> 1;

  TreeNode *root = new TreeNode(nums[mid]);

  root->left = helper(nums, left, mid - 1);
  root->right = helper(nums, mid + 1, right);
  return root;
}

}  // namespace leetcode
