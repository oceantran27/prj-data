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
    vector<bool> prefixesDivBy5(vector<int>& A) {
        for (int i = 1; i < A.size(); ++i) {
            A[i] += A[i - 1] * 2 % 5;
        }
        vector<bool> result(A.size());
        transform(A.cbegin(), A.cend(), result.begin(),
                  [](int x) { return x % 5 == 0; });
        return result;
    }
};
