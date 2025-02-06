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
  int singleNumber(int A[], int n) {
    int result = A[0];

    for (int i = 1; i < n; ++i) {
      result ^= A[i];
    }

    return result;
  }
};