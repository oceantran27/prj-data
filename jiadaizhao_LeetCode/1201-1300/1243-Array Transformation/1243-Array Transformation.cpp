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
    vector<int> transformArray(vector<int>& arr) {
        bool diff = true;
        while (diff) {
            vector<int> curr(arr.begin(), arr.end());
            diff = false;
            for (int i = 1; i < arr.size() - 1; ++i) {
                if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
                    ++curr[i];
                    diff = true;
                }
                else if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                    --curr[i];
                    diff = true;
                }
            }
            arr = curr;
        }
        
        return arr;
    }
};
