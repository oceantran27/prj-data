/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_622_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_622_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue {
 public:
public:
  int front = 0, rear = -1;
  int size;
  int max_size;
  vector<int> vec;

  MyCircularQueue(int k) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    front = 0;
    rear = -1;
    vec.resize(k);
    size = 0;
    max_size = k;
  }

  bool enQueue(int value) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (isFull() == true) {
      return false;
    }
    rear = (rear + 1) % max_size;
    vec[rear] = value;
    size++;
    return true;
  }

  bool deQueue() {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (isEmpty() == true) {
      return false;
    }
    front = (front + 1) % max_size;
    size--;
    return true;
  }

  int Front() {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (isEmpty() == true) {
      return -1;
    }
    return vec[front];
  }

  int Rear() {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (isEmpty() == true) {
      return -1;
    }
    return vec[rear];
  }

  bool isEmpty() {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (size == 0) {
      return true;
    }
    return false;
  }

  bool isFull() {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (size == max_size) {
      return true;
    }
    return false;
  }
};

#endif
