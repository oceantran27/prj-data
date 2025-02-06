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
    string replaceDigits(string s) {
        for (int i = 1; i < size(s); i += 2) {
            s[i] += s[i - 1] - '0';
        }
        return s;
    }
};
