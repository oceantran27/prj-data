#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        ListNode *currentNode = head;
        ListNode *previousNode = NULL;
        ListNode *nextNode = NULL;

        while (currentNode != NULL)
        {

            nextNode = currentNode->next;
            currentNode->next = previousNode;
            previousNode = currentNode;
            currentNode = nextNode;
        }

        return previousNode;
    }
};