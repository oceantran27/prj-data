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
    int minStoneSum(vector<int>& piles, int k) {
      priority_queue<int>pq;
      for(auto x :piles)
      {
          pq.push(x);
      } 
      while(k--)
      {
          int x = pq.top();
          pq.pop();
          pq.push(x-floor(x/2));
      } 
      int sum =0;
      while(!pq.empty())
      {
          sum+=pq.top();
          pq.pop();
      }
      return sum;
    }
};
