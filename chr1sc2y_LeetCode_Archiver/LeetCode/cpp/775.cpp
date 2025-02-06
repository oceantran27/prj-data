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
    bool isIdealPermutation(vector<int> &A) {
        int size = A.size(), m = INT_MIN;
        for (int i = 0; i < size - 2; ++i) {
            m = max(m, A[i]);
            if (m > A[i + 2])
                return false;
        }
        return true;
    }
};