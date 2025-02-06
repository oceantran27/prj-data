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
  vector<int> twoSum(vector<int>&numbers, int target) {
    map<int, int> mapping;
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++)
    {
      mapping[numbers[i]] = i;
    }
    for (int i = 0; i < numbers.size(); i++)
    {
      int searched = target - numbers[i];
      if (mapping.find(searched) != mapping.end() && i != mapping[searched])
      {
        result.push_back(i + 1);
        result.push_back(mapping[searched] + 1);
        break;
      }
    }
    return result;
  }
};