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
    int minNumberOperations(vector<int>& target) {
        int result = target[0];
        for (int i = 1; i < target.size(); ++i) {
            result += max(target[i] - target[i - 1], 0);
        }
        return result;
    }
};
