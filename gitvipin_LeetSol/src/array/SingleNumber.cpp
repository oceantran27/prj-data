#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Solution for : https://leetcode.com/problems/single-number/
*/

int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto i = nums.begin(); i != nums.end(); i++) {
            ans = ans ^ (*i);
        }
        return ans;
    }
