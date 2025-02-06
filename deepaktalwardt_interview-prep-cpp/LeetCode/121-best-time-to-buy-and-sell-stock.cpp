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
        int maxDiff = 0;
        int minSoFar = INT_MAX;
        for (int n : prices) {
            minSoFar = min(minSoFar, n);
            maxDiff = max(maxDiff, n - minSoFar);
        }
        return maxDiff;
    }
};