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
        int maxpro = 0;
        int minprice = prices[0];
        for(int i=1; i<prices.size(); i++)
        {
            maxpro = max(maxpro,prices[i]-minprice);
            minprice = min(minprice,prices[i]);
        }
        return maxpro;
    }
};