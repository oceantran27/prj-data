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
    ListNode* oddEvenList(ListNode* head) {
      if(head == NULL)
      {
          return NULL;
      }
       ListNode*odd = head;
       ListNode*even = head->next;
       ListNode*temp = even;
       while(even && even->next)
       {
           odd->next = even->next;
           odd = odd->next;
           even->next = odd->next;
           even = even->next;
       }
       odd->next= temp;
       return head;
    }
};
