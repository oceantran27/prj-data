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
  double average(vector<int> &salary) {
    int s = accumulate(salary.begin(), salary.end(), 0);
    int mi = *min_element(salary.begin(), salary.end());
    int mx = *max_element(salary.begin(), salary.end());
    return (s - mi - mx) / (salary.size() - 2.0);
  }
};
