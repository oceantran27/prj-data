#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

// math, bit manipulation
class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n << (n & 1);
    }
};
