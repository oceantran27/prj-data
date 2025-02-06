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
  int findComplement(int num) {
    int ans = 0;
    for (int i = 0; i < 31; i++) {
      if ((1 << i) > num)
        break;
      if (!(num & (1 << i)))
        ans ^= 1 << i;
    }
    return ans;
  }
};
