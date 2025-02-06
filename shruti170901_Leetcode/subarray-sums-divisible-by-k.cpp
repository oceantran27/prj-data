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
// Space: O(k)

class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        unordered_map<int, int> count;
        count[0] = 1;
        int prefix = 0, result = 0;
        for (const auto& a : A) {
            prefix = (prefix + (a % K + K)) % K;
            result += count[prefix]++;
        }
        return result;
    }
};
