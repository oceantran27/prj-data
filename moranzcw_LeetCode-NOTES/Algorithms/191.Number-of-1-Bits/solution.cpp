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
    int hammingWeight(uint32_t n) {
        int result = 0;
        while(n)
        {
            result += n & 0b1? 1:0;
            n >>= 1;
        }
        return result;
        
    }
};