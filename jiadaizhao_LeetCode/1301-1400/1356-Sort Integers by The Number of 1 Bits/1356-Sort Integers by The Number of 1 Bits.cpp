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
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](const int a, const int b) {
            int countA = __builtin_popcount(a);
            int countB = __builtin_popcount(b);
            return countA == countB ? a < b : countA < countB;
        });
        return arr;
    }
};
