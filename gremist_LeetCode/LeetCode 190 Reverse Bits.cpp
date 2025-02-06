#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 190 Reverse Bits.cpp

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 8 * sizeof(uint32_t); i++) {
            ans = (ans << 1) + ((n >> i) & 1);
        }
        return ans;
    }
};