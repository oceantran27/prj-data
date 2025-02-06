#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
#include <climits>

class Solution {
public:
    int findComplement(int num) {
        int mask = INT_MIN;
        while ((mask & num) == 0) {
            mask >>= 1;
            if (mask < 0) {
                // There's no such thing as ">>>" in C++.
                mask ^= INT_MIN;
            }
        }
        mask = (mask << 1) - 1;
        return (~num) & mask;
    }
};
