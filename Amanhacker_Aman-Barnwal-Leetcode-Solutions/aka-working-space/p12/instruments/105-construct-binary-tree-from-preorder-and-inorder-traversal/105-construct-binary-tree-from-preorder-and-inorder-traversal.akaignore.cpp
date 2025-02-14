/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_CPP
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
{AKA_mark("Calling: .\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:

    /** Instrumented function buildTreeHelper(vector<int>,vector<int>,int,int,int,int) */
TreeNode* buildTreeHelper(vector<int> preorder, vector<int> inorder, int preStart, int preEnd, int inStart, int inEnd) /* << Aka begin of function TreeNode * buildTreeHelper(vector<int> preorder, vector<int> inorder, int preStart, int preEnd, int inStart, int inEnd) >> */
{AKA_mark("Calling: .\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");AKA_fCall++;
        
        // Base Condition
        if(AKA_mark("lis===38###sois===1067###eois===1103###lif===3###soif===170###eoif===206###ifc===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)") && ((AKA_mark("lis===38###sois===1067###eois===1084###lif===3###soif===170###eoif===187###isc===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)") && (preStart > preEnd)) || (AKA_mark("lis===38###sois===1088###eois===1103###lif===3###soif===191###eoif===206###isc===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)") && (inStart > inEnd))))                        {
AKA_mark("lis===38###sois===1128###eois===1140###lif===3###soif===231###eoif===243###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");return NULL;
}

else {
AKA_mark("lis===-38-###sois===-1067-###eois===-106736-###lif===-3-###soif===-###eoif===-206-###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");
}
        
        AKA_mark("lis===40###sois===1160###eois===1213###lif===5###soif===263###eoif===316###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");int preLeftStart, preLeftEnd, inLeftStart, inLeftEnd;
        AKA_mark("lis===41###sois===1223###eois===1280###lif===6###soif===326###eoif===383###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");int preRightStart, preRightEnd, inRightStart, inRightEnd;
        
        // preorder means root -> left -> right
        // inorder means left -> root -> right
        
        AKA_mark("lis===46###sois===1407###eois===1457###lif===11###soif===510###eoif===560###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");TreeNode* root = new TreeNode(preorder[preStart]);
        
        // Find index of root in inorder
        AKA_mark("lis===49###sois===1519###eois===1533###lif===14###soif===622###eoif===636###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");int rootIndex;
        
        int AKA_BLOCK_LOOP_1553 = 0;
    AKA_mark("lis===51###sois===1557###eois===1571###lif===16###soif===660###eoif===674###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");
for(int i=inStart; AKA_mark("lis===51###sois===1572###eois===1580###lif===16###soif===675###eoif===683###ifc===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)") && (AKA_mark("lis===51###sois===1572###eois===1580###lif===16###soif===675###eoif===683###isc===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)") && (i<=inEnd)); ({AKA_mark("lis===51###sois===1582###eois===1585###lif===16###soif===685###eoif===688###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");i++;})) {
        AKA_BLOCK_LOOP_1553++;
        if (AKA_BLOCK_LOOP_1553 > 1000) {
            //break;
        }
            if(AKA_mark("lis===52###sois===1605###eois===1628###lif===17###soif===708###eoif===731###ifc===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)") && (AKA_mark("lis===52###sois===1605###eois===1628###lif===17###soif===708###eoif===731###isc===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)") && (inorder[i] == root->val))) {
                AKA_mark("lis===53###sois===1649###eois===1663###lif===18###soif===752###eoif===766###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");rootIndex = i;
                AKA_mark("lis===54###sois===1681###eois===1687###lif===19###soif===784###eoif===790###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");break;
            }
else {
AKA_mark("lis===-52-###sois===-1605-###eois===-160523-###lif===-17-###soif===-###eoif===-731-###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");
}
        }
        
        AKA_mark("lis===58###sois===1733###eois===1755###lif===23###soif===836###eoif===858###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");inLeftStart = inStart;
        AKA_mark("lis===59###sois===1765###eois===1784###lif===24###soif===868###eoif===887###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");inRightEnd = inEnd;
        
        AKA_mark("lis===61###sois===1804###eois===1830###lif===26###soif===907###eoif===933###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");inLeftEnd = rootIndex - 1;
        AKA_mark("lis===62###sois===1840###eois===1869###lif===27###soif===943###eoif===972###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");inRightStart = rootIndex + 1;
        
        AKA_mark("lis===64###sois===1889###eois===1917###lif===29###soif===992###eoif===1020###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");preLeftStart = preStart + 1;
        AKA_mark("lis===65###sois===1927###eois===1948###lif===30###soif===1030###eoif===1051###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");preRightEnd = preEnd;

        // preLeftEnd - preLeftStart = inLeftEnd - inLeftStart
        AKA_mark("lis===68###sois===2024###eois===2076###lif===33###soif===1127###eoif===1179###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");preLeftEnd = preLeftStart + inLeftEnd - inLeftStart;
        AKA_mark("lis===69###sois===2086###eois===2117###lif===34###soif===1189###eoif===1220###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");preRightStart = preLeftEnd + 1;
      
        AKA_mark("lis===71###sois===2135###eois===2233###lif===36###soif===1238###eoif===1336###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");root->left = buildTreeHelper(preorder, inorder, preLeftStart, preLeftEnd, inLeftStart, inLeftEnd);
        AKA_mark("lis===72###sois===2243###eois===2346###lif===37###soif===1346###eoif===1449###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");root->right = buildTreeHelper(preorder, inorder, preRightStart, preRightEnd, inRightStart, inRightEnd);
        
        AKA_mark("lis===74###sois===2366###eois===2378###lif===39###soif===1469###eoif===1481###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTreeHelper(vector<int>,vector<int>,int,int,int,int)");return root;
    }
    
    /** Instrumented function buildTree(vector<int>&,vector<int>&) */
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) /* << Aka begin of function TreeNode * buildTree(vector<int>& preorder, vector<int>& inorder) >> */
{AKA_mark("Calling: .\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTree(vector<int>&,vector<int>&)");AKA_fCall++;
    
        AKA_mark("lis===79###sois===2479###eois===2501###lif===2###soif===82###eoif===104###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTree(vector<int>&,vector<int>&)");TreeNode* root = NULL;
        
        AKA_mark("lis===81###sois===2521###eois===2545###lif===4###soif===124###eoif===148###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTree(vector<int>&,vector<int>&)");int n = preorder.size();
        
        if(AKA_mark("lis===83###sois===2568###eois===2574###lif===6###soif===171###eoif===177###ifc===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTree(vector<int>&,vector<int>&)") && (AKA_mark("lis===83###sois===2568###eois===2574###lif===6###soif===171###eoif===177###isc===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTree(vector<int>&,vector<int>&)") && (n == 0)))                                          {
AKA_mark("lis===83###sois===2617###eois===2629###lif===6###soif===220###eoif===232###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTree(vector<int>&,vector<int>&)");return root;
}

else {
AKA_mark("lis===-83-###sois===-2568-###eois===-25686-###lif===-6-###soif===-###eoif===-177-###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTree(vector<int>&,vector<int>&)");
}
        
        // preorder means root -> left -> right
        // inorder means left -> root -> right
        
        AKA_mark("lis===88###sois===2756###eois===2814###lif===11###soif===359###eoif===417###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTree(vector<int>&,vector<int>&)");root = buildTreeHelper(preorder, inorder, 0, n-1, 0, n-1);
        AKA_mark("lis===89###sois===2824###eois===2836###lif===12###soif===427###eoif===439###ins===true###function===.\\p12\\105-construct-binary-tree-from-preorder-and-inorder-traversal\\105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp\\Solution\\buildTree(vector<int>&,vector<int>&)");return root;
    }
    
};
#endif
