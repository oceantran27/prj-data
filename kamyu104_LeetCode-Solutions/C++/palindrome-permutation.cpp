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
    bool canPermutePalindrome(string s) {
        bitset<256> bits;
        for (const auto& c : s) {
            bits.flip(c);
        }
        return bits.count() < 2;
    }
};
