#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> table;
        int total = 0;
        for (auto d : dominoes) {
            if (d[0] > d[1]) {
                swap(d[0], d[1]);
            }
            total += table[d[0] * 10 + d[1]]++;
        }
        return total;
    }
};
