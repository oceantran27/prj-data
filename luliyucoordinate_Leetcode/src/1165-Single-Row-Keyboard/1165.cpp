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
    int calculateTime(string keyboard, string word) 
    {
        unordered_map<char, int> d;
        for (int i = 0; i < keyboard.size(); ++i)
        {
            d[keyboard[i]] = i;
        }
        
        int res = 0, pre = 0;
        for (char c : word)
        {
            res += abs(d[c] - pre);
            pre = d[c];
        }
        return res;
    }
};