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
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0, n = str1.size(), m = str2.size();
        for(int i = 0; i < n && j < m; ++i){
            if (str1[i] == str2[j] || str1[i] + 1 == str2[j] || str1[i] - 25 == str2[j])
                ++j;
        }
        return j==m;
    }
};