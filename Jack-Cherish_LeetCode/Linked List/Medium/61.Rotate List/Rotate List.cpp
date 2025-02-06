#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        ListNode *tail = head;
        int listlength = 1;
        while(tail->next){              //
            tail = tail->next;
            listlength++;
        }
        k = k % listlength;             //kܴĳ
        if(k == 0){                     //k,ת
            return head;
        }
        k = listlength - k;             //ƶǰlistlength-kڵ㵽Ҳ,kڵ㲻
        tail->next = head;              //βڵ׽ڵ
        ListNode *newlist = head;
        for(int index = 0; index < k-1; index++){      //Ҷͷ
            newlist = newlist->next;
        }
        head = newlist->next;           //ͷ
        newlist->next = NULL;           //βֵNULL
        return head;                    //ͷ
    }
};