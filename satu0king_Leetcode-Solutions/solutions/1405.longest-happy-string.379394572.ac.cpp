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
  string longestDiverseString(int a, int b, int c) {
    string s = "";

    vector<pair<int, char>> q = {{a, 'a'}, {b, 'b'}, {c, 'c'}};

    sort(q.rbegin(), q.rend());

    while (q[0].first) {
      s += string(min(2, q[0].first), q[0].second);
      q[0].first -= min(2, q[0].first);

      if (q[1].first == 0)
        break;

      if (q[0].first >= q[1].first) {
        s += q[1].second;
        q[1].first -= 1;
      }

      sort(q.rbegin(), q.rend());
    }

    return s;
  }
};
