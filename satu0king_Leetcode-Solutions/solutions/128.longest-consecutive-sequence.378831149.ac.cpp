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
  int longestConsecutive(vector<int> &nums) {

    unordered_set<long long int> set(nums.begin(), nums.end());

    int mx = 0;

    for (long long int n : set) {
      if (!set.count(n - 1)) {
        int c = 0;
        while (set.count(n++))
          c++;
        mx = max(mx, c);
      }
    }

    return mx;
  }
};
