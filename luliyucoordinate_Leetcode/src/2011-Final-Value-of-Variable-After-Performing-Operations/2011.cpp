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
  int finalValueAfterOperations(vector<string>& operations) {
    int res = 0;
    for (auto& op : operations) {
      if (op[1] == '+')
        res++;
      else
        res--;
    }
    return res;
  }
};