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
    int lastStoneWeight(vector<int> &stones) {
        priority_queue<int> heap;
        for (auto &stone:stones)
            heap.push(stone);
        while (!heap.empty()) {
            int i = heap.top();
            heap.pop();
            if (heap.empty())
                return i;
            int j = heap.top();
            heap.pop();
            heap.push(i - j);
        }
        return heap.top();
    }
};
