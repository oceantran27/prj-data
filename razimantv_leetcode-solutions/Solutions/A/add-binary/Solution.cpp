#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/add-binary

class Solution {
 public:
  string addBinary(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (a.size() < b.size()) swap(a, b);
    char carry = 0;
    string ret = "";
    int N = a.size(), M = b.size();
    for (int i = 0; i < N; ++i) {
      char cur = a[i] - '0' + carry;
      if (i < M) cur += b[i] - '0';
      carry = cur > 1;
      ret += '0' + (cur & 1);
    }
    if (carry) ret += '1';
    reverse(ret.begin(), ret.end());
    return ret;
  }
};
