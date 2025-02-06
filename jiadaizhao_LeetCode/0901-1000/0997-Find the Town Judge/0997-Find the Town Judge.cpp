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
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> table(N + 1);
        for (auto& t : trust) {
            --table[t[0]];
            ++table[t[1]];
        }
        
        for (int i = 1; i <= N; ++i) {
            if (table[i] == N - 1) {
                return i;
            }
        }
        return -1;
    }
};
