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

// simulation
class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int result = 0;
        for (int i = 1, cnt = 0; i < size(skills); ++i) {
            if (skills[result] < skills[i]) {
                result = i;
                cnt = 0;
            }
            if (++cnt == k) {
                return result;
            }
        }
        return result;
    }
};
