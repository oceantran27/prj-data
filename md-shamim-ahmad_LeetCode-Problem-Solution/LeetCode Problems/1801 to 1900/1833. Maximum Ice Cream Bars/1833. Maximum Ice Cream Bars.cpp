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
    int maxIceCream(vector<int> &costs, int coins) {
        sort(costs.begin(), costs.end());
        int sum = 0, cnt = 0;
        for (int i = 0; i < costs.size(); i++) {
            if (sum + costs[i] <= coins) {
                sum += costs[i];
                cnt++;
            }
        }
        return cnt;
    }
};