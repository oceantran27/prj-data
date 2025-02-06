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
    string maximumNumber(string num, vector<int>& change) {
        bool mutated = false;
        for (int i = 0; i < size(num); ++i) {
            int d = num[i] - '0';
            if (change[d] < d) {
                if (mutated) {
                    break;
                }
            } else if (change[d] > d) {
                num[i] = '0' + change[d];
                mutated = true;
            }
        }
        return num;
    }
};
