/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0450_DELETE_NODE_IN_A_BST_0450_DELETE_NODE_IN_A_BST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0450_DELETE_NODE_IN_A_BST_0450_DELETE_NODE_IN_A_BST_CPP
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
{AKA_mark("Calling: .\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function deleteNode(TreeNode*,int) */
TreeNode* deleteNode(TreeNode* root, int key) /* << Aka begin of function TreeNode * deleteNode(TreeNode* root, int key) >> */
{AKA_mark("Calling: .\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");AKA_fCall++;
    
        if(AKA_mark("lis===37###sois===967###eois===979###lif===2###soif===66###eoif===78###ifc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (AKA_mark("lis===37###sois===967###eois===979###lif===2###soif===66###eoif===78###isc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (root == NULL)))                        {
AKA_mark("lis===37###sois===1004###eois===1016###lif===2###soif===103###eoif===115###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");return NULL;
}

        
        else {
            
            // First find the node having value "key" and then delete the node
            
            if(AKA_mark("lis===43###sois===1167###eois===1182###lif===8###soif===266###eoif===281###ifc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (AKA_mark("lis===43###sois===1167###eois===1182###lif===8###soif===266###eoif===281###isc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (key < root->val)))                 {
AKA_mark("lis===43###sois===1200###eois===1242###lif===8###soif===299###eoif===341###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");root->left  = deleteNode(root->left, key);
}

            else {
if(AKA_mark("lis===44###sois===1264###eois===1279###lif===9###soif===363###eoif===378###ifc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (AKA_mark("lis===44###sois===1264###eois===1279###lif===9###soif===363###eoif===378###isc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (key > root->val)))            {
AKA_mark("lis===44###sois===1292###eois===1335###lif===9###soif===391###eoif===434###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");root->right = deleteNode(root->right, key);
}

            
            else {
                
                // Now, key is found
                
                if(AKA_mark("lis===50###sois===1464###eois===1505###lif===15###soif===563###eoif===604###ifc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && ((AKA_mark("lis===50###sois===1464###eois===1482###lif===15###soif===563###eoif===581###isc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (root->left == NULL)) && (AKA_mark("lis===50###sois===1486###eois===1505###lif===15###soif===585###eoif===604###isc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (root->right == NULL))))           {
AKA_mark("lis===50###sois===1517###eois===1529###lif===15###soif===616###eoif===628###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");return NULL;
}

                
                else {
if(AKA_mark("lis===52###sois===1573###eois===1614###lif===17###soif===672###eoif===713###ifc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && ((AKA_mark("lis===52###sois===1573###eois===1591###lif===17###soif===672###eoif===690###isc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (root->left == NULL)) || (AKA_mark("lis===52###sois===1595###eois===1614###lif===17###soif===694###eoif===713###isc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (root->right == NULL)))) {
                    AKA_mark("lis===53###sois===1639###eois===1684###lif===18###soif===738###eoif===783###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");return root->left ? root->left : root->right;
                }
                
                else {
                    
                    // Root node having value "key" has both children
                    
                    AKA_mark("lis===60###sois===1882###eois===1910###lif===25###soif===981###eoif===1009###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");TreeNode* temp = root->left;
                    
                    // Replace root value with greatest element in left subtree
                    int AKA_BLOCK_LOOP_2035 = 0;
    while(AKA_mark("lis===63###sois===2041###eois===2060###lif===28###soif===1140###eoif===1159###ifc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (AKA_mark("lis===63###sois===2041###eois===2060###lif===28###soif===1140###eoif===1159###isc===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)") && (temp->right != NULL)))                      {
AKA_mark("lis===63###sois===2083###eois===2102###lif===28###soif===1182###eoif===1201###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");temp = temp->right;
}

                    
                    AKA_mark("lis===65###sois===2146###eois===2168###lif===30###soif===1245###eoif===1267###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");root->val = temp->val;
                    
                    // Now, delete greatest element node in left subtree since key is already replaced
                    AKA_mark("lis===68###sois===2316###eois===2363###lif===33###soif===1415###eoif===1462###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");root->left = deleteNode(root->left, temp->val);
                }
}

            }
}

        }
        
        AKA_mark("lis===73###sois===2428###eois===2440###lif===38###soif===1527###eoif===1539###ins===true###function===.\\p5\\0450-delete-node-in-a-bst\\0450-delete-node-in-a-bst.cpp\\Solution\\deleteNode(TreeNode*,int)");return root;
    }
    
};
#endif
