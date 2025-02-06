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
    int nextGreaterElement(int n) {
        string s = to_string(n);
        next_permutation(begin(s), end(s));
        auto res = stoll(s);
        return (res > INT_MAX || res <= n) ? -1 : res;
    }
};
