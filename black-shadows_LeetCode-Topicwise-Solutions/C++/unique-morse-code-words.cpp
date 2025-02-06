#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n), n is the sume of all word lengths
// Space: O(n)

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        static const vector<string> MORSE = 
            { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
              "....", "..", ".---", "-.-", ".-..", "--", "-.",
              "---", ".--.", "--.-", ".-.", "...", "-", "..-",
              "...-", ".--", "-..-", "-.--", "--.."};

        unordered_set<string> lookup;
        for (const auto& word : words) {
            string code;
            for (const auto& c : word) {
                code += MORSE[c - 'a'];
            }
            lookup.emplace(move(code));
        }
        return lookup.size();
    }
};
