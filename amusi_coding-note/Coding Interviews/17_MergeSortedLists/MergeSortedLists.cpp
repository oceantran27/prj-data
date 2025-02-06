#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-06-26

Ŀ
һתıͷ

*****************************************/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    // ˼·: бзת
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL || pHead->next==NULL)
            return pHead;
        
        ListNode* cur = pHead;
        ListNode* pre = NULL;    // ListNode* pre = NULL;
        ListNode* post = NULL;    // ListNode* post = pHead->next;
        while (cur!=NULL){
            post = cur->next;
            cur->next = pre;
            pre = cur;
            cur = post;
        }
        pHead = pre;
        return pHead;
    }
};