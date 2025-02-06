#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 771 Jewels and Stones.cpp

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        vector<bool> ht(128);
        for (char &ch : J) {
            ht[ch] = true;
        }
        int cnt = 0;
        for (char &ch : S) {
            if (ht[ch]) {
                cnt++;
            }
        }
        return cnt;
    }
};