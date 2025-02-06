#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Given a pattern and a string str, find if str follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter
in pattern and a non-empty word in str.

Example 1:

Input: pattern = "abba", str = "dog cat cat dog"
Output: true
Example 2:

Input:pattern = "abba", str = "dog cat cat fish"
Output: false
Example 3:

Input: pattern = "aaaa", str = "dog cat cat dog"
Output: false
Example 4:

Input: pattern = "abba", str = "dog dog dog dog"
Output: false
Notes:
You may assume pattern contains only lowercase letters, and str contains
lowercase letters separated by a single space.
*/
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream in(str);
        unordered_map<char, int> p2i;
        unordered_map<string, int> s2i;

        int i = 0;
        string temp;
        while (in >> temp) {
            if (i == pattern.size() || p2i[pattern[i]] != s2i[temp]) {
                return false;
            }
            p2i[pattern[i]] = i + 1;
            s2i[temp] = i + 1;
            i++;
        }

        return i == pattern.size();
    }
};

class Solution2 {
public:
    bool wordPattern(string pattern, string str) {
        istringstream in(str);
        unordered_map<char, string> m;
        unordered_set<string> str_set;

        string s;
        int i = 0;
        while (in >> s) {
            if (m.count(pattern[i])) {
                if (m[pattern[i]] != s) {
                    return false;
                }
                i++;
                continue;
            }

            if (str_set.count(s)) {
                return false;
            }

            m[pattern[i]] = s;
            str_set.insert(s);
            i++;
        }

        return i == pattern.size();
    }
};
