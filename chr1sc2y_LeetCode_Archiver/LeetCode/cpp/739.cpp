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
    vector<int> dailyTemperatures(vector<int> &T) {
        int n = T.size();
        stack<int> s;
        vector<int> ret(n, 0);
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && T[s.top()] < T[i]) {
                ret[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return ret;
    }
};
