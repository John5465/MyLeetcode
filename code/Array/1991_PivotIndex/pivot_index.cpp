#include "pivot_index.h"

namespace leetcode
{

int PivotIndex::Run(vector<int>& nums)
{
#ifdef 0
	//***************** opt? *****************
#elif 1
	//***************** 1. Original Solution *****************
	//calculate sum of vector: t-O(n)
	int sum = 0;
	for (auto num : nums)
	{
		sum += num;
	}
	//iterate to find index: t-O(n^2)
	for (int i = 0; i < nums.size(); ++i)
	{
		int left_sum = 0;
		for (int j = 0; j < i; ++j)
		{
			left_sum += nums[j];
		}
		int right_sum = sum - left_sum - nums[i];

		if (left_sum == right_sum) return i;
	}

	return -1;
#endif
}

}