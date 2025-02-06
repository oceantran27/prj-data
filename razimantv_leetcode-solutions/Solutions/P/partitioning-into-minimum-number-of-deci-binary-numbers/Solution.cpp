#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers

class Solution {
 public:
  int minPartitions(string n) {
    return (*max_element(n.begin(), n.end())) - '0';
  }
};
