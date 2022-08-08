#ifndef REMOVE_ELEMENT_H
#define REMOVE_ELEMENT_H

#include <vector>

namespace leetcode {

using namespace std;

class RemoveElement {
 public:
  int Run(vector<int>& nums, int val);

 public:
  vector<int> nums_ = {1};
  int val_ = 1;
};

}  // namespace leetcode

#endif