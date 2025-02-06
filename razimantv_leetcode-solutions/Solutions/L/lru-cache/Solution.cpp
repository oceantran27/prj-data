#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/lru-cache

class LRUCache {
 public:
  set<pair<int, int>> old;
  map<int, int> val, time;
  int t, cap;
  LRUCache(int capacity) {
    cap = capacity;
    t = 0;
  }

  int get(int key) {
    if (val.count(key) == 0) return -1;
    old.erase({time[key], key});
    old.insert({time[key] = t++, key});
    return val[key];
  }

  void put(int key, int value) {
    if (time.count(key)) {
      old.erase({time[key], key});
    }

    val[key] = value;
    old.insert({time[key] = t++, key});

    if (old.size() > cap) {
      auto p = *old.begin();
      old.erase(old.begin());
      val.erase(p.second);
      time.erase(p.second);
    }
  }
};

