#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/

class Solution {
 public:
  vector<int> smallestSubarrays(vector<int>& nums) {
    vector<int> last(30);
    int n = nums.size();
    vector<int> answer(n);

    for (int i = n - 1; i >= 0; --i) {
      for (int j = 0; j < 30; ++j)
        if (nums[i] & (1 << j)) last[j] = i;

      answer[i] = max(1, *max_element(last.begin(), last.end()) - i + 1);
    }
    return answer;
  }
};
