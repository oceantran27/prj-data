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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next)
        	return head;
        ListNode *odd = head, *evenHead = head->next, *even = head->next;
        while(odd && even)
        {
        	odd->next = even->next;
        	if(odd->next)
        	{
        		even->next = odd->next->next;
        		odd = odd->next;
        		even = even->next;
        	}
        	else
        		break;
        }
        odd->next = evenHead;
        return head;
    }
};