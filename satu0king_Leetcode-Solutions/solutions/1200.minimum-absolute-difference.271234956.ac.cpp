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
  vector<vector<int>> minimumAbsDifference(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    int mn = INT_MAX;
    int n = arr.size();
    for (int i = 1; i < n; i++)
      mn = min(mn, arr[i] - arr[i - 1]);
    vector<vector<int>> ans;

    for (int i = 1; i < n; i++) {
      if (arr[i] - arr[i - 1] == mn)
        ans.push_back({arr[i - 1], arr[i]});
    }

    return ans;
  }
};
