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
    int hammingWeight(uint32_t n) {
        int m = 8 * sizeof(uint32_t);
        int count = 0;
        while (m > 0) {
            count += 1 & n;
            n = n >> 1;
            --m;
        }
        return count;
    }
};