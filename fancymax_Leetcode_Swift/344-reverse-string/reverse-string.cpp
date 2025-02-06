#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Write a function that takes a string as input and returns the string reversed.
//
//
// Example:
// Given s = "hello", return "olleh".
//


class Solution {
public:
    string reverseString(string s) {
        string res = "";
        
        for (int i = s.size() - 1; i >= 0; i--) {
            res.push_back(s[i]);
        }

        return res;
    }
};
