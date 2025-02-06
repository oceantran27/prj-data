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
  vector<int> runningSum(vector<int> &nums) {
    int sum = 0;
    for (int &a : nums) {
      sum += a;
      a = sum;
    }
    return nums;
  }
};
