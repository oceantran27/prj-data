/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_101_SYMMETRIC_TREE_101_SYMMETRIC_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_101_SYMMETRIC_TREE_101_SYMMETRIC_TREE_CPP
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
{AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:

    /** Instrumented function isSymmetricHelper(TreeNode*,TreeNode*) */
bool isSymmetricHelper(TreeNode* node1, TreeNode* node2) /* << Aka begin of function bool isSymmetricHelper(TreeNode* node1, TreeNode* node2) >> */
{AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)");AKA_fCall++;
        
        if(AKA_mark("lis===37###sois===978###eois===1008###lif===2###soif===81###eoif===111###ifc===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)") && ((AKA_mark("lis===37###sois===978###eois===991###lif===2###soif===81###eoif===94###isc===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)") && (node1 == NULL)) && (AKA_mark("lis===37###sois===995###eois===1008###lif===2###soif===98###eoif===111###isc===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)") && (node2 == NULL))))          {
AKA_mark("lis===37###sois===1019###eois===1031###lif===2###soif===122###eoif===134###ins===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)");return true;
}

else {
AKA_mark("lis===-37-###sois===-978-###eois===-97830-###lif===-2-###soif===-###eoif===-111-###ins===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)");
}
        if(AKA_mark("lis===38###sois===1044###eois===1074###lif===3###soif===147###eoif===177###ifc===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)") && ((AKA_mark("lis===38###sois===1044###eois===1057###lif===3###soif===147###eoif===160###isc===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)") && (node1 == NULL)) || (AKA_mark("lis===38###sois===1061###eois===1074###lif===3###soif===164###eoif===177###isc===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)") && (node2 == NULL))))          {
AKA_mark("lis===38###sois===1085###eois===1098###lif===3###soif===188###eoif===201###ins===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)");return false;
}

else {
AKA_mark("lis===-38-###sois===-1044-###eois===-104430-###lif===-3-###soif===-###eoif===-177-###ins===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)");
}
        
        AKA_mark("lis===40###sois===1118###eois===1248###lif===5###soif===221###eoif===351###ins===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetricHelper(TreeNode*,TreeNode*)");return (node1->val == node2->val) && isSymmetricHelper(node1->left, node2->right) && isSymmetricHelper(node1->right, node2->left);
    }
    
    /** Instrumented function isSymmetric(TreeNode*) */
bool isSymmetric(TreeNode* root) /* << Aka begin of function bool isSymmetric(TreeNode* root) >> */
{AKA_mark("Calling: .\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetric(TreeNode*)");AKA_fCall++;
    
        if(AKA_mark("lis===45###sois===1320###eois===1332###lif===2###soif===53###eoif===65###ifc===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetric(TreeNode*)") && (AKA_mark("lis===45###sois===1320###eois===1332###lif===2###soif===53###eoif===65###isc===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetric(TreeNode*)") && (root == NULL)))                            {
AKA_mark("lis===45###sois===1361###eois===1373###lif===2###soif===94###eoif===106###ins===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetric(TreeNode*)");return true;
}

else {
AKA_mark("lis===-45-###sois===-1320-###eois===-132012-###lif===-2-###soif===-###eoif===-65-###ins===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetric(TreeNode*)");
}
        
        AKA_mark("lis===47###sois===1393###eois===1445###lif===4###soif===126###eoif===178###ins===true###function===.\\p10\\101-symmetric-tree\\101-symmetric-tree.cpp\\Solution\\isSymmetric(TreeNode*)");return (isSymmetricHelper(root->left, root->right));
    }
    
};
#endif
