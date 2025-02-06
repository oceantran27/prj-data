#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  vector<int> grayCode(int n) {
    // http://en.wikipedia.org/wiki/Gray_code
    vector<int> code;
    int size = 1 << n;

    for (int i = 0; i < size; ++i) {
      code.push_back((i >> 1) ^ i);
    }

    return code;
  }
};