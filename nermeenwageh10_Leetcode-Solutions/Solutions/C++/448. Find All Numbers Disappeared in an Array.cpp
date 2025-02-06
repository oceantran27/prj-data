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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        bitset<100002> bt = {0};
        vector<int> diss;
        int i;
        for(i=0;i<nums.size();i++)
            bt[nums[i]] = 1;
        for(i=1;i<=nums.size();i++)
            if(!bt[i])
                diss.push_back(i);
        return diss;
    }
};
