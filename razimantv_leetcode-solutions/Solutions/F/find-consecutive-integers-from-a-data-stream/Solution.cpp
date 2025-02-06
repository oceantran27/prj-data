#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-consecutive-integers-from-a-data-stream/

class DataStream {
 public:
  int value, k, cnt;
  DataStream(int value, int k) : value(value), k(k), cnt(0) {}

  bool consec(int num) {
    if (num == value)
      ++cnt;
    else
      cnt = 0;
    return cnt >= k;
  }
};
