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
    int singleNumber(vector<int> &nums) {
        unordered_set<int> single;
        for (auto num: nums) {
            if (single.find(num) == single.end())
                single.insert(num);
            else
                single.erase(num);
        }
        for (auto s : single)
            return s;
    }
};