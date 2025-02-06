#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn) = O(32)
// Space: O(1)

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        int count = 32;
        while (count--) {
            result <<= 1;
            result |= n & 1;
            n >>= 1;
        }
        return result;
    }
};
