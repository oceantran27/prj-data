#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 413 Arithmetic Slices.cpp

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int num = 0, l = 0;
        for (int i = 2; i < A.size(); i++) {
            if (A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
                num += ++l;
            } else {
                l = 0;
            }
        }
        return num;
    }
};