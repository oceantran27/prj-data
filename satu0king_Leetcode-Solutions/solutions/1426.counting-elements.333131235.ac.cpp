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
  int countElements(vector<int> &arr) {
    vector<bool> lookup(1002);
    for (int a : arr)
      lookup[a] = true;

    int ans = 0;

    for (int a : arr)
      ans += lookup[a + 1];

    return ans;
  }
};
