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
    bool canThreePartsEqualSum(vector<int>& A) {
        int total = accumulate(A.begin(), A.end(), 0);
        if (total % 3) {
            return false;
        }
        int target = total / 3;
        int curr = 0, count = 0, tc = target ? 3 : 2;
        for (int a : A) {
            curr += a;
            if (curr == target) {
                if (++count == tc) {
                    return true;
                }
                curr = 0;
            }
        }
        
        return false;
    }
};
