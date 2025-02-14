/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0623_ADD_ONE_ROW_TO_TREE_0623_ADD_ONE_ROW_TO_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0623_ADD_ONE_ROW_TO_TREE_0623_ADD_ONE_ROW_TO_TREE_CPP
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
{AKA_mark("Calling: .\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function insert(TreeNode*&,int,int,int) */
void insert(TreeNode* &node, int val, int d, int curDepth) /* << Aka begin of function void insert(TreeNode* &node, int val, int d, int curDepth) >> */
{AKA_mark("Calling: .\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");AKA_fCall++;
        
        if(AKA_mark("lis===37###sois===984###eois===996###lif===2###soif===83###eoif===95###ifc===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)") && (AKA_mark("lis===37###sois===984###eois===996###lif===2###soif===83###eoif===95###isc===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)") && (node == NULL)))                        {
AKA_mark("lis===37###sois===1021###eois===1028###lif===2###soif===120###eoif===127###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");return;
}

else {
AKA_mark("lis===-37-###sois===-984-###eois===-98412-###lif===-2-###soif===-###eoif===-95-###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");
}
        
        if(AKA_mark("lis===39###sois===1051###eois===1068###lif===4###soif===150###eoif===167###ifc===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)") && (AKA_mark("lis===39###sois===1051###eois===1068###lif===4###soif===150###eoif===167###isc===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)") && (curDepth == d - 1))) {
            
            // Here, we need to insert the node having value val
            
            // For left node
            AKA_mark("lis===44###sois===1209###eois===1237###lif===9###soif===308###eoif===336###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");TreeNode* temp = node->left;
            AKA_mark("lis===45###sois===1251###eois===1282###lif===10###soif===350###eoif===381###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");node->left = new TreeNode(val);
            AKA_mark("lis===46###sois===1296###eois===1320###lif===11###soif===395###eoif===419###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");node->left->left = temp;
            
            // For right node
            AKA_mark("lis===49###sois===1379###eois===1398###lif===14###soif===478###eoif===497###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");temp = node->right;
            AKA_mark("lis===50###sois===1412###eois===1444###lif===15###soif===511###eoif===543###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");node->right = new TreeNode(val);
            AKA_mark("lis===51###sois===1458###eois===1484###lif===16###soif===557###eoif===583###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");node->right->right = temp;
        }
        
        else {
            
            AKA_mark("lis===56###sois===1549###eois===1590###lif===21###soif===648###eoif===689###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");insert(node->left, val, d, curDepth + 1);
            AKA_mark("lis===57###sois===1604###eois===1646###lif===22###soif===703###eoif===745###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");insert(node->right, val, d, curDepth + 1);
        }
        
        AKA_mark("lis===60###sois===1677###eois===1684###lif===25###soif===776###eoif===783###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\insert(TreeNode*&,int,int,int)");return;
    }
    
    /** Instrumented function addOneRow(TreeNode*,int,int) */
TreeNode* addOneRow(TreeNode* root, int val, int d) /* << Aka begin of function TreeNode * addOneRow(TreeNode* root, int val, int d) >> */
{AKA_mark("Calling: .\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\addOneRow(TreeNode*,int,int)");AKA_fCall++;
    
        if(AKA_mark("lis===65###sois===1775###eois===1781###lif===2###soif===72###eoif===78###ifc===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\addOneRow(TreeNode*,int,int)") && (AKA_mark("lis===65###sois===1775###eois===1781###lif===2###soif===72###eoif===78###isc===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\addOneRow(TreeNode*,int,int)") && (d == 1))) {
            
            AKA_mark("lis===67###sois===1812###eois===1847###lif===4###soif===109###eoif===144###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\addOneRow(TreeNode*,int,int)");TreeNode* node = new TreeNode(val);
            AKA_mark("lis===68###sois===1861###eois===1879###lif===5###soif===158###eoif===176###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\addOneRow(TreeNode*,int,int)");node->left = root;
            
            AKA_mark("lis===70###sois===1907###eois===1919###lif===7###soif===204###eoif===216###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\addOneRow(TreeNode*,int,int)");return node;
        }
else {
AKA_mark("lis===-65-###sois===-1775-###eois===-17756-###lif===-2-###soif===-###eoif===-78-###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\addOneRow(TreeNode*,int,int)");
}
        
        AKA_mark("lis===73###sois===1950###eois===1974###lif===10###soif===247###eoif===271###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\addOneRow(TreeNode*,int,int)");insert(root, val, d, 1);
        AKA_mark("lis===74###sois===1984###eois===1996###lif===11###soif===281###eoif===293###ins===true###function===.\\p6\\0623-add-one-row-to-tree\\0623-add-one-row-to-tree.cpp\\Solution\\addOneRow(TreeNode*,int,int)");return root;
    }
    
};
#endif
