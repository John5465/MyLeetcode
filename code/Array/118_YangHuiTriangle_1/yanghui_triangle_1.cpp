#include "yanghui_triangle_1.h"

#include <iostream>

namespace leetcode {

vector<vector<int>> YangHuiTriangle::generate(int numRows) {
  vector<vector<int>> ret(numRows);
  for (int i = 0; i < numRows; ++i) {
    ret[i].resize(i + 1);
    ret[i][0] = ret[i][i] = 1;
    for (int j = 1; j < i; ++j) {
      ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
    }
  }

  return ret;

  // if (numRows == 0) return {};
  // if (numRows == 1) return {{1}};
  // if (numRows == 2) return {{1}, {1, 1}};

  // vector<vector<int>> ret;
  // ret.push_back({1});
  // ret.push_back({1, 1});

  // for (int i = 2; i < numRows; ++i) {
  //   vector<int> temp(i + 1);
  //   temp[0] = 1;
  //   temp[temp.size() - 1] = 1;
  //   for (int j = 1; j < temp.size() - 1; ++j) {
  //     temp[j] = ret[i - 1][j - 1] + ret[i - 1][j];
  //   }
  //   ret.push_back(temp);
  // }

  // return ret;
}

}  // namespace leetcode
