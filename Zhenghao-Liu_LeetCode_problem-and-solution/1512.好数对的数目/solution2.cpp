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
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> count(101,0);
        for (int &i:nums)
            ++count.at(i);
        int ans=0;
        for (int &i:count)
            ans+=(i-1)*i/2;
        return ans;
    }
};
