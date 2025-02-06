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
  int numRescueBoats(vector<int> &people, int limit) {
    sort(people.begin(), people.end());
    int l = 0;
    int r = people.size() - 1;
    int ans = 0;

    while (l <= r) {
      ans++;
      if (people[l] + people[r--] <= limit)
        l++;
    }

    return ans;
  }
};
