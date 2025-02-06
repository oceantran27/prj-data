#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/online-stock-span/
// Author: github.com/lzl124631x
// Time: O(1) amortized
// Space: O(N)
class StockSpanner {
    stack<pair<int, int>> s; // val, index
    int i = 0;
public:
    StockSpanner() {
        s.emplace(INT_MAX, -1);
    }
    int next(int price) {
        while (s.top().first <= price) s.pop();
        int span = i - s.top().second;
        s.emplace(price, i++);
        return span;
    }
};