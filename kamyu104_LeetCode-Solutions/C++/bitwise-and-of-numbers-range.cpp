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

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        while (m < n) {  // Remove the last bit 1 until n <= m.
            n &= n - 1;
        }
        return n;
    }
};
