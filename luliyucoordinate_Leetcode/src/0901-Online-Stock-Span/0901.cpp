#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <stack>
using namespace std;

static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class StockSpanner 
{
public:
    stack<pair<int, int>> s;
    int next(int price) 
    {
        int res = 1;
        while (!s.empty() && s.top().first <= price) 
        {
            res += s.top().second;
            s.pop();
        }
        s.push({price, res});
        return res;
    }
};