#ifndef SEARCH_INSERT_H
#define SEARCH_INSERT_H

#include <vector>

namespace leetcode {

using namespace std;

class SearchInsert {
 public:
  int Run(vector<int>& nums, int target);

 public:
  vector<int> nums_ = {1, 3, 5, 6};
  int target = 5;
};

}  // namespace leetcode

#endif