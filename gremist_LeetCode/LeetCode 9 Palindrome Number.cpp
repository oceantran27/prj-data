#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 9 Palindrome Number.cpp

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x && !(x % 10)) return false;
        int y = 0;
        while (x > y) {
            y = 10 * y + x % 10;
            x /= 10;
        }
        return x == y || x == y / 10;
    }
};