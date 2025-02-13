/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1993_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1993_CPP
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

class LockingTree {
  public:
vector<vector<int>> relations;
  // first value will the parent, remaining values will be children.
  vector<int> locked;

 public:
  LockingTree(vector<int>& parent) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    vector<vector<int>> relations(parent.size());

    for (int i = 0; i < parent.size(); i++) {
      relations[i].push_back(parent[i]);
    }

    for (int i = 0; i < parent.size(); i++) {
      if (parent[i] != -1) relations[parent[i]].push_back(i);
    }

    this->relations = relations;
    vector<int> temp(parent.size(), 0);
    locked = temp;
  }

  bool lock(int num, int user) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (locked[num] != 0) return false;

    locked[num] = user;
    return true;
  }

  bool unlock(int num, int user) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (locked[num] != user) return false;

    locked[num] = 0;
    return true;
  }

  bool upgrade(const int NUM, int user) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    int num = NUM;

    while (num >= 0) {
      if (locked[num] != 0) return false;
      num = relations[num][0];
    }

    num = NUM;

    // finding out all descendants.
    vector<int> desc;
    queue<int> q;
    q.push(num);
    int count = 0;

    while (q.size()) {
      int cur = q.front();
      q.pop();
      if (locked[cur] != 0) count++;

      for (int i = 1; i < relations[cur].size(); i++) {
        int nx = relations[cur][i];
        q.push(nx);
      }

      desc.push_back(cur);
    }

    // atleast one descendant should have been locked.
    if (count == 0) return false;

    // all conditions met, unlock all the descendants:
    for (int i = 0; i < desc.size(); i++) {
      locked[desc[i]] = 0;
    }

    locked[num] = user;
    return true;
  }
};

#endif
