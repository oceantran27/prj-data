#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/prime-subtraction-operation/

class Solution {
 public:
  bool primeSubOperation(vector<int>& nums) {
    int lim = 1100;
    vector<char> notprime(lim);
    vector<int> primes;
    for (int i = 2; i < lim; ++i) {
      if (notprime[i]) continue;
      primes.push_back(i);
      for (int j = i * i; j < lim; j += i) notprime[j] = 1;
    }

    for (int n = nums.size(), i = n - 2; i >= 0; --i) {
      if (nums[i] < nums[i + 1]) continue;
      int p = *upper_bound(primes.begin(), primes.end(), nums[i] - nums[i + 1]);
      if (p >= nums[i]) return false;
      nums[i] -= p;
    }
    return true;
  }
};
