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
    bool isIdealPermutation(vector<int>& A) {
        int n = A.size();
        int maxNum = A[0];
        for (int i = 0; i < n - 2; ++i) {
            maxNum = max(maxNum, A[i]);
            if (maxNum > A[i + 2]) return false;
        }

        return true;
    }
};
