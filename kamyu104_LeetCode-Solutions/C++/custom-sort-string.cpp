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
    string customSortString(string S, string T) {
        unordered_set<char> s(S.cbegin(), S.cend());
        unordered_map<char, int> counter;
        for (const auto& c : T) {
            ++counter[c];
        }
        string result;
        for (const auto& c : S) {
            result += string(counter[c], c);
        }
        for (const auto& kvp : counter) {
            if (!s.count(kvp.first)) {
                result += string(kvp.second, kvp.first);
            }
        } 
        return result;
    }
};
