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
    string toLowerCase(string str) {
        string result;
        for (const auto c : str) {
            if ('A' <= c && c <= 'Z') {
                result.push_back('a' + c - 'A');
            } else {
                result.push_back(c);
            }
        }
        return result;
    }
};
