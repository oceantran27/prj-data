#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        auto parity = 0;
        for (int i = static_cast<int>(bits.size()) - 2;
             i >= 0 && bits[i]; --i) {
            parity ^= bits[i];
        }
        return parity == 0;
    }
};
