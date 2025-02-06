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
    bool increasingTriplet(vector<int>& nums) {
        int small = INT_MAX, big = INT_MAX;
        for (int num : nums) {
            if (num <= small) {
                small = num;
            }
            else if (num <= big) {
                big = num;
            }
            else {
                return true;
            }
        }
        
        return false;
    }
};
