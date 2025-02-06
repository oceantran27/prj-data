#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(1)
// Space: O(1)

// array
class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        return max(event1[0], event2[0]) <= min(event1[1], event2[1]);
    }
};
