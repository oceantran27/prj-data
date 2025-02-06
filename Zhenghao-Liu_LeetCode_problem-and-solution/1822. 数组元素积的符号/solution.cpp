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
    int arraySign(vector<int>& nums) {
        int ans=1;
        for (int i:nums) {
            if (i==0) {
                return 0;
            }
            ans*=i>0 ? 1 : -1;
        }
        return ans;
    }
};