#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/seat-reservation-manager

class SeatManager {
 public:
  set<int> s;
  SeatManager(int n) {
    for (int i = 1; i <= n; ++i) s.insert(i);
  }

  int reserve() {
    int ret = *s.begin();
    s.erase(ret);
    return ret;
  }

  void unreserve(int seatNumber) { s.insert(seatNumber); }
};
