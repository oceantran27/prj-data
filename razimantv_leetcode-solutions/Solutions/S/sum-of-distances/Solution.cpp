#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-distances/

class Solution {
public:
  vector<long long> distance(vector<int>& nums) {
    unordered_map<int,  pair <int, long  long>> seen;
    int n = nums.  size();
    vector<long  long> ret(n);
    
    for(int i=0; i<n; ++i) {
      auto& [cnt, tot] =seen[nums[i]];
      ret[i] += cnt * 1ll * i - tot;
      ++cnt;
      tot += i;
    }
    
    seen. clear();
    for(int i=n-1; i>=0; --i) {
      auto& [cnt, tot] = seen[nums[i]];
      ret[i] += tot - cnt * 1ll * i;
      ++cnt;
      tot += i;
    }
    
    return  ret;
  }
};
