/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1026_MAXIMUM_DIFFERENCE_BETWEEN_NODE_AND_ANCESTOR_1026_MAXIMUM_DIFFERENCE_BETWEEN_NODE_AND_ANCESTOR_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1026_MAXIMUM_DIFFERENCE_BETWEEN_NODE_AND_ANCESTOR_1026_MAXIMUM_DIFFERENCE_BETWEEN_NODE_AND_ANCESTOR_CPP
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
{AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:

    /** Instrumented function findMinMax(TreeNode*,TreeNode*,int&,int&) */
void findMinMax(TreeNode* root, TreeNode* node, int &mini, int &maxi) /* << Aka begin of function void findMinMax(TreeNode* root, TreeNode* node, int &mini, int &maxi) >> */
{AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");AKA_fCall++;
        
        if(AKA_mark("lis===37###sois===991###eois===1003###lif===2###soif===94###eoif===106###ifc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)") && (AKA_mark("lis===37###sois===991###eois===1003###lif===2###soif===94###eoif===106###isc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)") && (node == NULL)))                            {
AKA_mark("lis===37###sois===1032###eois===1039###lif===2###soif===135###eoif===142###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");return;
}

else {
AKA_mark("lis===-37-###sois===-991-###eois===-99112-###lif===-2-###soif===-###eoif===-106-###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");
}
        
        // For any node in the subtree of root node
        if(AKA_mark("lis===40###sois===1115###eois===1127###lif===5###soif===218###eoif===230###ifc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)") && (AKA_mark("lis===40###sois===1115###eois===1127###lif===5###soif===218###eoif===230###isc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)") && (node != root))) {
            AKA_mark("lis===41###sois===1144###eois===1172###lif===6###soif===247###eoif===275###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");mini = min(mini, node->val);
            AKA_mark("lis===42###sois===1186###eois===1214###lif===7###soif===289###eoif===317###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");maxi = max(maxi, node->val);
        }
else {
AKA_mark("lis===-40-###sois===-1115-###eois===-111512-###lif===-5-###soif===-###eoif===-230-###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");
}
        
        AKA_mark("lis===45###sois===1245###eois===1286###lif===10###soif===348###eoif===389###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");findMinMax(root, node->left, mini, maxi);
        AKA_mark("lis===46###sois===1296###eois===1338###lif===11###soif===399###eoif===441###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");findMinMax(root, node->right, mini, maxi);
        
        AKA_mark("lis===48###sois===1358###eois===1365###lif===13###soif===461###eoif===468###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\findMinMax(TreeNode*,TreeNode*,int&,int&)");return;
    }
    
    /** Instrumented function isLeafNode(TreeNode*) */
bool isLeafNode(TreeNode* root) /* << Aka begin of function bool isLeafNode(TreeNode* root) >> */
{AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\isLeafNode(TreeNode*)");AKA_fCall++;
        AKA_mark("lis===52###sois===1427###eois===1478###lif===1###soif===43###eoif===94###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\isLeafNode(TreeNode*)");return (root->left == NULL && root->right == NULL);
    }
    
    // For each node, find the min and max value of its descendants of its subtree
    
    /** Instrumented function dfs(TreeNode*,int&) */
void dfs(TreeNode* root, int &res) /* << Aka begin of function void dfs(TreeNode* root, int &res) >> */
{AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");AKA_fCall++;
        
        if(AKA_mark("lis===59###sois===1646###eois===1658###lif===2###soif===59###eoif===71###ifc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)") && (AKA_mark("lis===59###sois===1646###eois===1658###lif===2###soif===59###eoif===71###isc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)") && (root == NULL)))                            {
AKA_mark("lis===59###sois===1687###eois===1694###lif===2###soif===100###eoif===107###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");return;
}

else {
AKA_mark("lis===-59-###sois===-1646-###eois===-164612-###lif===-2-###soif===-###eoif===-71-###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");
}
        
        AKA_mark("lis===61###sois===1714###eois===1749###lif===4###soif===127###eoif===162###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");int mini = INT_MAX, maxi = INT_MIN;
        
        if(AKA_mark("lis===63###sois===1772###eois===1797###lif===6###soif===185###eoif===210###ifc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)") && (AKA_mark("lis===63###sois===1772###eois===1797###lif===6###soif===185###eoif===210###isc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)") && (isLeafNode(root) == false))) {
           
            AKA_mark("lis===65###sois===1827###eois===1862###lif===8###soif===240###eoif===275###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");findMinMax(root, root, mini, maxi);
            
            AKA_mark("lis===67###sois===1890###eois===1953###lif===10###soif===303###eoif===366###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");int diff = max( abs(root->val - maxi), abs(root->val - mini) );
            AKA_mark("lis===68###sois===1967###eois===1988###lif===11###soif===380###eoif===401###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");res = max(res, diff);
        }
else {
AKA_mark("lis===-63-###sois===-1772-###eois===-177225-###lif===-6-###soif===-###eoif===-210-###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");
}
        
        AKA_mark("lis===71###sois===2019###eois===2040###lif===14###soif===432###eoif===453###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");dfs(root->left, res);
        AKA_mark("lis===72###sois===2050###eois===2072###lif===15###soif===463###eoif===485###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");dfs(root->right, res);
        
        AKA_mark("lis===74###sois===2092###eois===2099###lif===17###soif===505###eoif===512###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\dfs(TreeNode*,int&)");return;
    }
    
    /** Instrumented function maxAncestorDiff(TreeNode*) */
int maxAncestorDiff(TreeNode* root) /* << Aka begin of function int maxAncestorDiff(TreeNode* root) >> */
{AKA_mark("Calling: .\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\maxAncestorDiff(TreeNode*)");AKA_fCall++;
    
        AKA_mark("lis===79###sois===2171###eois===2189###lif===2###soif===53###eoif===71###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\maxAncestorDiff(TreeNode*)");int res = INT_MIN;
        
        if(AKA_mark("lis===81###sois===2212###eois===2224###lif===4###soif===94###eoif===106###ifc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\maxAncestorDiff(TreeNode*)") && (AKA_mark("lis===81###sois===2212###eois===2224###lif===4###soif===94###eoif===106###isc===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\maxAncestorDiff(TreeNode*)") && (root == NULL)))                            {
AKA_mark("lis===81###sois===2253###eois===2264###lif===4###soif===135###eoif===146###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\maxAncestorDiff(TreeNode*)");return res;
}

else {
AKA_mark("lis===-81-###sois===-2212-###eois===-221212-###lif===-4-###soif===-###eoif===-106-###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\maxAncestorDiff(TreeNode*)");
}
        
        AKA_mark("lis===83###sois===2284###eois===2299###lif===6###soif===166###eoif===181###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\maxAncestorDiff(TreeNode*)");dfs(root, res);
        
        AKA_mark("lis===85###sois===2319###eois===2330###lif===8###soif===201###eoif===212###ins===true###function===.\\p11\\1026-maximum-difference-between-node-and-ancestor\\1026-maximum-difference-between-node-and-ancestor.cpp\\Solution\\maxAncestorDiff(TreeNode*)");return res;
    }
    
};
#endif
