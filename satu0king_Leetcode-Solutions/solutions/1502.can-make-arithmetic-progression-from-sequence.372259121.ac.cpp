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
  bool canMakeArithmeticProgression(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    for (int i = 2; i < arr.size(); i++)
      if (arr[i] + arr[i - 2] != 2 * arr[i - 1])
        return false;
    return true;
  }
};
