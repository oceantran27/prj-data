#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int minOperations(vector<string>& logs) {
    int result = 0;
    for (int i = 0; i < logs.size(); i++) {
      if (logs[i] == "../") {
        if (result != 0) {
          result--;
        }
      } else if (logs[i] != "./") {
        result++;
      }
    }
    return result;
  }
};