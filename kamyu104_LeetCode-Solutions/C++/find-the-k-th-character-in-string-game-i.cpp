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

// bitmasks
class Solution {
public:
    char kthCharacter(int k) {
        return 'a' + __builtin_popcount(k - 1) % 26;
    }
};
