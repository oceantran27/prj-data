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
    int minimumSwap(string s1, string s2) 
    {
        int x = 0, y = 0, n = s1.size();
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                if (s1[i] == 'x') x++;
                else y++;
            }
        }
        if ((x + y) & 1) return -1;
        return x / 2 + y / 2 + 2 * (x % 2);
    }
};