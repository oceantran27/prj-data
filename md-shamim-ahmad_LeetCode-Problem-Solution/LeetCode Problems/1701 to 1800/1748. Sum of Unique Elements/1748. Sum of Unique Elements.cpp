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
    int sumOfUnique(vector<int> &nums) {
        map<int, int> arr;
        for (auto it: nums) {
            arr[it]++;
        }
        int sum = 0;
        for (auto it: arr) {
            if (it.second == 1) {
                sum += it.first;
            }
        }
        return sum;
    }
};