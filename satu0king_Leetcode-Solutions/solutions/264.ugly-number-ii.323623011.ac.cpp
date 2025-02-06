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
  int nthUglyNumber(int n) {
    set<long long> pq;

    pq.insert(1);

    long long ans = 0;

    while (n) {
      ans = *pq.begin();
      pq.erase(ans);
      n--;

      pq.insert(ans * 3);
      pq.insert(ans * 5);
      pq.insert(ans * 2);
    }

    return ans;
  }
};
