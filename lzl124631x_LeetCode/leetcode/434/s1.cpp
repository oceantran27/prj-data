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
    int countSegments(string s) {
        int n = s.size(), cnt = 0, i = 0;
        while (i < n) {
            while (i < n && s[i] == ' ') ++i;
            if (i < n) ++cnt;
            while (i < n && s[i] != ' ') ++i;
        }
        return cnt;
    }
};