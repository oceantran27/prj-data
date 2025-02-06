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
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped) {
        stack<int> res;
        int i = 0, n = popped.size();
        for (auto &p:pushed) {
            res.push(p);
            while (!res.empty() && i < n && res.top() == popped[i]) {
                ++i;
                res.pop();
            }
        }
        return i == n;
    }
};
