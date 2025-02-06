#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

class Solution {
public:
    int countOdds(int low, int high) {
        return (high + 1) / 2 - ((low - 1) + 1) / 2;
    }
};
