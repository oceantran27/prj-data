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
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for (int i:costs) {
            if (coins>=i) {
                coins-=i;
                ans++;
            } else {
                break;
            }
        }
        return ans;
    }
};