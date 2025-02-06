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
    int minKnightMoves(int x, int y) 
    {
        x = abs(x), y = abs(y);
        if (x + y == 1) return 3;
        int res = max({(x + 1)/2, (y + 1)/2, (x + y + 2)/3});
        res += (res ^ x ^ y) & 1;
        return res;
    }
};