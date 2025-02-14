/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P9_100_SAME_TREE_100_SAME_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P9_100_SAME_TREE_100_SAME_TREE_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



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
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     /** Instrumented function TreeNode() */
TreeNode() : val(0), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode() >> */
{AKA_mark("Calling: .\\p9\\100-same-tree\\100-same-tree.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p9\\100-same-tree\\100-same-tree.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p9\\100-same-tree\\100-same-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function isSameTree(TreeNode*,TreeNode*) */
bool isSameTree(TreeNode* p, TreeNode* q) /* << Aka begin of function bool isSameTree(TreeNode* p, TreeNode* q) >> */
{AKA_mark("Calling: .\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)");AKA_fCall++;
    
        if(AKA_mark("lis===37###sois===963###eois===985###lif===2###soif===62###eoif===84###ifc===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)") && ((AKA_mark("lis===37###sois===963###eois===972###lif===2###soif===62###eoif===71###isc===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)") && (p == NULL)) && (AKA_mark("lis===37###sois===976###eois===985###lif===2###soif===75###eoif===84###isc===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)") && (q == NULL))))                  {
AKA_mark("lis===37###sois===1004###eois===1016###lif===2###soif===103###eoif===115###ins===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)");return true;
}

else {
AKA_mark("lis===-37-###sois===-963-###eois===-96322-###lif===-2-###soif===-###eoif===-84-###ins===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)");
}
        if(AKA_mark("lis===38###sois===1029###eois===1051###lif===3###soif===128###eoif===150###ifc===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)") && ((AKA_mark("lis===38###sois===1029###eois===1038###lif===3###soif===128###eoif===137###isc===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)") && (p == NULL)) || (AKA_mark("lis===38###sois===1042###eois===1051###lif===3###soif===141###eoif===150###isc===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)") && (q == NULL))))                  {
AKA_mark("lis===38###sois===1070###eois===1083###lif===3###soif===169###eoif===182###ins===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)");return false;
}

else {
AKA_mark("lis===-38-###sois===-1029-###eois===-102922-###lif===-3-###soif===-###eoif===-150-###ins===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)");
}
        
        AKA_mark("lis===40###sois===1103###eois===1195###lif===5###soif===202###eoif===294###ins===true###function===.\\p9\\100-same-tree\\100-same-tree.cpp\\Solution\\isSameTree(TreeNode*,TreeNode*)");return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    
};
#endif
