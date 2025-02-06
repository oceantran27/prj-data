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
    int subarraysDivByK(vector<int> &A, int K) {
        auto size = A.size();
        unordered_map<int, int> count;
        int ret = 0, prefix = 0;
        count[0] = 1;
        for (int a : A) {
            prefix = (prefix + a) % K;
            if (prefix < 0) prefix += K;
            ret += count[prefix];
            ++count[prefix];
        }
        return ret;
    }
};