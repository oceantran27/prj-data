#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Implement function ToLowerCase() that has a string parameter str, and returns
// the same string in lowercase.
//
//
//
// Example 1:
//
// Input: "Hello"
// Output: "hello"
// Example 2:
//
// Input: "here"
// Output: "here"
// Example 3:
//
// Input: "LOVELY"
// Output: "lovely"

class Solution {
public:
    string toLowerCase(string str) {
        for (auto& c : str) {
            if (isupper(c)) {
                c = tolower(c);
            }
        }
        return str;
    }
};
