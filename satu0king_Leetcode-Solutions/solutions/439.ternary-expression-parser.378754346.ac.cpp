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
  string parseTernary(string e) {
    int i = 0;
    return parse(e, i);
  }

private:
  string parse(string &e, int &i) {
    int i0 = i;
    if (i + 1 < e.size() &&
        e[i + 1] == '?') { // recursion case - only if e[i + 1] == '?'
      i += 2;
      string a = parse(e, i); // parse both to advance the iterator
      string b = parse(e, ++i);
      return e[i0] == 'T' ? a : b;
    }
    return string(1, e[i++]); // parse digit or boolean result - just eat a bite
  }
};
