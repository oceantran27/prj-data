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
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> table;
        for (int i : candies) {
            table.insert(i);
        }
        
        return min(table.size(), candies.size() / 2);
    }
};
