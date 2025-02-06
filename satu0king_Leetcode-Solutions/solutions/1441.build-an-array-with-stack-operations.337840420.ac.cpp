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
  vector<string> buildArray(vector<int> &target, int n) {
    vector<string> ans;

    int l = 1;
    for (int p : target) {
      while (l++ != p) {
        ans.push_back("Push");
        ans.push_back("Pop");
      }
      ans.push_back("Push");
    }

    return ans;
  }
};
