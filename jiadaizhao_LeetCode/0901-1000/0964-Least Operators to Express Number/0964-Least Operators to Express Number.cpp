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
    int leastOpsExpressTarget(int x, int target) {
        int pos = 0, neg = 0, k = 0;
        while (target) {
            int curr = target % x;
            target /= x;
            if (k == 0) {
                pos = curr * 2;
                neg = (x - curr) * 2;
            }
            else {
                int temp = pos;
                pos = min(curr * k + pos, (curr + 1) * k + neg);
                neg = min((x - curr) * k + temp, (x - curr - 1) * k + neg);
            }
            ++k;
        }
            
        return min(pos, k + neg) - 1;
    }
};
