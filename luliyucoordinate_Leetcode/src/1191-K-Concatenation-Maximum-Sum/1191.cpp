#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) 
    {
        int n = arr.size(), mod = 1e9 + 7, cur = 0, res = 0;
        long long total = accumulate(arr.begin(), arr.end(), 0)%mod;
        for (int i = 0; i < n*min(k, 2); ++i)
        {
            cur = max(cur, 0) + arr[i%n];
            res = max(res, cur);
        }
        return max({0, res, int(((k-2)*total + res)%mod)});
    }
};