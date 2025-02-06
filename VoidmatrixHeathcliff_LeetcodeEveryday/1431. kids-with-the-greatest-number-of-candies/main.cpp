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
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> vResult;
        int iMax = *max_element(candies.begin(), candies.end());
        for (int candy : candies)
            vResult.push_back(candy + extraCandies >= iMax);
        return vResult;
    }
};