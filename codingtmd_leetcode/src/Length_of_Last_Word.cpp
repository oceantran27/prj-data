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
    int lengthOfLastWord(const char *s) {
        const char* pStart = s;
        const char* pEnd = s;
        const char* p = s;
        const char* pre = s;

        while (*p != '\0')
        {
            if (*pre == ' ' && *p != ' ') pStart = p;
            if (*pre != ' ' && *p == ' ') pEnd = p;

            pre = p;
            p++;
        }

        if (*pre != ' ' && *p == '\0') pEnd = p;
        return pEnd - pStart;
    }
};