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
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> ump;
        for (int i:nums) {
            ump[i]++;
        }
        int ans=0;
        for (auto &i:ump) {
            if (i.second==1) {
                ans+=i.first;
            }
        }
        return ans;
    }
};
