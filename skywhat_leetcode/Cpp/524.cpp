#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Given a string and a string dictionary, find the longest string in the
// dictionary that can be formed by deleting some characters of the given
// string. If there are more than one possible results, return the longest word
// with the smallest lexicographical order. If there is no possible result,
// return the empty string.
//
// Example 1:
// Input:
// s = "abpcplea", d = ["ale","apple","monkey","plea"]
//
// Output:
// "apple"
// Example 2:
// Input:
// s = "abpcplea", d = ["a","b","c"]
//
// Output:
// "a"
// Note:
// All the strings in the input will only contain lower-case letters.
// The size of the dictionary won't exceed 1,000.
// The length of all the strings in the input won't exceed 1,000.

class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string res;
        for (auto w : d) {
            int i = 0, j = 0;
            for (; i < s.size(); ++i) {
                if (s[i] == w[j]) {
                    if (++j == w.size()) {
                        if (w.size() > res.size()
                            || (w.size() == res.size() && w < res)) {
                            res = w;
                        }
                        break;
                    }
                }
            }
        }

        return res;
    }
};

class Solution2 {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(), d.end(), [](string l, string r) {
            return l.size() == r.size() ? l < r : l.size() > r.size();
        });
        string res;
        for (auto w : d) {
            int i = 0, j = 0;
            for (; i < s.size(); ++i) {
                if (s[i] == w[j]) {
                    if (++j == w.size()) {
                        if (w.size() > res.size()) {
                            return w;
                        }
                    }
                }
            }
        }

        return "";
    }
};
