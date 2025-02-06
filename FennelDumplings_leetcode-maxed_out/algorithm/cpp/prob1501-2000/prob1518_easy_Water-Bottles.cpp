#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// prob1518: Water Bottles

/*
 * https://leetcode-cn.com/problems/water-bottles/
 */

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange)
        {
            numBottles -= numExchange;
            ++ans;
            ++numBottles;
        }
        return ans;
    }
};
