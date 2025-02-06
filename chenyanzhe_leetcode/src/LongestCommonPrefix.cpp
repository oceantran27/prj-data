#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "LongestCommonPrefix.hpp"

string LongestCommonPrefix::longestCommonPrefix(vector<string> &strs) {
    if (strs.empty())
        return "";

    for (int idx = 0; idx < strs[0].size(); ++idx) {
        for (int i = 1; i < strs.size(); ++i) {
            if (strs[i][idx] != strs[0][idx])
                return strs[0].substr(0, idx);
        }
    }

    return strs[0];
}
