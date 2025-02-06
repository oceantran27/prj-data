#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-subsequence-score/

class Solution {
 public:
  long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
    int n = nums1.size();
    vector<int> id(n);
    iota(id.begin(), id.end(), 0);
    sort(id.begin(), id.end(),
         [&](int i, int j) { return nums2[i] > nums2[j]; });

    long long tot{}, ret{};
    multiset<int> ms;
    for (int i = 0; i < n; ++i) {
      int a = nums1[id[i]], b = nums2[id[i]];
      tot += a;
      ms.insert(a);
      if (ms.size() > k) {
        tot -= *ms.begin();
        ms.erase(ms.begin());
      }

      if (ms.size() == k) ret = max(ret, tot * b);
    }
    return ret;
  }
};
