#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: Ahmed Hossam

class Solution {
public:
    int strStr(string haystack, string needle) {
        // just use find builtin function
        int idx = haystack.find(needle);

        // string::npos means that we cannot find the subtring
        return (idx == string::npos ? -1 : idx);
    }
};
