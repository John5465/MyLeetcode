#include "plus_one.h"

namespace leetcode {

vector<int> PlusOne::Run(vector<int>& digits) {
  for (int i = digits.size() - 1; i >= 0; --i) {
    int temp = digits[i] + 1;
    digits[i]++;
    digits[i] %= 10;
    if (digits[i] != 0) {
      return digits;
    }
  }

  vector<int> ans(digits.size() + 1);
  ans[0] = 1;
  return ans;
}

}  // namespace leetcode