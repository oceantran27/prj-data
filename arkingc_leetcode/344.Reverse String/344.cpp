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
    string reverseString(string s) {
        int l = 0,r = s.length() - 1;
        while(l < r)
            swap(s[l++],s[r--]);
        return s;
    }
};