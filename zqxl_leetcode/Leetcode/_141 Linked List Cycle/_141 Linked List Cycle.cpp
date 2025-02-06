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


struct ListNode {
    int val;
    struct ListNode *next;
};

// ʹÿָʵO(1)ռ临Ӷ
bool hasCycle(struct ListNode *head) {
	struct ListNode *f = head, *l = head;
	if (head == NULL) return false;
	while (f->next != NULL && f->next->next != NULL) {
		f = f->next->next;
		l = l->next;
		if (f == l)
			return true;
	}
	return false;
}

