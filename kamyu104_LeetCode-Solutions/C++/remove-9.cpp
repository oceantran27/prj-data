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
    int newInteger(int n) {
        int result = 0, base = 1;
        while (n > 0) {
            result += (n % 9) * base;
            n /= 9;
            base *= 10;
        }
        return result;
    }
};
