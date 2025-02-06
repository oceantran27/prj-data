#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Name: Vidushi Bhatnagar
// Date: 14/10/2022

class Solution {
  public:
    void deleteNode(ListNode * node) {
      node -> val = node -> next -> val; //Assigning next node value
      node -> next = node -> next -> next; //next pointer points to next next of node

    }
};
