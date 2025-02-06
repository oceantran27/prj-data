#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 728 Self Dividing Numbers.cpp

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int n = i;
            while (n % 10 && i % (n % 10) == 0) {
                n /= 10;
            }
            if (n == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};