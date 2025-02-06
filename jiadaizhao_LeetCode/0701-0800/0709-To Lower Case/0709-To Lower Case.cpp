#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        string result;
        for (char c : str) {
            if (c >= 'A' && c <= 'Z') {
                result += c - 'A' + 'a';
            }
            else {
                result += c;
            }
        }
        return result;
    }
};
