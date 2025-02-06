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
һжǷл

ף
ܷʹöռ⣿
*/
class Solution {
public:
	bool hasCycle(ListNode *head) {
		//ɻ
		//һڵԻ
		//һɻ
		if (!head) return false;
		ListNode *fast = head;
		ListNode *slow = head;
		do {
			/*If LinkNode exist NULL node,then return false*/
			if (!fast || !slow)
				return false;
			fast = fast->next;
			slow = slow->next;
			/*If LinkNode exist NULL node,then return false*/
			if (fast)
				fast = fast->next;
			else
				return false;
		} while (fast != slow);

		return true;
	}
};
