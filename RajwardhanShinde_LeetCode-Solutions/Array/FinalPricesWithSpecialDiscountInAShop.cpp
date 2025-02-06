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
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res(prices);
        stack<int> s;
        for(int i = 0; i < prices.size(); i++) {
            while(s.size() && prices[s.top()] >= prices[i]) {
                res[s.top()] -= prices[i];
                s.pop();
            }
            s.push(i);
        }
        return res;
    }
};
