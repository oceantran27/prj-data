#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "stdafx.h"

/*
жһǷΪ

ʾ 1:

: 1->2
: false
ʾ 2:

: 1->2->2->1
: true
ף
ܷ O(n) ʱ临ӶȺ O(1) ռ临ӶȽ⣿
*/

class Solution {
public:
	bool isPalindrome(ListNode* head) {
		//Ϊջ߽һԪô϶ǻ
		if (!head || !head->next) {
			return true;
		}

		ListNode *slow = head, *fast = head;
		while (fast->next && fast->next->next) {
			slow = slow->next;
			fast = fast->next->next;
		}

		//ת
		if (slow->next&&slow->next->next)
		{
			ListNode* pre = slow->next;
			ListNode* cur = slow->next->next;
			ListNode* r;
			pre->next = nullptr;
			while (cur != nullptr)
			{
				r = cur->next;
				cur->next = pre;

				pre = cur;
				cur = r;
			}
			slow = pre;
		}
		else
		{
			slow = slow->next;
			slow->next = nullptr;
		}

		ListNode* curHead = head;
		while (slow) {
			if (curHead->val != slow->val) 
				return false;
			slow = slow->next;
			curHead = curHead->next;
		}
		return true;
	}
};

bool test_234(int arr[],int size)
{
	ListNode* head = new ListNode(arr[0]);
	ListNode* cur = nullptr;
	ListNode* p = head;
	for (int i = 1;i < size;i++)
	{
		while (p->next)
		{
			p = p->next;
		}
		cur = new ListNode(arr[i]);
		p->next = cur;
		cur = cur->next;
	}
	Solution so;
	bool ret = so.isPalindrome(head);

	cur = head;
	while (head)
	{
		head = head->next;
		delete cur;
		cur = nullptr;
		cur = head;
	}

	return ret;
}