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
        if (head == NULL) return NULL;
        RandomListNode *p, *tmp, newhead(0), *tail;
        for (p = head; p!=NULL;){
            tmp = p->next;
            p->next = new RandomListNode(p->label);
            p->next->next = tmp;
            p = tmp;
        }
        for (p = head; p!=NULL; p = p->next->next){
            if (p->random){
                p->next->random = p->random->next;
            }
        }
        tail = &newhead;
        for (p = head; p!=NULL; ){
            tmp = p->next->next;
            tail = tail->next = p->next;
            p->next = tmp;
            p = tmp;
        }
        tail->next = NULL;
        return newhead.next;
    }
};
