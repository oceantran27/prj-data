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
  bool checkPerfectNumber(int num) {

    if (num <= 0)
      return false;
    int s = 0;

    for (int i = 1; i * i <= num; i++) {
      if (num % i == 0) {
        s += i;
        if (num / i != i)
          s += num / i;
      }
    }

    return s == 2 * num;
  }
};
