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
    int rob(vector<int>& nums) {
        int numberOfHouses = nums.size();
        int maxWithOutLastHouse = 0;
        int maxWithLastHouse = nums[0];
        for (int i = 1; i < numberOfHouses; i++){
            int newMaxWithLastHouse = nums[i] + maxWithOutLastHouse;
            int newMaxWithOutLastHouse = max(maxWithOutLastHouse, maxWithLastHouse);
            maxWithLastHouse = newMaxWithLastHouse;
            maxWithOutLastHouse = newMaxWithOutLastHouse;
        }
        return max(maxWithOutLastHouse, maxWithLastHouse);
    }
};