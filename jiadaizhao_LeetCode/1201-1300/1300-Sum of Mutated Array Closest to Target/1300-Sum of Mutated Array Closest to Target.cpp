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
    int findBestValue(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end(), greater<int>());
        int maxA = arr[0];
        while (arr.size() && target >= arr.back() * arr.size()) {
            target -= arr.back();
            arr.pop_back();
        }
        
        return arr.size() ? int((double)target / arr.size() + 0.5 - 0.1 / arr.size()) : maxA;
    }
};
