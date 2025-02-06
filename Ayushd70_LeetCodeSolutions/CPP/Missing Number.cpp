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
    int missingNumber(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        for(int i=0; i<=nums.size(); i++) {
            if(s.find(i) == s.end())
                return i;
        }
        return -1;
    }
};
