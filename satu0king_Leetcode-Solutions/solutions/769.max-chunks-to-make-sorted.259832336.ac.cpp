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
  int maxChunksToSorted(vector<int> &arr) {
    int ans = 0;
    int r = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
      r = max(r, arr[i]);
      if (r == i)
        ans++;
    }

    return ans;
  }
};
