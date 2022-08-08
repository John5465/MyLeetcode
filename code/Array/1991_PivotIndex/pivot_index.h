#pragma once

#include <vector>

namespace leetcode
{

using namespace std;

class PivotIndex {
public:
	int Run(vector<int>& nums);
private:
	vector<int> nums_ = {1, 7, 3, 6, 5, 6}; //3
	//vector<int> nums_ = {1, 2, 3}; //-1
	//vector<int> nums_ = {2, 1, -1}; //0
};

}