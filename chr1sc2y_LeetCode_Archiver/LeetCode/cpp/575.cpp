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
    int distributeCandies(vector<int> &candies) {
        unordered_set<int> kind;
        for (auto candy : candies)
            if (kind.find(candy) == kind.end())
                kind.insert(candy);
        return min(kind.size(), candies.size() / 2);
    }
};