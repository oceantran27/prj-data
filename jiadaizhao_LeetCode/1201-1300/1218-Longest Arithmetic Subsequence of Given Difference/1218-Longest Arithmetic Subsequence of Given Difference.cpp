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
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int, int> table;
        int maxLen = 0;
        for (int a : arr) {
            table[a] = table[a - difference] + 1;
            maxLen = max(maxLen, table[a]); 
        }

        return maxLen;
    }
};
