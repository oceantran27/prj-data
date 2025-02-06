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
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
            if(s.size() > 3)
                s.erase(s.begin());         //剔除最小的
        }
      
        set <int>::iterator it = s.begin();
       int ans = *it;
       if(s.size()<3)
       {
           
          for(it;it!=s.end();it++)          //小于3了，就找最大的
          {
              ans = *it;
          }
       }
       return ans;
    }
};