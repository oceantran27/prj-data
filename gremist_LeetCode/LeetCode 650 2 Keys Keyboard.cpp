#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 650 2 Keys Keyboard.cpp

class Solution {
public:
    int minSteps(int n) {
        int ans = 0;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                ans += i;
                n /= i;
            }
        }
        return ans;
    }
};