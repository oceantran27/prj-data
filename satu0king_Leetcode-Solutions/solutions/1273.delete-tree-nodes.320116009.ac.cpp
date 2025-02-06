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
  int deleteTreeNodes(int nodes, vector<int> &parent, vector<int> &value) {

    vector<int> res(nodes);
    for (int i = nodes - 1; i > 0; --i) {
      value[parent[i]] += value[i];
      res[parent[i]] += value[i] ? res[i] + 1 : 0;
    }
    return value[0] ? res[0] + 1 : 0;
  }
};
