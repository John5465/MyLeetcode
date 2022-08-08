#include "max_profit.h"

namespace leetcode {

int MaxProfit::Run(vector<int>& prices) {
  int max = 0;

  // 4. dp

  // 3. 单调栈
  // https://blog.csdn.net/lucky52529/article/details/89155694

  // 2. 一次遍历：用指针记录当前最小值。时间复杂度 O(n)
  int min_pt = prices[0];
  for (int i = 1; i < prices.size(); ++i) 
  {
    if (prices[i] < min_pt) 
    {
      min_pt = prices[i];
    } else if (prices[i] - min_pt > max)
    {
      max = prices[i] - min_pt;
    }
  }
  
  // 1. 暴力解法: 可解，超出时间限制。
  // 时间复杂度 O(n^2)
  // 空间复杂度 O(1)
  // for (int i = 0; i < prices.size(); ++i) 
  // {
  //   for (int j = i; j < prices.size(); ++j) 
  //   {
  //     int temp = prices[j] - prices[i];
  //     max = temp > max ? temp : max;
  //   }
  // } 

  return max;
}

}  // namespace leetcode