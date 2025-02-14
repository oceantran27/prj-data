/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0814_BINARY_TREE_PRUNING_0814_BINARY_TREE_PRUNING_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0814_BINARY_TREE_PRUNING_0814_BINARY_TREE_PRUNING_CPP
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
{AKA_mark("Calling: .\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    // Checks whether the subtree contains 1 or not
    // Return true if it contains 1, else return false
    
    // If it does not contain 1. then delete that node
    /** Instrumented function pruneHelper(TreeNode*&) */
bool pruneHelper(TreeNode* &root) /* << Aka begin of function bool pruneHelper(TreeNode* &root) >> */
{AKA_mark("Calling: .\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");AKA_fCall++;
        
        if(AKA_mark("lis===41###sois===1130###eois===1142###lif===2###soif===58###eoif===70###ifc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)") && (AKA_mark("lis===41###sois===1130###eois===1142###lif===2###soif===58###eoif===70###isc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)") && (root == NULL)))                                {
AKA_mark("lis===41###sois===1175###eois===1188###lif===2###soif===103###eoif===116###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");return false;
}

else {
AKA_mark("lis===-41-###sois===-1130-###eois===-113012-###lif===-2-###soif===-###eoif===-70-###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");
}
        
        // Check if any node in the left and right subtree contains a 1.
        AKA_mark("lis===44###sois===1282###eois===1327###lif===5###soif===210###eoif===255###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");bool leftPruneTree = pruneHelper(root->left);
        AKA_mark("lis===45###sois===1337###eois===1384###lif===6###soif===265###eoif===312###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");bool rightPruneTree = pruneHelper(root->right);
        
        // If the left subtree does not contain a 1, prune the subtree.
        if(AKA_mark("lis===48###sois===1480###eois===1502###lif===9###soif===408###eoif===430###ifc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)") && (AKA_mark("lis===48###sois===1480###eois===1502###lif===9###soif===408###eoif===430###isc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)") && (leftPruneTree == false)))                       {
AKA_mark("lis===48###sois===1526###eois===1544###lif===9###soif===454###eoif===472###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");root->left = NULL;
}

else {
AKA_mark("lis===-48-###sois===-1480-###eois===-148022-###lif===-9-###soif===-###eoif===-430-###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");
}
        
        // If the right subtree does not contain a 1, prune the subtree.
        if(AKA_mark("lis===51###sois===1641###eois===1664###lif===12###soif===569###eoif===592###ifc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)") && (AKA_mark("lis===51###sois===1641###eois===1664###lif===12###soif===569###eoif===592###isc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)") && (rightPruneTree == false)))                      {
AKA_mark("lis===51###sois===1687###eois===1706###lif===12###soif===615###eoif===634###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");root->right = NULL;
}

else {
AKA_mark("lis===-51-###sois===-1641-###eois===-164123-###lif===-12-###soif===-###eoif===-592-###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");
}
        
        AKA_mark("lis===53###sois===1726###eois===1785###lif===14###soif===654###eoif===713###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneHelper(TreeNode*&)");return (root->val == 1) || leftPruneTree || rightPruneTree;
    }
    
    /** Instrumented function pruneTree(TreeNode*) */
TreeNode* pruneTree(TreeNode* root) /* << Aka begin of function TreeNode * pruneTree(TreeNode* root) >> */
{AKA_mark("Calling: .\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)");AKA_fCall++;
        
        if(AKA_mark("lis===58###sois===1864###eois===1876###lif===2###soif===60###eoif===72###ifc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)") && (AKA_mark("lis===58###sois===1864###eois===1876###lif===2###soif===60###eoif===72###isc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)") && (root == NULL)))                        {
AKA_mark("lis===58###sois===1901###eois===1913###lif===2###soif===97###eoif===109###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)");return root;
}

else {
AKA_mark("lis===-58-###sois===-1864-###eois===-186412-###lif===-2-###soif===-###eoif===-72-###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)");
}
        
        AKA_mark("lis===60###sois===1933###eois===1963###lif===4###soif===129###eoif===159###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)");bool flag = pruneHelper(root);
        
        if(AKA_mark("lis===62###sois===1986###eois===1998###lif===6###soif===182###eoif===194###ifc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)") && (AKA_mark("lis===62###sois===1986###eois===1998###lif===6###soif===182###eoif===194###isc===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)") && (flag == true)))                        {
AKA_mark("lis===62###sois===2023###eois===2035###lif===6###soif===219###eoif===231###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)");return root;
}

        else                                    {
AKA_mark("lis===63###sois===2085###eois===2097###lif===7###soif===281###eoif===293###ins===true###function===.\\p7\\0814-binary-tree-pruning\\0814-binary-tree-pruning.cpp\\Solution\\pruneTree(TreeNode*)");return NULL;
}

    }
    
};
#endif
