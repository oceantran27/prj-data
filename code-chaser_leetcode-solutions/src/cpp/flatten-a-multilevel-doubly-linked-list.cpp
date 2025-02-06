#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~
--||author : codechaser||-- 
~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
class Solution
{
public:
    Node *flatten(Node *head)
    {
        if (head == NULL)
            return head;
        Node *p = head;
        while (p != NULL)
        {
            if (p->child == NULL)
            {
                p = p->next;
                continue;
            }
            Node *temp = p->child;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = p->next;
            if (p->next != NULL)
                p->next->prev = temp;
            p->next = p->child;
            p->child->prev = p;
            p->child = NULL;
        }
        return head;
    }
};
/*
    |---------------------------------------------------|
    |||   https://codeforces.com/profile/codechaser   |||
    |||   https://www.codechef.com/users/codechaser   |||
    |||        https://github.com/code-chaser         |||
    |---------------------------------------------------|
*/