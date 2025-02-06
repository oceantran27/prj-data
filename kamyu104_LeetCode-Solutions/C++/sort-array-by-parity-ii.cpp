#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int j = 1;
        for (int i = 0; i < A.size(); i += 2) {
            if (A[i] % 2) {
                while (A[j] % 2) {
                    j += 2;
                }
                swap(A[i], A[j]);
            }
        }
        return A;
    }
};
