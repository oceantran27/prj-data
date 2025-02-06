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
  int sumOfDigits(vector<int> &A) {
    int mn = *min_element(A.begin(), A.end());
    int s = 0;
    while (mn) {
      s += mn % 10;
      mn /= 10;
    }
    return s % 2 == 0;
  }
};
