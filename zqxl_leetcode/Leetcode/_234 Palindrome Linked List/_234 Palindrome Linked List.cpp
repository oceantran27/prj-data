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

bool isPalindrome(struct ListNode* head) {
	int l = 0;
	int nums[409600];
	while (head) {
		nums[l++] = head->val;
		head = head->next;
	}
	for (int i = 0; i < l/2; i++) {
		if (nums[i] != nums[l - 1 - i])
			return false;
	}
	return true;
}

/*
ÿָҵе

bool isPalindrome(struct ListNode* head) {
	struct ListNode* slow = head, *fast = head, *prev = NULL;
	while (fast) {//find mid node
		slow = slow->next;
		fast = fast->next ? fast->next->next : fast->next;
	}
	while (slow) {//reverse
		struct ListNode* ovn = slow->next;
		slow->next = prev;
		prev = slow;
		slow = ovn;
	}
	while (head && prev) {//check
		if (head->val != prev->val) {
			return false;
		}
		head = head->next;
		prev = prev->next;
	}
	return true;
}

*/