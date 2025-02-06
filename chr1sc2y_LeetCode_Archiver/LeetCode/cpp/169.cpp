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
    int majorityElement(vector<int> &nums) {
        int maj = 0, max_n = 0;
        unordered_map<int, int> m;
        for (auto n : nums) {
            if (m.find(n) == m.end())
                m[n] = 0;
            ++m[n];
            if (max_n < m[n]) {
                max_n = m[n];
                maj = n;
            }
        }
        return maj;
    }
};

