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
    int minSwaps(string s) {
        int result = 0, curr = 0;
        for (const auto& c : s) {
            if (c == ']') {
               ++curr;
                result = max(result, curr);
            } else {
                --curr;
            }            
        }
        return (result + 1) / 2;
    }
};
