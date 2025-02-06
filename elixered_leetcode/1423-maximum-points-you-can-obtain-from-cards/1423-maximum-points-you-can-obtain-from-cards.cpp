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
    #define ll long long
    int maxScore(vector<int>& a, int k) {
        int n = a.size();
        int ans = 0;
        int lsum = 0;
        for(int i=0; i<k; i++)
            lsum += a[i];
        int rsum = 0;
        ans = lsum;
        for(int i=0; i<k; i++)
        {
            rsum += a[n-i-1];
            lsum -= a[k-i-1];
            ans = max(ans,lsum+rsum);
        }
        return ans;
    }
};