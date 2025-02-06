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
    string breakPalindrome(string palindrome) {
        for (int i = 0; i < palindrome.length() / 2; ++i) {
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        if (palindrome.length() >= 2) {
            palindrome.back() = 'b';
            return palindrome;
        }
        return "";
    }
};
