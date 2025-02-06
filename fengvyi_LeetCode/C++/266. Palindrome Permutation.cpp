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
    bool canPermutePalindrome(string s) {
        unordered_map<char, int>m;
        int odd = 0;
        for(auto c: s) (m[c]++ % 2) ? odd-- : odd++;
        return odd <= 1;
    }
};
