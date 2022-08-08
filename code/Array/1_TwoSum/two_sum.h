#ifndef TWO_SUM_H
#define TWO_SUM_H

#include <iostream>
#include <unordered_map>
#include <vector>

namespace leetcode {

using namespace std;

class TwoSum {
 public:
  vector<int> Run(vector<int>& nums, int target);

 public:
  vector<int> nums_ = {3, 2, 4};
  int target_ = 6;
};

}  // namespace leetcode

#endif