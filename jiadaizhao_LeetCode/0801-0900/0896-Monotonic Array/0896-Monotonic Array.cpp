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
    bool isMonotonic(vector<int>& A) {
        bool inc = false, dec = false;
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] > A[i + 1]) {
                if (inc) {
                    return false;
                }
                dec = true;
            }
            else if (A[i] < A[i + 1]) {
                if (dec) {
                    return false;
                }
                inc = true;
            }
        }
        return true;
    }
};
