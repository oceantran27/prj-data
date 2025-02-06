#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n * 2^n)
// Space: O(1)

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> result{""};
        for (const auto& c : S) {
            if (isalpha(c)) {
                const auto& size = result.size();
                for (int i = 0; i < size; ++i) {
                    result.emplace_back(result[i]);
                    result[i] += tolower(c);
                    result.back() += toupper(c);
                }
            } else {
                for (auto &s : result) {
                    s += c;
                }
            }
        }
        return result;
    }
};
