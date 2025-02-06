#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  RandomListNode *copyRandomList(RandomListNode *head) {
    map<RandomListNode*, RandomListNode*> copied;

    return copy_random_list(head, copied);
  }

protected:
  RandomListNode* copy_random_list(RandomListNode *head,
      map<RandomListNode*, RandomListNode*> &copied) {
    if (NULL == head) {
      return NULL;
    }
    else if (copied.find(head) != copied.end()) {
      return copied[head];
    }

    RandomListNode *node = new RandomListNode(head->label);

    copied[head] = node;
    node->next = copy_random_list(head->next, copied);
    node->random = copy_random_list(head->random, copied);

    return node;
  }
};