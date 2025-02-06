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
    int totalFruit(vector<int>& fruits) {
      int ans = 0;
      map<int,int>mp;
      int i =0 ,j =0,n = fruits.size();
      while(i<n)
      {
        mp[fruits[i]]++;
      while(mp.size()>2)
      {
       if(mp[fruits[j]] == 1)
       {
        mp.erase(fruits[j]);
       }
        else
        {
        mp[fruits[j]]--;
        }
        j++;
      }
       ans = max(i-j+1,ans);
       i++;
    }
    return ans;
    }
};
