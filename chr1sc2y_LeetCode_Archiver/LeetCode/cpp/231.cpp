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
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        while ((n & 1) == 0)
            n >>= 1;
        return n == 1;
    }
};
