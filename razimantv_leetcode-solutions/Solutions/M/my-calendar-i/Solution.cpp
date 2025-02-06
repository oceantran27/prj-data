#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/my-calendar-i

class MyCalendar {
 public:
  map<int, int> events;
  MyCalendar() {}

  bool book(int start, int end) {
    auto mit = events.upper_bound(start);
    if (mit != events.end() and (end > mit->second)) return false;
    events[end] = start;
    return true;
  }
};

