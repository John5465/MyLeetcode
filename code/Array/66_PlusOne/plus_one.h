#ifndef PLUS_ONE_H
#define PLUS_ONE_H

#include <vector>

namespace leetcode {

using namespace std;

class PlusOne {
 public:
  vector<int> Run(vector<int>& digits);

 public:
  vector<int> digits_ = {9, 9, 9, 9};
};

}  // namespace leetcode

#endif