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
    string defangIPaddr(string address) {
        string result;
        for (const auto& c : address) {
            if (c == '.') {
                result += "[.]";
            } else {
                result.push_back(c);
            }
        }
        return result;
    }
};
