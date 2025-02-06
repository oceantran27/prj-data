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
  vector<int> anagramMappings(vector<int> &A, vector<int> &B) {
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < B.size(); i++)
      mp[B[i]].push_back(i);

    vector<int> result;
    for (int a : A) {
      int j = mp[a].back();
      mp[a].pop_back();
      result.push_back(j);
    }

    return result;
  }
};
