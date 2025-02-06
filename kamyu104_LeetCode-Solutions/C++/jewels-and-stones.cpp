#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(m + n)
// Space: O(n)

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> lookup;
        for (const auto& j : J) {
            lookup.emplace(j);
        }
        int result = 0;
        for (const auto& s : S) {
            result += lookup.count(s);
        }
        return result;
    }
};
