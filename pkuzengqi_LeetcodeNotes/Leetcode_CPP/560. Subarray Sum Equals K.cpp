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
    int subarraySum(vector<int>& nums, int k) {
      int sum=0, ans=0;
      unordered_map<int,int> hash;
      hash[0] = 1; //init
      for(auto &x:nums){
        sum += x;
        ans += hash[sum-k];
        hash[sum]++;
      }
      return ans;
    }
};