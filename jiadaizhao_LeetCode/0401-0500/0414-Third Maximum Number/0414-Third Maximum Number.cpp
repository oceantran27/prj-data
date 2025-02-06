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
    int thirdMax(vector<int>& nums) {
        set<int> table;
        for (int& num : nums) {
            table.insert(num);
            if (table.size() > 3) {
                table.erase(table.begin());
            }
        }
        
        return table.size() == 3 ? *table.begin() : *table.rbegin();
    }
};
