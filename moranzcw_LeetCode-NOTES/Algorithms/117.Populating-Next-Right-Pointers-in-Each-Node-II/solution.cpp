#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution 
{
public:
    void broadSearch(TreeLinkNode* queueS)
    {
        if(queueS == NULL)
            return;
        TreeLinkNode* newQueueH = NULL;
        TreeLinkNode* newQueueT = NULL;
        while(queueS)
        {
            if(queueS->left)
            {
                if(newQueueH == NULL)
                    newQueueH = queueS->left;
                if(newQueueT == NULL)
                    newQueueT = queueS->left;
                else{
                    newQueueT->next = queueS->left;
                    newQueueT = queueS->left;
                }
            }
            if(queueS->right)
            {
                if(newQueueH == NULL)
                    newQueueH = queueS->right;
                if(newQueueT == NULL)
                    newQueueT = queueS->right;
                else{
                    newQueueT->next = queueS->right;
                    newQueueT = queueS->right;
                }

            }
            queueS = queueS->next;
        }
        broadSearch(newQueueH );
    }

    void connect(TreeLinkNode *root) 
    {
        TreeLinkNode* queueS = root;
        broadSearch(queueS);
    }
};