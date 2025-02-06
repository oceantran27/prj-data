#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(1)

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(begin(piles), end(piles));
        int result = 0;
        for (int i = piles.size() / 3; i < piles.size(); i += 2) {
            result += piles[i];
        }
        return result;
    }
};
