#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/design-circular-queue

class MyCircularQueue {
 public:
  vector<int> queue;
  int N, head, tail, wrap;
  MyCircularQueue(int k) : N(k) {
    queue.resize(k);
    head = tail = wrap = 0;
  }

  bool enQueue(int value) {
    if (head == tail and wrap == 1) return false;
    queue[tail++] = value;
    if (tail == N) tail = 0, ++wrap;
    return true;
  }

  bool deQueue() {
    if (head == tail and wrap == 0) return false;
    if (++head == N) head = 0, wrap = 0;
    return true;
  }

  int Front() {
    if (head == tail and wrap == 0) return -1;
    return queue[head];
  }

  int Rear() {
    if (head == tail and wrap == 0) return -1;
    return queue[(tail ? tail : N) - 1];
  }

  bool isEmpty() { return head == tail and !wrap; }

  bool isFull() { return head == tail and wrap; }
};
