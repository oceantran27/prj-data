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
    int len= 0;
    ListNode* headNode;

public:
    Solution(ListNode* head) {
        headNode= head;
        ListNode* temp= headNode;

        while(temp){
            len++;
            temp= temp->next;
        }
    }
    
    int getRandom() {
        int rand_idx= rand()%len;
        ListNode* temp= headNode;

        for(int i=0; i<rand_idx; i++){
            temp= temp->next;
        }

        return temp->val;
    }
};