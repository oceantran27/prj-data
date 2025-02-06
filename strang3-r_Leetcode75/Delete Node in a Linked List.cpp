#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
	void deleteNode(ListNode* node) {
		ListNode* temp = node -> next;
		node -> val = temp -> val;
		node -> next = temp -> next;
		delete temp;
	}
};
