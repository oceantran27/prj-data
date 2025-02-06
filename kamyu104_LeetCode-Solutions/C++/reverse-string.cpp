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
    void reverseString(vector<char>&  s) {
        for (int i = 0, j = s.size() - 1; i < j; ++i, --j) {
            swap(s[i], s[j]);
        }
    }
};

// Time:  O(n)
// Space: O(1)
class Solution2 {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};
