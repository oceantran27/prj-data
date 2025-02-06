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
    int jump(int A[], int n) {
        /* https://oj.leetcode.com/problems/jump-game-ii/
        like BFS
        */
        
        if (n <= 1) return 0;
        
        int step = 0, start = 0, end = 0;
        while (start <= end) {
            ++step;
            int reachTo = end;
            for (int i = start; i <= end; i++) { // the current level
                if (i + A[i] > reachTo) {
                    reachTo = i + A[i];
                    if (reachTo >= n - 1) return step;
                }
            }
            start = end + 1;
            end = reachTo;
        }
        
        return INT_MAX;  // cannot reach
    }
};