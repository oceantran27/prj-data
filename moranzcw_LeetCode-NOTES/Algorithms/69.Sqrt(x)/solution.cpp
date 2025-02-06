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
    int sqrt(int x) 
    {
        double ans = x;
        while(abs(ans * ans - x) > 0.0001)
            ans = (ans + x / ans) / 2;
        return (int)ans;
    }
};