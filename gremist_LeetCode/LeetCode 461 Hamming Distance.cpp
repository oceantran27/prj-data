#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 461 Hamming Distance.cpp

class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0, n = x ^ y;
        while (n) {
            n &= n - 1;
            cnt++;
        }
        return cnt;
    }
};