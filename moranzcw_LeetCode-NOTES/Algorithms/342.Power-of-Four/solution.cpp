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
    bool isPowerOfFour(int num) 
    {
        return num>0 && !(num&(num-1)) && (num & 0x55555555);
    }
};