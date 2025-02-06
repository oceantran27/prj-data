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
  vector<vector<int> > threeSum(vector<int> &num) {
    vector<vector<int> > results;
    int i = 0;
    int size = num.size();

    sort(num.begin(), num.end());

    while (i < (size - 2)) {
      int pre_number = num[i];
      int start = i + 1;
      int end = size - 1;

      while (start < end) {
        int left_val = num[start];
        int right_val = num[end];
        int sum = pre_number + left_val + right_val;

        if (sum < 0) {
          ++start;
        }
        else if (sum > 0) {
          --end;
        }
        else {
          vector<int> result;

          result.push_back(num[i]);
          result.push_back(left_val);
          result.push_back(right_val);

          results.push_back(result);

          ++start;
          --end;

          while ((start < end) && (num[start] == left_val)) {
            ++start;
          }

          while ((start < end) && (num[end] == right_val)) {
            --end;
          }
        }
      }

      ++i;
      while ((i < (size - 2)) && (num[i] == pre_number)) {
        ++i;
      }
    }

    return results;
  }
};