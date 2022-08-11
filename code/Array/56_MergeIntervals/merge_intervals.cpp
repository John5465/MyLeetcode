#include "merge_intervals.h"

namespace leetcode
{

vector<vector<int>> MergeIntervals::Run(vector<vector<int>> &intervals)
{
	vector<vector<int>> ret;

	//*******	Solution 1
	//			Time Complexity: O(n^2)
	//			Result: time limit exceeded
	while (!intervals.empty())	//Loop until intervals is empty
	{
		vector<int> interval = intervals.front();	//access and pop 1st element
		intervals.erase(intervals.begin());

		auto iter = intervals.begin();
		while (iter != intervals.end())	//iterate other elements
		{
			if (interval[0] <= (*iter)[1] && (*iter)[0] <= interval[1]) // intersection condition
			{
				interval[0] = min(interval[0], (*iter)[0]);		// resize interval
				interval[1] = max(interval[1], (*iter)[1]);
				intervals.erase(iter);
				iter = intervals.begin();
			}
			else
			{
				iter++;
			}
		}
		ret.push_back(interval);

	}

	return ret;
}

}