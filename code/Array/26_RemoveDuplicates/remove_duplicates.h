#ifndef REMOVE_DUPLICATES_H
#define REMOVE_DUPLICATES_H

#include <vector>

namespace leetcode {

using namespace std;

class RemoveDuplicates {
 public:
  int Run(vector<int>& nums);

 public:
  vector<int> nums_ = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
};

}  // namespace leetcode

#endif