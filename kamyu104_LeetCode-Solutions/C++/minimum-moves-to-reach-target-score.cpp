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

// greedy
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int result = 0;
        for (; target > 1 && maxDoubles; target /= 2, --maxDoubles) {
            result += 1 + target % 2;
        }
        return result + (target - 1);
    }
};
