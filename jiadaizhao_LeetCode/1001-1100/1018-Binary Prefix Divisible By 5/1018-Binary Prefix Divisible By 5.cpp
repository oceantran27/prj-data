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
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> result(A.size());
        int curr = 0;
        for (int i = 0; i < A.size(); ++i) {
            curr = (curr * 2 + A[i]) % 5;
            if (curr == 0) {
                result[i] = true;
            }
        }
        
        return result;
    }
};
