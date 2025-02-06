#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n * l)
// Space: O(1)

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> result;
        for (const auto& word: words) {
            if (match(word, pattern)) {
                result.emplace_back(word);
            }
        }
        return result;
    }

private:
    bool match(const string& word, const string& pattern) {
        unordered_map<char, char> lookup;
        unordered_set<char> char_set;
        for (int i = 0; i < word.length(); ++i) {
            const auto& c = word[i], &p = pattern[i];
            if (!lookup.count(c)) {
                if (char_set.count(p)) {
                    return false;
                }
                char_set.emplace(p);
                lookup[c] = p;
            }
            if (lookup[c] != p) {
                return false;
            }
        }
        return true;
    }
};
