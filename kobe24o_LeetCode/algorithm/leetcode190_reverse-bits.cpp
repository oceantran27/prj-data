#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans = 0, i;
        for(i = 0; i <= 31; ++i)
        {
        	ans += (((n&(1<<i))>>i)<<(31-i));
        }
        return ans;
    }
};