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

// string
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> result((size(s) + (k - 1)) / k, string(k, fill));
        for (int i = 0; i < size(s); ++i) {
            result[i / k][i % k] = s[i];
        }
        return result;
    }
};
