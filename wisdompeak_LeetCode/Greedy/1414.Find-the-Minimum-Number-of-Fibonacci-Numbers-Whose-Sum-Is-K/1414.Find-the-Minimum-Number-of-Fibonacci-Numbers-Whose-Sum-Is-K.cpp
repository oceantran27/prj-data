#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

typedef long long ll;
class Solution {
public:
    int findMinFibonacciNumbers(int k) 
    {
        vector<ll>a = {1,1};
        while (a.back() < k)
        {
            int n = a.size();
            a.push_back(a[n-1]+a[n-2]);
        }
        int ret = 0;
        while (k>0)
        {
            auto iter = upper_bound(a.begin(), a.end(), k) - 1;
            ret++;
            k-=*iter;
        }
        return ret;
    }
};
