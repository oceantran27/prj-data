#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 405 Convert a Number to Hexadecimal.cpp

class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        string ans;
        while (num) {
            ans += hex[num % 16u];
            num /= 16u;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
private:
    string hex = "0123456789abcdef";
};