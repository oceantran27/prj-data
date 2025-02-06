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
    int findLucky(vector<int>& arr) {
        int cnt[501] = {};
        for (int i : arr) cnt[i]++;
        
        for (int i = 500; i; i--) {
            if (cnt[i] == i) return i;
        }
        return -1;
    }
};