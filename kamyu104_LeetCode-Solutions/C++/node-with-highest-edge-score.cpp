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

// freq table
class Solution {
public:
    int edgeScore(vector<int>& edges) {
        vector<int64_t> score(size(edges));
        for (int u = 0; u < size(edges); ++u) {
            score[edges[u]] += u;
        }
        return distance(cbegin(score), max_element(cbegin(score), cend(score)));
    }
};
