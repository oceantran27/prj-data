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
    int minFlips(string target) {
        int result = 0;
        char curr = '0';
        for (const auto& c : target) {
            if (c == curr) {
                continue;
            }
            curr = c;
            ++result;
        }
        return result;
    }
};
