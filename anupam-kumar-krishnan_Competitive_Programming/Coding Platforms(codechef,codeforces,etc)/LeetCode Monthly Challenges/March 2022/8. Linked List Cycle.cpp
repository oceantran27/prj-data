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
    bool hasCycle(ListNode *head) {
	
	
        if(head == NULL)
            return false;
        
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
               

            if(fast == slow)
                return true;
         
        }
        
        return false;
    }
};
