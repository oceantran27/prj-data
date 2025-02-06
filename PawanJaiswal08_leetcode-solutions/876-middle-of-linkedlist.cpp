#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

ListNode *middleNode(ListNode *head)
{
    ListNode *singlePtr = head;
    ListNode *doublePtr = head;

    while (doublePtr != NULL && doublePtr->next != NULL)
    {
        singlePtr = singlePtr->next;
        doublePtr = doublePtr->next->next;
    }
    return singlePtr;
}