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
    int bitwiseComplement(int N) {
        int mask = 1;
        while (N > mask) {
            mask = mask * 2 + 1;
        }
        return mask - N;
    }
};
