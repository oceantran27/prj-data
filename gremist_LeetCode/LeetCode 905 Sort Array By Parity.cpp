#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 905 Sort Array By Parity.cpp

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        for (int i = 0, j = 0; i < A.size(); i++) {
            if (A[i] % 2 == 0) {
                swap(A[i], A[j++]);
            }
        }
        return A;
    }
};