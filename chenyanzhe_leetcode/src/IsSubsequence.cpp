#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "IsSubsequence.hpp"

bool IsSubsequence::isSubsequence(string s, string t) {
    if (s.empty()) return true;
    if (t.empty() || s.size() > t.size()) return false;

    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }

    return i == s.size();
}
