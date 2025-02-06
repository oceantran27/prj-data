#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn)
// Space: O(1)

class Solution {
public:
    int findNthDigit(int n) {
        int digit_len = 1;
        while (n > digit_len * 9 * pow(10, digit_len - 1)) {
            n -= digit_len * 9 * pow(10, digit_len - 1);
            ++digit_len;
        }

        const int num = pow(10, digit_len - 1) + (n - 1) / digit_len;

        int nth_digit = num / pow(10, (digit_len - 1) - (n - 1) % digit_len);
        nth_digit %= 10;

        return nth_digit;
    }
};
