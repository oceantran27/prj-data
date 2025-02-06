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
    int countLetters(string S) {
        int result = S.length();
        int left = 0;
        for (int right = 1; right < S.length(); ++right) {
            if (S[right] == S[left]) {
                result += right - left;
            } else {
                left = right;
            }
        }
        return result;
    }
};
