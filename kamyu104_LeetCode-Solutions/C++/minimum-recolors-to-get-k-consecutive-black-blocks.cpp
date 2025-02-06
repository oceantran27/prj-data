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

// sliding window
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int result = k;
        for (int i = 0, curr = 0; i < size(blocks); ++i) {
            curr += static_cast<int>(blocks[i] == 'W');
            if (i + 1 - k < 0) {
                continue;
            }
            result = min(result, curr);
            curr -= static_cast<int>(blocks[i + 1 - k] == 'W');
        }
        return result;
    }
};
