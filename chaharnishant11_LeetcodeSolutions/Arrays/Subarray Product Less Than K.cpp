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
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans= 0, n= nums.size();
        int s=0, e=0;
        long long prod= 1;
        while(e<n) {
            prod*= nums[e];
            while(s<e && prod>=k) prod/= nums[s++];
            if(prod<k) ans+= e-s+1;
            e++;
        }
        return ans;
    }
};
