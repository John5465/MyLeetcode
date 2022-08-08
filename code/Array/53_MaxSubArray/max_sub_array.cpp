#include "max_sub_array.h"

namespace leetcode {

int MaxSubArray::Run(vector<int>& nums) {
  // **** 3. divide and conquer
  return get_max_sum(nums, 0, nums.size() - 1);

  // **** 2. greedy
  // int max_sum = INT_MIN, sum = 0;
  // for (auto num : nums) {
  //   sum += num;
  //   max_sum = max(max_sum, sum);
  //   if (sum < 0) sum = 0;
  //   cout << "sum " << sum << " max_sum " << max_sum << endl;
  // }
  // return max_sum;
  // **** greedy end

  // **** 1. dp
  // int max_sum = nums[0], pre = 0;
  // for (auto num : nums) {
  //   pre = max(pre + num, num);
  //   max_sum = max(max_sum, pre);
  // }
  // return max_sum;
  // **** dp
}

int MaxSubArray::get_max_sum(vector<int>& array, int l, int r) {
  if (l == r) {
    return array[l];
  }

  int m = (l + r) >> 1;
  int left_sum = get_max_sum(array, l, m);
  int right_sum = get_max_sum(array, m + 1, r);
  int crossing_sum = get_crossing_max_sum(array, l, r, m);

  return max(max(left_sum, crossing_sum), right_sum);
}

int MaxSubArray::get_crossing_max_sum(vector<int>& array, int l, int r, int m) {
  int left_sum = INT_MIN, right_sum = INT_MIN, sum = 0;

  for (int i = m; i >= l; --i) {
    sum += array[i];
    if (sum > left_sum) left_sum = sum;
  }

  sum = 0;
  for (int i = m + 1; i <= r; ++i) {
    sum += array[i];
    if (sum > right_sum) right_sum = sum;
  }

  return left_sum + right_sum;
}

}  // namespace leetcode