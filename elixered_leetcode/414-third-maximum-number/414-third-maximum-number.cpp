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
    int thirdMax(vector<int>& nums) {
        ll a = LONG_MIN;
        ll b = LONG_MIN;
        ll c = LONG_MIN;
        for(auto it:nums)
        {
            if(it > a)
            {
                c = b;
                b = a;
                a = it;
            }
            else if(it > b && it!=a)
            {
                c = b;
                b = it;
            }
            else if(it > c && it!=b && it!=a)
                c = it;
        }
        return c==LONG_MIN?a:c;
    }
};