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
  int smallestRepunitDivByK(int K) {
    vector<bool> visited(K);
    int candidate = 1;
    int ans = 1;
    while (candidate % K) {
      if (visited[candidate])
        return -1;
      visited[candidate] = true;
      candidate = candidate * 10 + 1;
      candidate %= K;
      ans++;
    }
    return ans;
  }
};
