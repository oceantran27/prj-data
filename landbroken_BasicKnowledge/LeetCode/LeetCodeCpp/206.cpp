#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
using namespace std;

/*
תһ

ʾ:

: 1->2->3->4->5->NULL
: 5->4->3->2->1->NULL
:
Եݹطתַܷ⣿
*/

class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == nullptr || head->next == nullptr)
		{
			return head;
		}
		ListNode* pre = head;
		ListNode* cur = head->next;
		ListNode* r;
		head->next = nullptr;
		while (cur != nullptr)
		{
			r = cur->next;
			cur->next = pre;
			pre = cur;
			cur = r;
		}
		head = pre;
		return head;
	}
};
