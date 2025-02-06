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
    string shiftingLetters(string S, vector<int>& shifts) {
        string result;
        auto times = accumulate(shifts.cbegin(), shifts.cend(), 0L) % 26;
        for (int i = 0; i < S.length(); ++i) {
            result.push_back('a' + (S[i] - 'a' + times) % 26);
            times = ((times - shifts[i]) % 26 + 26) % 26;
        }
        return result;
    }
};
