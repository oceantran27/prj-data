#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  (2^n)
// Space: O(1)

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result = {0};
        for (int i = 0; i < n; ++i) {
            for (int j = result.size() - 1; j >= 0; --j) {
                result.emplace_back(1 << i | result[j]);
            }
        }
        return result;
    }
};

// Time:  (2^n)
// Space: O(1)
// Proof of closed form formula could be found here:
// http://math.stackexchange.com/questions/425894/proof-of-closed-form-formula-to-convert-a-binary-number-to-its-gray-code
class Solution2 {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        for (int i = 0; i < 1 << n; ++i) {
            result.emplace_back(i >> 1 ^ i);
        }
        return result;
    }
};
