#ifndef MERGE_H
#define MERGE_H

#include <iostream>
#include <vector>

namespace leetcode {

using namespace std;

class Merge {
 public:
  void Run(vector<int>& nums1, int m, vector<int>& nums2, int n);

 public:
  vector<int> nums1_ = {0};
  int m_ = 0;
  vector<int> nums2_ = {1};
  int n_ = 1;
};

}  // namespace leetcode

#endif