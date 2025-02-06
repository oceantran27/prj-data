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

// greedy
class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        return accumulate(cbegin(damage), cend(damage), 0ll) -
               min(*max_element(cbegin(damage), cend(damage)), armor) +
               1;
    }
};
