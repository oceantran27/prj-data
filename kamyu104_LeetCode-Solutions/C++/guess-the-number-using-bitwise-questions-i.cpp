#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn):
// Space: O(1)

// bit manipulation
class Solution {
public:
    int findNumber() {
        int result = 0;
        for (int i = 0; i < 30; ++i) {
            if (commonSetBits(1 << i)) {
                result |= 1 << i;
            }
        }
        return result;
    }
};
