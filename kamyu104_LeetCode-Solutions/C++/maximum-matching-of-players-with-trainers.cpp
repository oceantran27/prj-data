#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn + mlogm)
// Space: O(1)

// greedy, sort
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(begin(players), end(players));
        sort(begin(trainers), end(trainers));
        int result = 0;
        for (const auto& trainer : trainers) {
            if (trainer < players[result]) {
                continue;
            }
            if (++result == size(players)) {
                break;
            }
        }
        return result;
    }
};
