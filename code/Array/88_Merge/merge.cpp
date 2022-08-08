#include "merge.h"

namespace leetcode {

using namespace std;

void Merge::Run(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  int p1 = m - 1, p2 = n - 1, tail = m + n - 1;
  while (p1 >= 0 || p2 >= 0) {
    // cout << "tail-" << tail << " p1-" << p1 << " p2-" << p2 << endl;
    // for (auto num : nums1) {
    //   cout << num << " ";
    // }
    // cout << endl << endl;

    if (p1 < 0) {
      nums1[tail--] = nums2[p2--];
    } else if (p2 < 0) {
      nums1[tail--] = nums1[p1--];
    } else if (nums2[p2] > nums1[p1]) {
      nums1[tail--] = nums2[p2--];
    } else {
      nums1[tail--] = nums1[p1--];
    }
  }
}

}  // namespace leetcode