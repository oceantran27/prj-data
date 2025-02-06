#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 434 Number of Segments in a String.cpp

class Solution {
public:
    int countSegments(string s) {
        s += " ";
        int cnt = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] != ' ' && s[i + 1] == ' ') {
                cnt++;
            }
        }
        return cnt;
    }
};