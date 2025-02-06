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
    int missingNumber(vector<int>& nums) {
      int n=nums.size();
      long long sum=0, m=n*(n+1)/2;
      for(auto x:nums) sum+=x;
      return (int) m-sum;
    }
};