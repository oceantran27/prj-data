/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0951_FLIP_EQUIVALENT_BINARY_TREES_0951_FLIP_EQUIVALENT_BINARY_TREES_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0951_FLIP_EQUIVALENT_BINARY_TREES_0951_FLIP_EQUIVALENT_BINARY_TREES_CPP
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
{AKA_mark("Calling: .\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function flipEquiv(TreeNode*,TreeNode*) */
bool flipEquiv(TreeNode* root1, TreeNode* root2) /* << Aka begin of function bool flipEquiv(TreeNode* root1, TreeNode* root2) >> */
{AKA_mark("Calling: .\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)");AKA_fCall++;
    
        if(AKA_mark("lis===37###sois===970###eois===1000###lif===2###soif===69###eoif===99###ifc===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)") && ((AKA_mark("lis===37###sois===970###eois===983###lif===2###soif===69###eoif===82###isc===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)") && (root1 == NULL)) && (AKA_mark("lis===37###sois===987###eois===1000###lif===2###soif===86###eoif===99###isc===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)") && (root2 == NULL))))                  {
AKA_mark("lis===37###sois===1019###eois===1031###lif===2###soif===118###eoif===130###ins===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)");return true;
}

else {
AKA_mark("lis===-37-###sois===-970-###eois===-97030-###lif===-2-###soif===-###eoif===-99-###ins===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)");
}
        if(AKA_mark("lis===38###sois===1044###eois===1074###lif===3###soif===143###eoif===173###ifc===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)") && ((AKA_mark("lis===38###sois===1044###eois===1057###lif===3###soif===143###eoif===156###isc===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)") && (root1 == NULL)) || (AKA_mark("lis===38###sois===1061###eois===1074###lif===3###soif===160###eoif===173###isc===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)") && (root2 == NULL))))                  {
AKA_mark("lis===38###sois===1093###eois===1106###lif===3###soif===192###eoif===205###ins===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)");return false;
}

else {
AKA_mark("lis===-38-###sois===-1044-###eois===-104430-###lif===-3-###soif===-###eoif===-173-###ins===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)");
}
        
        AKA_mark("lis===40###sois===1126###eois===1213###lif===5###soif===225###eoif===312###ins===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)");bool f1 = flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);
        AKA_mark("lis===41###sois===1223###eois===1310###lif===6###soif===322###eoif===409###ins===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)");bool f2 = flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left);
        
        AKA_mark("lis===43###sois===1330###eois===1378###lif===8###soif===429###eoif===477###ins===true###function===.\\p8\\0951-flip-equivalent-binary-trees\\0951-flip-equivalent-binary-trees.cpp\\Solution\\flipEquiv(TreeNode*,TreeNode*)");return (root1->val == root2->val) && (f1 || f2);
    }
    
};
#endif
