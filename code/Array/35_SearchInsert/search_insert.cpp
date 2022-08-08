#include "search_insert.h"

#include <iostream>

namespace leetcode {

int SearchInsert::Run(vector<int>& nums, int target) {
  int left = 0, right = nums.size() - 1;

  while (left <= right) {
    int mid = ((right - left) >> 1) + left;
    std::cout << left << " " << right << " " << mid << endl;
    if (target > nums[mid]) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return left;
}

}  // namespace leetcode