#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/implement-queue-using-stacks

class MyQueue {
 public:
  stack<int> s1, s2;
  MyQueue() {}

  void push(int x) { s1.push(x); }

  void fix() {
    if (s2.empty()) {
      while (!s1.empty()) {
        int x = s1.top();
        s1.pop();
        s2.push(x);
      }
    }
  }

  int pop() {
    fix();
    int x = s2.top();
    s2.pop();
    return x;
  }

  int peek() {
    fix();
    int x = s2.top();
    return x;
  }

  bool empty() { return s1.empty() and s2.empty(); }
};
