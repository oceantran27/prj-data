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
    int strStr(string &haystack, string &needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0)
            return 0;
        for (int i = 0; i < n; ++i) {
            if (i + m > n)
                return -1;
            int j = 0;
            while (j < m && haystack[i + j] == needle[j])
                ++j;
            if (j == m)
                return i;
        }
        return -1;
    }
};
