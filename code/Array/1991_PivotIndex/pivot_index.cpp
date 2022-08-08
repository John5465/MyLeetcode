#include "pivot_index.h"

namespace leetcode 
{

int PivotIndex::Run(vector<int>& nums)
{
	int ret = -1;
	int sum = 0;
	for (auto num : nums)
	{
		sum += num;
	}

	if (0 == sum)	
		return 0;

	return 0;
}

}