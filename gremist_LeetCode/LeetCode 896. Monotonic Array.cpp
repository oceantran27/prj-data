#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 896. Monotonic Array.cpp

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool inc = false, dec = false;
        for (int i = 0; i < A.size() - 1; i++) {
            inc |= A[i] < A[i + 1];
            dec |= A[i] > A[i + 1];
            if (inc && dec) {
                return false;
            }
        }
        return true;
    }
};