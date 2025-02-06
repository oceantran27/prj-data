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
        uint32_t result = 0;
        int i = 0;
        while (n) {
            ++i;
            result = (result << 1) + (n & 1);
            n >>= 1;
        }
        return result << (32 - i);
    }
};
