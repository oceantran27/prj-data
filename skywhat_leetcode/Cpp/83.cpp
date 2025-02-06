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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *prev=head;
        ListNode *tmp=prev;
        while(prev){
            while(tmp&&tmp->val==prev->val){
                tmp=tmp->next;
            }
            prev->next=tmp;
            prev=tmp;
        }
        return head;
    }
};
