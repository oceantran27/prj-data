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
    bool canReorderDoubled(vector<int>& A) {
        unordered_map<int, int> c;
        for (int a : A) c[a]++;
        vector<int> keys;
        for (auto it : c)
            keys.push_back(it.first);
        sort(keys.begin(), keys.end(), [](int i, int j) {return abs(i) < abs(j);});
        for (int x : keys) {
            if (c[x] > c[2 * x])
                return false;
            c[2 * x] -= c[x];
        }
        return true;
    }
};