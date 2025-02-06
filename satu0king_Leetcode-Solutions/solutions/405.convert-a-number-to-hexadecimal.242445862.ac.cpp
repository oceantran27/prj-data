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
  string toHex(unsigned int num) {
    string map = "0123456789abcdef";
    string ans;
    do {
      ans += map[num % 16];
      num /= 16;
    } while (num);
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
