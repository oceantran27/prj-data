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
    int frq[20001], delta = 1e4;
    int findKthLargest(vector<int>& nums, int k) {
        memset(frq, 0, sizeof frq);
        for (int i = 0; i < nums.size(); i++)
            frq[nums[i] + delta]++;
        for (int i = 20000; i >= 0; i--){
            k -= frq[i];
            if (k <= 0) return i - delta;
        }
        return -1;
    }
};