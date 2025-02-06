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
    vector<int> sumZero(int n) {
        vector<int> result;
        for (int i = -(n / 2); i <= (n / 2); ++i) {
            if (i == 0 && n % 2 == 0) {
                continue;
            }
            result.emplace_back(i);
        }
        return result;
    }
};
