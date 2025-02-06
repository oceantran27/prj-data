#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        const int R = 10;
        int x1 = x;
        int r = 0;
        while (x1 > 0) {
            r = r * R + x1 % R;
            x1 /= R;
        }
        return r == x;
    }
};
