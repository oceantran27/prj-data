/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0099_RECOVER_BINARY_SEARCH_TREE_0099_RECOVER_BINARY_SEARCH_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0099_RECOVER_BINARY_SEARCH_TREE_0099_RECOVER_BINARY_SEARCH_TREE_CPP
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
{AKA_mark("Calling: .\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    
    /** Instrumented function inorder(TreeNode*,vector<TreeNode*>&) */
void inorder(TreeNode* root, vector<TreeNode*> &res) /* << Aka begin of function void inorder(TreeNode* root, vector<TreeNode*> &res) >> */
{AKA_mark("Calling: .\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\inorder(TreeNode*,vector<TreeNode*>&)");AKA_fCall++;
        
        if(AKA_mark("lis===38###sois===984###eois===996###lif===2###soif===77###eoif===89###ifc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\inorder(TreeNode*,vector<TreeNode*>&)") && (AKA_mark("lis===38###sois===984###eois===996###lif===2###soif===77###eoif===89###isc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\inorder(TreeNode*,vector<TreeNode*>&)") && (root == NULL)))                    {
AKA_mark("lis===38###sois===1017###eois===1024###lif===2###soif===110###eoif===117###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\inorder(TreeNode*,vector<TreeNode*>&)");return;
}

else {
AKA_mark("lis===-38-###sois===-984-###eois===-98412-###lif===-2-###soif===-###eoif===-89-###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\inorder(TreeNode*,vector<TreeNode*>&)");
}
        
        // inorder means left -> root -> right
        
        AKA_mark("lis===42###sois===1102###eois===1127###lif===6###soif===195###eoif===220###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\inorder(TreeNode*,vector<TreeNode*>&)");inorder(root->left, res);
        AKA_mark("lis===43###sois===1137###eois===1157###lif===7###soif===230###eoif===250###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\inorder(TreeNode*,vector<TreeNode*>&)");res.push_back(root);
        AKA_mark("lis===44###sois===1167###eois===1193###lif===8###soif===260###eoif===286###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\inorder(TreeNode*,vector<TreeNode*>&)");inorder(root->right, res);
        
        AKA_mark("lis===46###sois===1213###eois===1220###lif===10###soif===306###eoif===313###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\inorder(TreeNode*,vector<TreeNode*>&)");return;
    }
    
    /** Instrumented function recoverTree(TreeNode*) */
void recoverTree(TreeNode* root) /* << Aka begin of function void recoverTree(TreeNode* root) >> */
{AKA_mark("Calling: .\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");AKA_fCall++;
    
        if(AKA_mark("lis===51###sois===1292###eois===1304###lif===2###soif===53###eoif===65###ifc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)") && (AKA_mark("lis===51###sois===1292###eois===1304###lif===2###soif===53###eoif===65###isc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)") && (root == NULL)))                                {
AKA_mark("lis===51###sois===1337###eois===1344###lif===2###soif===98###eoif===105###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");return;
}

else {
AKA_mark("lis===-51-###sois===-1292-###eois===-129212-###lif===-2-###soif===-###eoif===-65-###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");
}
        
        AKA_mark("lis===53###sois===1364###eois===1386###lif===4###soif===125###eoif===147###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");vector<TreeNode*> res;
        AKA_mark("lis===54###sois===1396###eois===1415###lif===5###soif===157###eoif===176###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");inorder(root, res);

        // Ideally, inorder of BST gives us the nodes in strictly increasing order
        
        // But, in this swapped BST, the position of two BST are wrong
        // So, find those dip, and take the 1st node of 1st dip and 2nd node of 2nd dip
        
        AKA_mark("lis===61###sois===1692###eois===1711###lif===12###soif===453###eoif===472###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");int n = res.size();
        
        AKA_mark("lis===63###sois===1731###eois===1769###lif===14###soif===492###eoif===530###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");TreeNode* node1 = NULL, *node2 = NULL;
        
        int AKA_BLOCK_LOOP_1789 = 0;
    AKA_mark("lis===65###sois===1793###eois===1801###lif===16###soif===554###eoif===562###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");
for(int i=1; AKA_mark("lis===65###sois===1802###eois===1805###lif===16###soif===563###eoif===566###ifc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)") && (AKA_mark("lis===65###sois===1802###eois===1805###lif===16###soif===563###eoif===566###isc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)") && (i<n)); ({AKA_mark("lis===65###sois===1807###eois===1810###lif===16###soif===568###eoif===571###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");i++;})) {
        AKA_BLOCK_LOOP_1789++;
        if (AKA_BLOCK_LOOP_1789 > 1000) {
            //break;
        }
            
            // If a dip is found
            if(AKA_mark("lis===68###sois===1878###eois===1905###lif===19###soif===639###eoif===666###ifc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)") && (AKA_mark("lis===68###sois===1878###eois===1905###lif===19###soif===639###eoif===666###isc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)") && (res[i-1]->val > res[i]->val))) {
                
                if(AKA_mark("lis===70###sois===1947###eois===1960###lif===21###soif===708###eoif===721###ifc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)") && (AKA_mark("lis===70###sois===1947###eois===1960###lif===21###soif===708###eoif===721###isc===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)") && (node1 == NULL)))                      {
AKA_mark("lis===70###sois===1983###eois===2000###lif===21###soif===744###eoif===761###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");node1 = res[i-1];
}

else {
AKA_mark("lis===-70-###sois===-1947-###eois===-194713-###lif===-21-###soif===-###eoif===-721-###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");
}
                AKA_mark("lis===71###sois===2018###eois===2033###lif===22###soif===779###eoif===794###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");node2 = res[i];
            }
else {
AKA_mark("lis===-68-###sois===-1878-###eois===-187827-###lif===-19-###soif===-###eoif===-666-###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");
}
        }
        
        AKA_mark("lis===75###sois===2079###eois===2108###lif===26###soif===840###eoif===869###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");swap(node1->val, node2->val);
        AKA_mark("lis===76###sois===2118###eois===2125###lif===27###soif===879###eoif===886###ins===true###function===.\\p2\\0099-recover-binary-search-tree\\0099-recover-binary-search-tree.cpp\\Solution\\recoverTree(TreeNode*)");return;
    }
    
};
#endif
