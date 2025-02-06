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
        int mask = 1;
        uint32_t res = 0;
        for(int i = 1;i <= 32;i++){
            res = (res << 1);
            if(n & mask)
                res |= 1;
            mask = mask << 1;
        }
        return res;
    }
};