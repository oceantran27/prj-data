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
    vector<int> replaceElements(vector<int>& arr) {
        int curr_max = -1;
        for (int i = arr.size() - 1; i >= 0; --i) {
            tie(arr[i], curr_max) = make_pair(curr_max, max(curr_max, arr[i]));
        }
        return arr;
    }
};
