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
// Space: O(n)

class Solution {
public:
    int findLatestStep(vector<int>& arr, int m) {
        int result = -1;
        if (m == arr.size()) {
            return m;
        }
        vector<int> length(arr.size() + 2);
        for (int i = 0; i < arr.size(); ++i) {
            int x = arr[i], left = length[x - 1], right = length[x + 1];
            if (left == m || right == m) {
                result = i;
            }
            length[x - left] = length[x + right] = left + right + 1;
        }
        return result;
    }
};
