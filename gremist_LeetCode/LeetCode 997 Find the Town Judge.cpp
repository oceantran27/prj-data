#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 997 Find the Town Judge.cpp

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> id(N);
        vector<int> od(N);
        for (vector<int> &p : trust) {
            id[p[1] - 1]++;
            od[p[0] - 1]++;
        }
        for (int i = 0; i < N; i++) {
            if (id[i] == N - 1 && od[i] == 0) {
                return i + 1;
            }
        }
        return -1;
    }
};