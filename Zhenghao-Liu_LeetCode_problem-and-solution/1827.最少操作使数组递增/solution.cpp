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
    int minOperations(vector<int>& nums) {
        int sz=nums.size();
        int ans=0;
        for (int i=1;i<sz;i++) {
            if (nums.at(i)<=nums.at(i-1)) {
                ans+=nums.at(i-1)-nums.at(i)+1;
                nums.at(i)=nums.at(i-1)+1;
            }
        }
        return ans;
    }
};