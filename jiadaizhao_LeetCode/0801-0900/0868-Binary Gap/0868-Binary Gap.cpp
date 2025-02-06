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
    int binaryGap(int N) {
        int maxDist = 0, last = -1, curr = 0;
        while (N) {
            if (N & 1) {
                if (last != -1) {
                    maxDist = max(maxDist, curr - last);
                }
                last = curr;
            }
            ++curr;
            N >>= 1;
        }
        return maxDist;
    }
};
