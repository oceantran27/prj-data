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
  bool isIdealPermutation(vector<int> &A) {
    int mx1 = A[0];
    int mx2 = A[0];
    for (int i = 1; i < A.size(); i++) {
      if (mx2 > A[i] && mx2 != A[i - 1])
        return false;
      mx2 = max(mx2, mx1);
      mx1 = max(mx1, A[i]);
    }
    return true;
  }
};
