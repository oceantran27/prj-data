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

void deleteNode(struct ListNode* node) {
	struct ListNode* pre=node;
	node = node->next;
	pre->val = node->val;

	while (node->next) {
		node->val = node->next->val;
		pre = node;
		node = node->next;
	}
	pre->next = NULL;
}

/*
nodeֵnode->nextnode->nextɾ

void deleteNode(struct ListNode* node) {
	node->val = node->next->val;
	node->next = node->next->next;
}
*/

