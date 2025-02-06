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
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        map<long long, long long> m;
        long long n=nums.size(),c=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            for(int j=lower;j<=upper;j++){
                if(sum==j)
                    c++;
                c+=m[sum-j];
            }
            m[sum]++;
        }
        return c;
    }
};
