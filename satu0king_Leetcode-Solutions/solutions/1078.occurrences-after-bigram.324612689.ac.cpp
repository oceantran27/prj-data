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
  vector<string> findOcurrences(string text, string first, string second) {
    stringstream ss(text);
    string prev = "";
    string current;
    vector<string> ans;
    while (ss >> current) {
      while (prev == first && second == current) {
        string temp;
        if (ss >> temp) {
          ans.push_back(temp);
          prev = current;
          current = temp;
        } else
          break;
      }

      prev = current;
    }
    return ans;
  }
};
