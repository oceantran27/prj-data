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
  int numOfSubarrays(vector<int> &arr, int k, int threshold) {
    int sum = 0;
    int ans = 0;
    for (int r = 0; r < arr.size(); r++) {
      sum += arr[r];
      if (r >= k)
        sum -= arr[r - k];
      if (r >= k - 1 && sum >= threshold * k)
        ans++;
    }
    return ans;
  }
};
