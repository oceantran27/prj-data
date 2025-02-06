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
  int validSubarrays(vector<int> &nums) {
    int ans = 0;
    stack<int> s;
    int n = nums.size();
    for (int i = n - 1; i >= 0; i--) {
      while (s.size() && nums[i] <= nums[s.top()])
        s.pop();

      if (s.size())
        ans += s.top() - i;
      else
        ans += n - i;
      s.push(i);
    }
    return ans;
  }
};
