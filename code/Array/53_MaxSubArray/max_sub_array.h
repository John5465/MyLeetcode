#ifndef MAX_SUB_ARRAY_H
#define MAX_SUB_ARRAY_H

#include <iostream>
#include <vector>

namespace leetcode {

using namespace std;

class MaxSubArray {
 public:
  int Run(vector<int>& nums);

 public:
  vector<int> nums_ = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

 private:
  int get_max_sum(vector<int>& array, int l, int r);
  int get_crossing_max_sum(vector<int>& array, int l, int r, int m);
};

}  // namespace leetcode

#endif