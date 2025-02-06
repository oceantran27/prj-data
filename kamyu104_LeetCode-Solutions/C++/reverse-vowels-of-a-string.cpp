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
    string reverseVowels(string s) {
        for (int i = 0, j = s.length() - 1; i < j;) {
            if (!is_vowel(tolower(s[i]))) {
                ++i;
            } else if (!is_vowel(tolower(s[j]))) {
                --j;
            } else {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }

private:
    const string vowels_ = "aeiou";
    bool is_vowel(char a){
        return vowels_.find(a) != string::npos;
    }
};
