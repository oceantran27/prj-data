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

// combinatorics
class Solution {
public:
    long long countSubstrings(string s, char c) {
        const int64_t n = count(cbegin(s), cend(s), c);
        return (n + 1) * n / 2;
    }
};
