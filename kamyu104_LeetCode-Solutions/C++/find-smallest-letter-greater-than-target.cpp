#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn)
// Space: O(1)

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        const auto cit = upper_bound(letters.cbegin(), letters.cend(), target);
        return cit != letters.cend() ? *cit : letters.front();
    }
};
