#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/the-dining-philosophers

class DiningPhilosophers {
 public:
  static mutex m;
  DiningPhilosophers() {}

  void wantsToEat(int philosopher, function<void()> pickLeftFork,
                  function<void()> pickRightFork, function<void()> eat,
                  function<void()> putLeftFork, function<void()> putRightFork) {
    lock_guard<mutex> lock(m);
    pickLeftFork();
    pickRightFork();
    eat();
    putLeftFork();
    putRightFork();
  }
};

mutex DiningPhilosophers::m;
