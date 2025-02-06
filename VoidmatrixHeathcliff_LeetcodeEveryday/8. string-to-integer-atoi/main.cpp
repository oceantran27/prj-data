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
    int myAtoi(string s) {
        long _ltmp = atol(s.c_str());
        return _ltmp < INT_MIN ? INT_MIN : (_ltmp > INT_MAX ? INT_MAX : _ltmp);
    }
};