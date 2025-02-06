#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/time-based-key-value-store

class TimeMap {
  unordered_map<string, map<int, string, greater<int>>> store;

 public:
  TimeMap() {}

  void set(string key, string value, int timestamp) {
    store[key][timestamp] = value;
  }

  string get(string key, int timestamp) {
    auto mit = store.find(key);
    if (mit == store.end()) return "";
    auto mit2 = mit->second.lower_bound(timestamp);
    if (mit2 == mit->second.end())
      return "";
    else
      return mit2->second;
  }
};

