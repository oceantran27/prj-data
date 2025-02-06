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
        int curr = 0;
        const char* p = s;
        while (*p != '\0') {
            if (*p == ' ') {
                p++;
            } else {
                curr = 0;
                while (*p != '\0' && *p != ' ') {
                    p++;
                    curr++;
                }
            }
        }
        return curr;
    }
};
