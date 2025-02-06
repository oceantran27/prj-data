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
    int search(vector<int>& nums, int target) {
        int ans=0;
        for (int i:nums) {
            if (i==target) {
                ans++;
            }
        }
        return ans;
    }
};