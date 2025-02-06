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
  long long int integerReplacement(long long int n) {
    if (n == 1)
      return 0;
    if (n % 2)
      return min(integerReplacement(n - 1), integerReplacement(n + 1)) + 1;
    return integerReplacement(n / 2) + 1;
  }
};
