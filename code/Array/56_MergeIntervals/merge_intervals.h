#pragma once

#include <vector>

using namespace std;

namespace leetcode
{

class MergeIntervals
{
public:
	vector<vector<int>> Run(vector<vector<int>>& intervals);

public:
	//vector<vector<int>> intervals_ = { {1, 3}, {2, 6}, {8, 10}, {15, 18} };	//[[1,6],[8,10],[15,18]]
	//vector<vector<int>> intervals_ = { {1, 4}, {4, 5} };	//[1, 5]
	vector<vector<int>> intervals_ = { {1, 4},{0, 2},{3, 5} }; //[[0,5]]
};

}

//url: https://leetcode.cn/problems/merge-intervals/