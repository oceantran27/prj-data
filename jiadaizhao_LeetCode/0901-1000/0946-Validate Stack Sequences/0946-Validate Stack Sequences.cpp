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
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> St;
        int j = 0;
        for (int i : pushed) {
            St.push(i);
            while (!St.empty() && St.top() == popped[j]) {
                St.pop();
                ++j;
            }
        }
        return St.empty();
    }
};
