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
  void duplicateZeros(vector<int> &arr) {

    int shift = 0;

    for (auto n : arr)
      if (!n)
        shift++;

    for (int i = arr.size() - 1; i >= 0; i--) {
      if (!arr[i]) {
        shift--;
        continue;
      }

      if (i + shift < arr.size()) {
        arr[i + shift] = arr[i];
      }

      if (shift)
        arr[i] = 0;
    }
  }
};
