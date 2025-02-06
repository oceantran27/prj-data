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
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == NULL) return NULL;
        for (ListNode *p = head; p && p->next != NULL; p = p->next){
            while (p->next != NULL && p->next->val == p->val){
                p->next = p->next->next;
            }
        }
        return heada;
    }
};
