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
    bool containsDuplicate(vector<int> &nums) {
        unordered_set<int> table;
        for (auto n: nums) {
            if (table.find(n) == table.end())
                table.insert(n);
            else
                return true;
        }
        return false;
    }
};