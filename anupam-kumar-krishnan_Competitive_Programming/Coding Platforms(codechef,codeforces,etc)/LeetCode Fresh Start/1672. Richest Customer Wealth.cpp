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
    int maximumWealth(vector<vector<int>>& accounts) {
       
        int maxWealthSoFar = 0;
        
        for (vector<int>& account : accounts) {
           
            int currCustomerWealth = 0;
            for (int money : account) {
                currCustomerWealth += money;
            }
          
            maxWealthSoFar = max(maxWealthSoFar, currCustomerWealth);
        }
        return maxWealthSoFar;
    }
};
