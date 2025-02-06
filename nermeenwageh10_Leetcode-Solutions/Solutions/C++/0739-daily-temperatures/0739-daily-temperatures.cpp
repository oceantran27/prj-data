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
    vector<int> dailyTemperatures(vector<int>& T) {
      stack<pair<int,int>> stk;
      vector<int> answer(T.size(), 0);
      for (int i = T.size()-1; ~i; i--)
      {
        while(!stk.empty() && stk.top().first <= T[i])
          stk.pop();
        if (!stk.empty())
          answer[i] = stk.top().second - i;
        stk.push({T[i], i}); 
      }
      return answer; 
      
    }
};