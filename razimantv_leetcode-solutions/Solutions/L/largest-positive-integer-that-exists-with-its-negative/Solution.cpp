#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/

class Solution {
public:
 int findMaxK(vector<int>& nums) {
   unordered_set<int> s;
   for (int x : nums) s.insert(x);
   int best = -1;
   for (int x : nums)
     if (s.count(-x)) best = max(best, x);
   return best;
 }
};
