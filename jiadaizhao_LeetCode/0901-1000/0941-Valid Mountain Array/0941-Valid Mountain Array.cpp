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
    bool validMountainArray(vector<int>& A) {
        int i = 0, n = A.size();
        while (i < n - 1 && A[i] < A[i + 1]) {
            ++i;
        }
        if (i == 0 || i == n - 1) {
            return false;
        }
        while (i < n - 1 && A[i] > A[i + 1]) {
            ++i;
        }
        return i == n - 1;
    }
};
