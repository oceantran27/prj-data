#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// medium
// Whenever you play with numbers, make sure you don't overflow.
#include <cstdint>

class Solution {
public:
    int findNthDigit(int n) {
        int c = 1;
        int64_t b = 9;
        while (n > c * b) {
            n -= c * b;
            b *= 10;
            ++c;
        }
        int d = (n - 1) / c + b / 9;
        int r = (n - 1) % c + 1;
        int i;
        for (i = c; i > r; --i) {
            d /= 10;
        }
        return d % 10;
    }
};
