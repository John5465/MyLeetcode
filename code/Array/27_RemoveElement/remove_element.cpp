#include "remove_element.h"

namespace leetcode {

int RemoveElement::Run(vector<int>& nums, int val) {
  // int i = 0;
  // for (int j = 0; j < nums.size(); ++j) {
  //   if (nums[j] != val) nums[i++] = nums[j];
  // }
  // return i;

  // if (nums.empty()) return 0;
  int i = 0, j = nums.size();
  while (i < j) {
    if (nums[i] == val) {
      nums[i] = nums[--j];
    } else {
      i++;
    }
  }

  return i;
}

}  // namespace leetcode