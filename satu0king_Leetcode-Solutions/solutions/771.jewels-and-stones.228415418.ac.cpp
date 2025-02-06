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
  int numJewelsInStones(string J, string S) {
    int jewellArray[256];
    for (int i = 0; i < 256; i++)
      jewellArray[i] = 0;

    for (auto &i : J) {
      jewellArray[i]++;
    }

    int ans = 0;

    for (auto &i : S) {
      if (jewellArray[i])
        ans++;
    }

    return ans;
  }
};
