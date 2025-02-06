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
    int minFlipsMonoIncr(string S) {
        int minFlip = 0, count1 = 0;
        for (char c : S) {
            if (c == '1') {
                ++count1;
            }
            else {
                minFlip = min(minFlip + 1, count1);
            }
        }
        return minFlip;
    }
};
