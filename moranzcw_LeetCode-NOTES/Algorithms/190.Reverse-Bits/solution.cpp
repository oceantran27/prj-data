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
    uint32_t reverseBits(uint32_t n) 
    {
        int result = 0;
        for(int i=0;i<32;i++)
        {
            result <<= 1;
            result += n & 1;
            n >>= 1;
        }
        return result;
    }
};