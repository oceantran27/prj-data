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
    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> counter;
        for (auto &m: nums)
            ++counter[m];
        priority_queue<int, vector<int>, greater<>> heap;
        for (auto &freq:counter) {
            if (heap.size() < k || freq.second > heap.top())
                heap.push(freq.second);
            if (heap.size() > k)
                heap.pop();
        }
        vector<int> ret;
        for (auto &freq:counter) {
            if (freq.second >= heap.top())
                ret.push_back(freq.first);
        }
        return ret;
    }
};
