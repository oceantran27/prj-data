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
    int arraySign(vector<int> &nums) {
        int sign = 0;
        for (auto it: nums) {
            if (it == 0) return 0;
            if (it < 0) sign++;
        }
        return sign % 2 == 0 ? 1 : -1;
    }
};