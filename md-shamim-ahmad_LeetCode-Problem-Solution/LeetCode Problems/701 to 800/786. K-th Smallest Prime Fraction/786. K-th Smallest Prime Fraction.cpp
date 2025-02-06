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
    vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k) {
        vector<pair<float, pair<int, int>>> res;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                res.push_back({arr[i] / (float) arr[j], {arr[i], arr[j]}});
            }
        }
        sort(res.begin(), res.end());
        return {res[k - 1].second.first, res[k - 1].second.second};
    }
};