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
        vector<bool> res;
        int m = *max_element(candies.begin(), candies.end());
        for (int i : candies) {
            res.emplace_back(extraCandies + i >= m);
        }
        return res;
    }
};