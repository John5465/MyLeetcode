#include <iostream>

#include "Array/56_MergeIntervals/merge_intervals.h"

using namespace std;

int main(int argc, char** argv) 
{
	leetcode::MergeIntervals merge_intervals;

	vector<vector<int>> intervals = merge_intervals.Run(merge_intervals.intervals_);

	for (auto interval : intervals)
	{
		cout << "[";
		for (auto num : interval)
		{
			cout << num << " ";
		}
		cout << "]" << endl;
	}

	return 0;
}