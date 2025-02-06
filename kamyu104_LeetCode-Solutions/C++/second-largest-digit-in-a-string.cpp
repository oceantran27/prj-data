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
    int secondHighest(string s) {
        int first = -1, second = -1;
        for (const auto& c : s) {
            if (!isdigit(c)) {
                continue;
            }
            int d = c - '0';
            if (d > first) {
                second = first;
                first = d;
            } else if (first > d && d > second) {
                second = d;
            }
        }
        return second;
    }
};
