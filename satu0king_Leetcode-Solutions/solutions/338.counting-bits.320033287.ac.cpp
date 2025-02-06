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
  vector<int> countBits(int num) {
    vector<int> ans(num + 1);

    for (int i = 1; i <= num; i++) {
      ans[i] = 1 + ans[i & (i - 1)];
    }
    return ans;
  }
};
