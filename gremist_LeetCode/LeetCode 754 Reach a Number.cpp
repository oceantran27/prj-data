#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 754 Reach a Number.cpp

class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int sum = 0, step = 0;
        while (sum < target || (sum - target) % 2) {
            sum += ++step;
        }
        return step;
    }
};