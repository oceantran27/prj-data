#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class DiningPhilosophers {
 public:
  DiningPhilosophers() {}

  void wantsToEat(int philosopher, function<void()> pickLeftFork,
                  function<void()> pickRightFork, function<void()> eat,
                  function<void()> putLeftFork, function<void()> putRightFork) {
    scoped_lock lk(m[philosopher], m[(philosopher + 1) % 5]);
    pickLeftFork();
    pickRightFork();
    eat();
    putLeftFork();
    putRightFork();
  }

 private:
  mutex m[5];
};