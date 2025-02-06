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
    int getMinDistance(vector<int>& nums, int target, int start) {
        int sz=nums.size();
        int ans=INT_MAX;
        for (int i=0;i<sz;i++) {
            if (nums.at(i)==target) {
                ans=min(ans,abs(i-start));
            }
        }
        return ans;
    }
};