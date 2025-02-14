/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_104_MAXIMUM_DEPTH_OF_BINARY_TREE_104_MAXIMUM_DEPTH_OF_BINARY_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_104_MAXIMUM_DEPTH_OF_BINARY_TREE_104_MAXIMUM_DEPTH_OF_BINARY_TREE_CPP
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
{AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:

    /** Instrumented function height(TreeNode*) */
int height(TreeNode* root) /* << Aka begin of function int height(TreeNode* root) >> */
{AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\height(TreeNode*)");AKA_fCall++;
        
        if(AKA_mark("lis===37###sois===948###eois===960###lif===2###soif===51###eoif===63###ifc===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\height(TreeNode*)") && (AKA_mark("lis===37###sois===948###eois===960###lif===2###soif===51###eoif===63###isc===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\height(TreeNode*)") && (root == NULL)))                    {
AKA_mark("lis===37###sois===981###eois===990###lif===2###soif===84###eoif===93###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\height(TreeNode*)");return 0;
}

else {
AKA_mark("lis===-37-###sois===-948-###eois===-94812-###lif===-2-###soif===-###eoif===-63-###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\height(TreeNode*)");
}
        
        AKA_mark("lis===39###sois===1010###eois===1040###lif===4###soif===113###eoif===143###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\height(TreeNode*)");int left = height(root->left);
        AKA_mark("lis===40###sois===1050###eois===1082###lif===5###soif===153###eoif===185###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\height(TreeNode*)");int right = height(root->right);
        
        AKA_mark("lis===42###sois===1102###eois===1130###lif===7###soif===205###eoif===233###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\height(TreeNode*)");return 1 + max(left, right);
        
    }
    
    /** Instrumented function maxDepth(TreeNode*) */
int maxDepth(TreeNode* root) /* << Aka begin of function int maxDepth(TreeNode* root) >> */
{AKA_mark("Calling: .\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\maxDepth(TreeNode*)");AKA_fCall++;
    
        AKA_mark("lis===48###sois===1205###eois===1215###lif===2###soif===46###eoif===56###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\maxDepth(TreeNode*)");int h = 0;
        
        if(AKA_mark("lis===50###sois===1238###eois===1250###lif===4###soif===79###eoif===91###ifc===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\maxDepth(TreeNode*)") && (AKA_mark("lis===50###sois===1238###eois===1250###lif===4###soif===79###eoif===91###isc===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\maxDepth(TreeNode*)") && (root == NULL)))                            {
AKA_mark("lis===50###sois===1279###eois===1288###lif===4###soif===120###eoif===129###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\maxDepth(TreeNode*)");return h;
}

else {
AKA_mark("lis===-50-###sois===-1238-###eois===-123812-###lif===-4-###soif===-###eoif===-91-###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\maxDepth(TreeNode*)");
}
        
        AKA_mark("lis===52###sois===1308###eois===1325###lif===6###soif===149###eoif===166###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\maxDepth(TreeNode*)");h = height(root);
        AKA_mark("lis===53###sois===1335###eois===1344###lif===7###soif===176###eoif===185###ins===true###function===.\\p11\\104-maximum-depth-of-binary-tree\\104-maximum-depth-of-binary-tree.cpp\\Solution\\maxDepth(TreeNode*)");return h;
    }
    
};
#endif
