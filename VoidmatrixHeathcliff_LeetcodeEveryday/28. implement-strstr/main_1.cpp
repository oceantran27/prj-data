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
    int strStr(string haystack, string needle) {
        int iLengthHaystack = haystack.size(), iLengthNeedle = needle.size();
        for (int index = 0; index < iLengthHaystack - iLengthNeedle + 1; index++)
            if (haystack.substr(index, iLengthNeedle) == needle)
                return index;
        return -1;
    }
};