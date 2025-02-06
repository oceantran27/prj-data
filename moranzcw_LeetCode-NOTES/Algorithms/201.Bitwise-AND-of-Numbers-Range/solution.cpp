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
    int rangeBitwiseAnd(int m, int n) 
    {
        int offset = 0;
        while (m && n)
        {
            if (m == n)
            {
                return m << offset;
            }
            m >>= 1;
            n >>= 1;
            offset++;
        }
        return 0;
    }
};