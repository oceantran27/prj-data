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
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> result;
        for (int i = A.size(); i > 0; --i) {
            int j = 0;
            while (A[j] != i) {
                ++j;
            }
            
            if (j != i - 1) {
                reverse(A.begin(), A.begin() + j + 1);
                result.push_back(j + 1);
                reverse(A.begin(), A.begin() + i);
                result.push_back(i);
            }
        }

        return result;
    }
};
