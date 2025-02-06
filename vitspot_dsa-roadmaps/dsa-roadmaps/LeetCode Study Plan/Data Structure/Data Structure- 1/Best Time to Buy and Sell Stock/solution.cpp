#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
   int maxProfit(vector<int> &prices)
   {

      int profitmax = 0, profitmin = prices[0];
      for (int i = 0; i < prices.size(); i++)
      {
         profitmax = max(profitmax, prices[i] - profitmin);
         profitmin = min(profitmin, prices[i]);
      }
      return profitmax;
   }
};