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
    bool isNStraightHand(vector<int>& nums, int k) {
        int n = nums.size();
      if(n%k!=0) return false;
        multiset<int> set(nums.begin(),nums.end());
        while(!set.empty())
        {
            auto curr = *set.begin()-1;
            for(int i=0; i<k; i++)
            {
                auto it = set.find(curr+1);
                if(it==set.end()) return false;
                set.erase(it);
                curr++;
            }
        }
        return true;
    }
};