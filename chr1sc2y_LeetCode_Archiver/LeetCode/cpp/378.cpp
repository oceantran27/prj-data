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
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        int n = matrix.size();
        if (n == 0)
            return 0;
        priority_queue<int> heap;
        for (auto &m: matrix) {
            for (auto &num: m) {
                if (heap.size() > k)
                    heap.pop();
                if (heap.size() < k || num < heap.top())
                    heap.push(num);
                else
                    break;
            }
        }
        return heap.top();
    }
};