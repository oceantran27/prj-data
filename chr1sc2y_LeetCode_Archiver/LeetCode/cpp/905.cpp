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
    vector<int> sortArrayByParity(vector<int> &A) {
        int i = 0, j = 0;
        while (j < A.size()) {
            if (A[j] % 2 == 0) {
                swap(A[i], A[j]);
                ++i;
            }
            ++j;
        }
        return A;
    }
};