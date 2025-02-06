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
    string maxValue(string n, int x) {
        function<bool(int)> check1 = [&n, &x](int i) { return '0' + x > n[i]; };
        function<bool(int)> check2 = [&n, &x](int i) { return '0' + x < n[i]; };
        auto check = (n[0] != '-') ? check1 : check2;
        int i = 0;
        for (; i < size(n); ++i) {
            if (check(i)) {
                break;
            }
        }
        n.insert(begin(n) + i, '0' + x);
        return n;
    }
};
