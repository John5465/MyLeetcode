#include <iostream>

#include "Array/121_MaxProfit/max_profit.h"

using namespace std;

int main(int argc, char** argv) {
  leetcode::MaxProfit max_profit;

  int ret = max_profit.Run(max_profit.prices);

  cout << ret << endl;

  return 0;
}