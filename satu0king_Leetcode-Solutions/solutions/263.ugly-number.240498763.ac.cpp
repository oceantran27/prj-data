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
  bool isUgly(int num) {

    if (num <= 0)
      return false;

    while (!(num % 2))
      num /= 2;
    while (!(num % 3))
      num /= 3;
    while (!(num % 5))
      num /= 5;

    return num == 1;
  }
};
