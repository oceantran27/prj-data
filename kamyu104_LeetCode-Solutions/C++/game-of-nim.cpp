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
    bool nimGame(vector<int>& piles) {
        return accumulate(cbegin(piles), cend(piles), 0, bit_xor<int>());
    }
};
