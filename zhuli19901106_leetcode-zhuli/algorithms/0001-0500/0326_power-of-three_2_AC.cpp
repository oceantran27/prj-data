#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
// Sloppy solution by log() and exp().
// Using natural logarithm will result in WA.
// Using FP arithmetics on integers is bad practice.
#include <cmath>
using std::log;
using std::exp;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        return int(pow(3.0, int(log10(1.0 * n) / log10(3.0)))) == n;
    }
};
