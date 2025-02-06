#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/divisor-game/
// Author: github.com/lzl124631x
// Time: O(1)
// Space: O(1)
// Ref: https://leetcode.com/problems/divisor-game/discuss/274566/just-return-N-2-0-(proof)
class Solution {
public:
    bool divisorGame(int N) {
        return N % 2 == 0;
    }
};