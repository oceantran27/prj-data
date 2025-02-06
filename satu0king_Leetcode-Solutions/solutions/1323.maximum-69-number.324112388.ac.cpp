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
  int maximum69Number(int num) {
    string n = to_string(num);

    for (char &c : n)
      if (c == '6') {
        c = '9';
        break;
      }

    return stoi(n);
  }
};
