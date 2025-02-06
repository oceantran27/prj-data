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
  string baseNeg2(int N) {
    if (N == 0)
      return string("0");
    int curr = N;
    string ans;
    while (curr != 0) {
      ans += ('0' + (abs(curr) % 2));
      if (curr > 0) {
        curr /= 2;
        curr *= -1;
      } else {
        curr *= -1;
        curr = (curr + 1) / 2;
      }
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
