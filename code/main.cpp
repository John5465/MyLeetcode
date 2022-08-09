#include <iostream>

#include "Array/1991_PivotIndex/pivot_index.h"

using namespace std;

int main(int argc, char** argv) {
	leetcode::PivotIndex pivot_index;

	int ret = pivot_index.Run(pivot_index.nums_);

	cout << ret << endl;

	return 0;
}