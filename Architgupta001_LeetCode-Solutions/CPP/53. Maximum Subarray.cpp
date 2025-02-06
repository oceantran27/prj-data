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
    int maxSubArray(vector<int>& nums) {
        int nmax = nums[0];
        int nsum = nmax;
        int n = nums.size();

        if ( n == 0 ) return nmax;

        for ( int i = 1; i<n; i++)
        {
            if ( nums[i] >= 0 )
            {
                if ( nsum >= 0 ) nsum += nums[i];
                else
                    nsum = nums[i];

                nmax = max(nmax,nsum);
            }
            else
            {
                nsum += nums[i];
                if ( nmax < nums[i])   nmax = nums[i];
            }
        }
        return nmax;
    }
};
