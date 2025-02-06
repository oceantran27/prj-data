#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// code_report Solution
// Problem Link (Contest):  https://leetcode.com/contest/weekly-contest-175/problems/check-if-n-and-its-double-exist/
// Problem Link (Practice): https://leetcode.com/problems/check-if-n-and-its-double-exist/

// Solution 1 - O(n) space, O(n) time

auto checkIfExist(vector<int>& a) -> bool {
    set s(a.begin(), a.end());
    return count(a.begin(), a.end(), 0) > 1 || 
        any_of(s.begin(), s.end(),
            [&](auto e) { return e != 0 && s.count(2 * e); });
}

// Solution 2 - O(1) space, O(n^2) time

auto checkIfExist(vector<int>& a) -> bool {
    return count(a.begin(), a.end(), 0) > 1 || 
        any_of(a.begin(), a.end(),
            [&](auto e) { return e != 0 && 
                any_of(a.begin(), a.end(), 
                    [&](auto f) { return f == 2 * e; }); });
}
