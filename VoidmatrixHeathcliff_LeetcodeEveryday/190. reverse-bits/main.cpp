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
        bitset<32> bits = bitset<32>(n);
        char tmp = 0;
        for(int i = 0; i < 16; i++)
            tmp = bits[i], bits[i] = bits[31-i], bits[31-i] = tmp;
        return bits.to_ulong();
    }
};