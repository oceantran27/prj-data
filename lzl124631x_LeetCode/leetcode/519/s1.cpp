#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/random-flip-matrix/
// Author: github.com/lzl124631x
// Time:
//   Solution: O(MN)
//   flip: O(1)
//   reset: O(1)
// Space: O(MN)
class Solution {
private:
    vector<int> v;
    int size, M, N;
public:
    Solution(int M, int N): M(M), N(N), size(M * N), v(M * N) {
        for (int i = 0; i < size; ++i) v[i] = i;
        srand(time(NULL));
    }
    
    vector<int> flip() {
        swap(v[rand() % size], v[size - 1]);
        --size;
        return { v[size] / N, v[size] % N };
    }
    
    void reset() {
        size = M * N;
    }
};