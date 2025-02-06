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
    int thirdMax(vector<int> &nums) {
        set<int> se;
        for (auto n:nums)
            se.insert(n);
        return se.size() >= 3 ? *(--(--(--se.end()))) : *(--se.end());
    }
};
