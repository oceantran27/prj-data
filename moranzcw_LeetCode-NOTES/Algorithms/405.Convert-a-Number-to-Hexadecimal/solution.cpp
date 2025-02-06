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
    string toHex(int num) 
    {
        char *str = new char[8];
        sprintf(str, "%x", num);
        return string(str);
    }
};