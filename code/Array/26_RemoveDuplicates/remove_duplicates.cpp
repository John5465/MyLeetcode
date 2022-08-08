#include "remove_duplicates.h"

namespace leetcode {

int RemoveDuplicates::Run(vector<int>& nums) {
  int i = 1;
  for (size_t j = 1; j < nums.size(); ++j) {
    if (nums[j] != nums[j - 1]) {
      nums[i++] = nums[j];
    }
  }

  return i;
}

}  // namespace leetcode