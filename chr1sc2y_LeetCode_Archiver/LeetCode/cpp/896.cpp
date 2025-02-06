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
    bool isMonotonic(vector<int> &A) {
        auto size = A.size();
        int &&inc = 0;
        for (int i = 0; i < size - 1; ++i) {
            if (A[i] < A[i + 1]) {
                if (inc == -1)
                    return false;
                inc = 1;
            } else if (A[i] > A[i + 1]) {
                if (inc == 1)
                    return false;
                inc = -1;
            }
        }
        return true;
    }
};
