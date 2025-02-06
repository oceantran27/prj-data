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
  int subarrayBitwiseORs(vector<int> &A) {

    unordered_set<int> ans;
    unordered_set<int> temp;
    temp.insert(0);
    for (int t : A) {
      unordered_set<int> intemp;
      for (int p : temp) {
        intemp.insert(t | p);
        ans.insert(t | p);
      }
      intemp.insert(t);
      ans.insert(t);
      temp = intemp;
    }
    return ans.size();
  }
};
