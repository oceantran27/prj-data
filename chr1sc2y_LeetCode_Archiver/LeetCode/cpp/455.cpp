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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = s.size() - 1, j = g.size() - 1;
        while (i >= 0 && j >= 0) {
            if(s[i] >= g[j])
                --i;
            --j;
        }
        return s.size() - i - 1;
    }
};