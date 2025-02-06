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
    static bool cmp(vector <int> a, vector <int> b){
      if(a[0] == b[0])return a[1] > b[1];
      return a[0] < b[0];
   }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), cmp);
      if(envelopes.size() == 0)return 0;
      vector <int> ret;
      for(int i = 0; i < envelopes.size(); i++){
         vector <int> temp = envelopes[i];
         int x = temp[1];
         int low = 0;
         int high = ret.size() -1;
         int curr = 0;
         while(low <= high){
            int mid = low + (high - low) / 2;
            if(ret[mid]<temp[1]){
               curr = mid + 1;
               low = mid + 1;
            }else{
               high = mid - 1;
            }
         }
         if(curr < 0) continue;
         if(curr >= (int)ret.size())
            ret.push_back(temp[1]);
         else
            ret[curr] = temp[1];
      }
      return ret.size();
    }
};
