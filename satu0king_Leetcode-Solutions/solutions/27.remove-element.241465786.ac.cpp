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
  int removeElement(vector<int> &nums, int val) {
    int k = 0;
    for (auto n : nums)
      if (n != val)
        nums[k++] = n;
    return k;
  }
};
