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
һɾĵ n ڵ㣬ҷͷ㡣

ʾ

һ: 1->2->3->4->5,  n = 2.

ɾ˵ڶڵΪ 1->2->3->5.
˵

 n ֤Чġ

ף

ܳʹһɨʵ
*/

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		//n֤ЧҪж
		//1n<=0
		//2n
		ListNode* pre = head;
		ListNode* cur = head;
		ListNode* tmp = pre;
		//ΪnһЧԿѭô
		//curǰpreλΪn
		for (int i = 0;i<n;i++)
		{
			cur = cur->next;
		}
		//curָָʱ,preǵn
		while (cur != nullptr&&cur->next != nullptr)
		{
			cur = cur->next;
			pre = pre->next;
		}
		//n
		if (cur == nullptr)
		{
			pre = pre->next;
			delete head;
			head = nullptr;
			return pre;
		}
		//Сn
		else
		{
			tmp = pre->next;
			pre->next = tmp->next;
			delete tmp;
			tmp = nullptr;
		}

		return head;
	}
};
