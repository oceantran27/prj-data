#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        int num = 0, odd = 0;
        for (auto c:s)
            ++m[c];
        for (auto iter:m) {
            num += 2 * (iter.second / 2);
            if (odd == 0)
                odd = iter.second % 2;
        }
        return num + odd;
    }
};