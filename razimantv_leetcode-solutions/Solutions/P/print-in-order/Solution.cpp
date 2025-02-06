#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/print-in-order

class Foo {
  condition_variable cv;
  mutex m;
  int cnt;

 public:
  Foo() {
    cnt = 0;
    cv.notify_all();
  }

  void first(function<void()> printFirst) {
    {
      unique_lock<mutex> lk(m);
      cv.wait(lk, [&]() { return cnt == 0; });
      // printFirst() outputs "first". Do not change or remove this line.
      printFirst();
      cnt = 1;
    }
    cv.notify_all();
  }

  void second(function<void()> printSecond) {
    {
      unique_lock<mutex> lk(m);
      cv.wait(lk, [&]() { return cnt == 1; });
      // printSecond() outputs "second". Do not change or remove this line.
      printSecond();
      cnt = 2;
    }
    cv.notify_all();
  }

  void third(function<void()> printThird) {
    {
      unique_lock<mutex> lk(m);
      cv.wait(lk, [&]() { return cnt == 2; });
      // printThird() outputs "third". Do not change or remove this line.
      printThird();
      cnt = 0;
    }
    cv.notify_all();
  }
};
