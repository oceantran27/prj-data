#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n * l)
// Space: O(1)

// string
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int result = 0;
        for (const auto& s : strs) {
            result = max(result, all_of(cbegin(s), cend(s), ::isdigit)
                                 ? stoi(s)
                                 : static_cast<int>(size(s)));
        }
        return result;
    }
};
