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
    int maxProfit(vector<int>& prices) {
      int answer = 0;
      for (int i = 1; i < prices.size(); i++)
        answer += max(0, prices[i]-prices[i-1]); 
      return answer; 
    }
};