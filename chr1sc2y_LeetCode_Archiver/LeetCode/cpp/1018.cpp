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
    vector<bool> prefixesDivBy5(vector<int> &A) {
        int sum = 0;
        vector<bool> ret(A.size(), false);
        for (int i = 0; i < A.size(); ++i) {
            sum = (sum * 2 + A[i]) % 5;
            ret[i] = sum == 0 ? true : false;
        }
        return ret;
    }
};
