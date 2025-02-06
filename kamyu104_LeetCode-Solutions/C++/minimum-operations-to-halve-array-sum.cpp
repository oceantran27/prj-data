#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(n)

// heap
class Solution {
public:
    int halveArray(vector<int>& nums) {
        auto target = accumulate(cbegin(nums), cend(nums), 0.0) / 2;
        priority_queue<double> max_heap(cbegin(nums), cend(nums));
        int result = 1;
        while (!empty(max_heap)) {
            double x = max_heap.top() / 2; max_heap.pop();
            target -= x;
            if (target <= 0.0) {
                break;
            }
            max_heap.emplace(x);
            ++result;
        }
        return result;
    }
};
