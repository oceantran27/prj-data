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
    int minFlips(int a, int b, int c) 
    {
        int res = 0;
        while (a || b || c)
        {
            if (c & 1) res += (a & 1) || (b & 1) ? 0 : 1;
            else res += (a & 1) + (b & 1);
            a >>= 1, b >>= 1, c >>= 1;
        }
        return res;
    }
};