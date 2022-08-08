#ifndef MAX_PROFIT_H
#define MAX_PROFIT_H

#include <vector>

namespace leetcode {

using namespace std;

class MaxProfit {
 public:
  int Run(vector<int>& prices);

 public:
  vector<int> prices = {7, 1, 5, 3, 6, 4};
};

}  // namespace leetcode

#endif