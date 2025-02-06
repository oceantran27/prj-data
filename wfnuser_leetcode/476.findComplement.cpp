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
    int findComplement(int num) {
        int ans = 0;
        uint32_t n = ~num;

        for (int i = 31; i >= 0; i--) {
            uint32_t bit = (1<<i);
            if ((bit&num) > 0) break;
            n = n & (~bit);
        }

        return n;
    }
};