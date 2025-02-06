#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "PalindromePermutation.hpp"

#include <vector>

using namespace std;

bool PalindromePermutation::canPermutePalindrome(string s) {
    vector<int> count(256, 0);
    int odd = 0;
    for (auto c : s) {
        count[c]++;
        if (count[c] % 2)
            odd++;
        else
            odd--;
    }
    return odd <= 1;
}