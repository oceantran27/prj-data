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
  int numberOfSteps(int num) {
    int ans = 0;
    while (num) {
      ans++;
      if (num % 2)
        num--;
      else
        num /= 2;
    }
    return ans;
  }
};
