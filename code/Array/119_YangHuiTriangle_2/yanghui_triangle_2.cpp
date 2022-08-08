#include "yanghui_triangle_2.h"

namespace leetcode {

vector<int> YangHuiTriangle::getRow(int rowIndex) {
  // 3. recursion opt: 1 array
  vector<int> ret(rowIndex + 1);
  ret[0] = 1;
  for (int i = 1; i <= rowIndex; ++i) {
    for (int j = i; j > 0; --j) {
      ret[j] += ret[j - 1];
    }
  }
  return ret;

  // 2. recursion opt: rolling arrays
  // vector<int> pre, cur;
  // for (int i = 0; i <= rowIndex; ++i) {
  //   cur.resize(i + 1);
  //   cur[0] = cur[i] = 1;
  //   for (int j = 1; j < i; ++j) {
  //     cur[j] = pre[j - 1] + pre[j];
  //   }
  //   pre = cur;
  // }
  // return cur;

  // 1. recursion
  // vector<vector<int>> ret(rowIndex + 1);
  // for (int i = 0; i < rowIndex + 1; ++i) {
  //   ret[i].resize(i + 1);
  //   ret[i][0] = ret[i][i] = 1;
  //   for (int j = 1; j < i; ++j) {
  //     ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
  //   }
  // }
  // return ret[rowIndex];
}

}  // namespace leetcode