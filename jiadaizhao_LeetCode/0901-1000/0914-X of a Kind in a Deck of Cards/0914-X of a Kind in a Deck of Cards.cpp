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
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> table;
        for (int d : deck) {
            ++table[d];
        }
        int curr = 0;
        for (auto t : table) {
            curr = __gcd(curr, t.second);
            if (curr < 2) {
                return false;
            }
        }
        return true;
    }
};
