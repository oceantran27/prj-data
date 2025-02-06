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
    ListNode *middleNode(ListNode *head) {
        ListNode *middle = head;
        int i = 0;
        while (head != nullptr) {
            i++;
            if (i % 2 == 0) {
                middle = middle->next;
                i = 0;
            }
            head = head->next;
        }
        return middle;
    }
};
