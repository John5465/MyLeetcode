#include "two_sum.h"

namespace leetcode {

vector<int> TwoSum::Run(vector<int>& nums, int target) {
  // for (int i = 0; i < nums.size(); ++i) {
  //   for (int j = i + 1; j < nums.size(); ++j) {
  //     if (nums[i] + nums[j] == target) {
  //       cout << "[" << i << ", " << j << "]" << endl;
  //       return {i, j};
  //     }
  //   }
  // }

  unordered_map<int, int> hashtable;
  for (int i = 0; i < nums.size(); ++i) {
    auto it = hashtable.find(target - nums[i]);
    if (it != hashtable.end()) {
      return {i, it->second};
    }
    hashtable[nums[i]] = i;
  }

  return {};
}

}  // namespace leetcode