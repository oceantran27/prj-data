#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 893 Groups of Special-Equivalent Strings.cpp

class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_set<string> s;
        for (string &a : A) {
            string odd, even;
            for (int i = 0; i < a.size(); i++) {
                (i % 2 ? odd : even) += a[i];
            }
            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            s.insert(odd + even);
        }
        return s.size();
    }
};