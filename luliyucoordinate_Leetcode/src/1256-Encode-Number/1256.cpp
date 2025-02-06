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
    string encode(int num) 
    {
        string res;
        num++;
        while (num) 
        {
            res = string(num&1 ? "1" : "0") + res;
            num >>= 1;
        }
        return res.substr(1);
    }
};