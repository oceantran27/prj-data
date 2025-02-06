#include <bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

ListNode* reverseList(ListNode* head) {
        ListNode *dnode = new ListNode(0);
        ListNode *cur = head;
        
        while ( cur != NULL ) {
            ListNode* tmp = cur;
            cur = cur->next;
            tmp->next = dnode->next;
            dnode->next = tmp;
        }
        return dnode->next;
    }
	
int main(){
	uint32_t n = 1;
	cout << hammingWeight(n) << endl;
	return 0;
}