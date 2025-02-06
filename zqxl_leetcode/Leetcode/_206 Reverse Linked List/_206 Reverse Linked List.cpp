#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<stdio.h>
#include<malloc.h>
#include<string>
#include<math.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
/*
ύʱ: ҵ⣬׽ڵnextڵδ
*/
struct ListNode* reverseList1(struct ListNode* head) {
	if (!head) return NULL;
	struct ListNode *lists[40960];
	int l = 0;
	while (head) {
		lists[l++] = head;
		head = head->next;
	}
	head = lists[--l];
	while (l > 0) {
		lists[l]->next = lists[l - 1];
		l--;
	}
	lists[0]->next = NULL;
	return head;
}

/*
һα
*/
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode *pre=head, *next=NULL;
	pre->next = NULL;
	head = head->next;

	while (head) {
		next = head->next;
		head->next = pre;
		pre = head;
		head = next;
	}
	return pre;
}

int main() {
	struct ListNode a1, a2, a3;
	a1.val = 1;
	a1.next = &a2;

	a2.val = 2;
	a2.next = &a3;

	a3.val = 3;
	a3.next = NULL;

	//a3.next = &a2, &a1;

	reverseList(&a1);
	return 0;
}

