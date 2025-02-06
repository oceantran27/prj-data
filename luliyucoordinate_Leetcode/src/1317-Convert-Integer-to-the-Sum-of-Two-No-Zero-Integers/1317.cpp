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
    vector<int> getNoZeroIntegers(int n) 
    {
        for (int a = 1; a < n; ++a) 
        {
            int b = n - a;
            if (to_string(a).find('0') == string::npos && 
                    to_string(b).find('0') == string::npos)
                return {a, b};
        }
        return {}; 
    }
};