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
  int findLeastNumOfUniqueInts(vector<int> &arr, int k) {
    unordered_map<int, int> mp;
    for (int a : arr)
      mp[a]++;
    vector<int> freq;
    for (auto p : mp)
      freq.push_back(p.second);
    sort(freq.begin(), freq.end());
    int ans = freq.size();
    for (int f : freq) {
      if (f <= k) {
        k -= f;
        ans--;
      } else
        break;
    }
    return ans;
  }
};
