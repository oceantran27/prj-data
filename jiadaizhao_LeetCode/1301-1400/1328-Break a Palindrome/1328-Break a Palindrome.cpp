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
    string breakPalindrome(string palindrome) {
        if (palindrome.size() == 1) {
            return "";
        }
        for (int i = 0; i < palindrome.size() / 2; ++i) {
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        
        palindrome.back() = 'b';
        return palindrome;
    }
};
