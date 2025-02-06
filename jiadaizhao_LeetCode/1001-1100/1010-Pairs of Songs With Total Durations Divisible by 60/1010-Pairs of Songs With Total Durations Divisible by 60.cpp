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
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> table(60);
        int total = 0;
        for (int t : time) {
            t %= 60;
            total += table[(60 - t) % 60];
            ++table[t];
        }
        return total;
    }
};
