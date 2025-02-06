#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class StockSpanner {
    stack<pair<int, int>> arr;

public:
    int next(int price) {
        int cnt = 1;
        while (!arr.empty() && arr.top().first <= price) {
            cnt += arr.top().second;
            arr.pop();
        }
        arr.push({price, cnt});
        return cnt;
    }
};
