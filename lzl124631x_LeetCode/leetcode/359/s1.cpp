#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/logger-rate-limiter/
// Author: github.com/lzl124631x
// Time: O(1)
// Space: O(M)
class Logger {
private:
    unordered_map<string, int> m;
public:
    Logger() {}
    bool shouldPrintMessage(int timestamp, string message) {
        bool ans = m.find(message) == m.end() || timestamp - m[message] >= 10;
        if (ans) m[message] = timestamp;
        return ans;
    }
};