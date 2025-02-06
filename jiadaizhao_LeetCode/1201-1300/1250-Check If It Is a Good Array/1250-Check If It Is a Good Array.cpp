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
    bool isGoodArray(vector<int>& nums) {
        int gcd = nums[0];
        for (int x : nums) {
            while (x) {
                int temp = gcd;
                gcd = x;
                x = temp % x;
            }
            if (gcd == 1) {
                return true;
            }
        }
        
        return false;
    }
};
