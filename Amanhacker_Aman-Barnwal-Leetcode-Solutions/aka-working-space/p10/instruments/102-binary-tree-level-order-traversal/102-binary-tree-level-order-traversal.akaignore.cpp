/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_102_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_102_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_102_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_102_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_CPP
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
{AKA_mark("Calling: .\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function levelOrder(TreeNode*) */
vector<vector<int>> levelOrder(TreeNode* root) /* << Aka begin of function vector<vector<int>> levelOrder(TreeNode* root) >> */
{AKA_mark("Calling: .\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");AKA_fCall++;
    
        AKA_mark("lis===37###sois===965###eois===989###lif===2###soif===64###eoif===88###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");vector<vector<int>> res;
        
        if(AKA_mark("lis===39###sois===1012###eois===1024###lif===4###soif===111###eoif===123###ifc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (AKA_mark("lis===39###sois===1012###eois===1024###lif===4###soif===111###eoif===123###isc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (root == NULL)))                    {
AKA_mark("lis===39###sois===1045###eois===1056###lif===4###soif===144###eoif===155###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");return res;
}

else {
AKA_mark("lis===-39-###sois===-1012-###eois===-101212-###lif===-4-###soif===-###eoif===-123-###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");
}
        
        AKA_mark("lis===41###sois===1076###eois===1093###lif===6###soif===175###eoif===192###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");vector<int> path;
        AKA_mark("lis===42###sois===1103###eois===1122###lif===7###soif===202###eoif===221###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");queue<TreeNode*> q;
        
        AKA_mark("lis===44###sois===1142###eois===1155###lif===9###soif===241###eoif===254###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");q.push(root);
        
        int AKA_BLOCK_LOOP_1175 = 0;
    while(AKA_mark("lis===46###sois===1181###eois===1199###lif===11###soif===280###eoif===298###ifc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (AKA_mark("lis===46###sois===1181###eois===1199###lif===11###soif===280###eoif===298###isc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (q.empty() == false))) {
        AKA_BLOCK_LOOP_1175++;
        if (AKA_BLOCK_LOOP_1175 > 1000) {
            //break;
        }
            
            AKA_mark("lis===48###sois===1230###eois===1247###lif===13###soif===329###eoif===346###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");int n = q.size();
            
            // All nodes at one level
            int AKA_BLOCK_LOOP_1314 = 0;
    AKA_mark("lis===51###sois===1318###eois===1326###lif===16###soif===417###eoif===425###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");
for(int i=0; AKA_mark("lis===51###sois===1327###eois===1330###lif===16###soif===426###eoif===429###ifc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (AKA_mark("lis===51###sois===1327###eois===1330###lif===16###soif===426###eoif===429###isc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (i<n)); ({AKA_mark("lis===51###sois===1332###eois===1335###lif===16###soif===431###eoif===434###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");i++;})) {
        AKA_BLOCK_LOOP_1314++;
        if (AKA_BLOCK_LOOP_1314 > 1000) {
            //break;
        }
                
                AKA_mark("lis===53###sois===1374###eois===1401###lif===18###soif===473###eoif===500###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");TreeNode* temp = q.front();
                AKA_mark("lis===54###sois===1419###eois===1427###lif===19###soif===518###eoif===526###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");q.pop();
                
                AKA_mark("lis===56###sois===1463###eois===1489###lif===21###soif===562###eoif===588###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");path.push_back(temp->val);
                
                if(AKA_mark("lis===58###sois===1528###eois===1546###lif===23###soif===627###eoif===645###ifc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (AKA_mark("lis===58###sois===1528###eois===1546###lif===23###soif===627###eoif===645###isc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (temp->left != NULL)))           {
AKA_mark("lis===58###sois===1558###eois===1577###lif===23###soif===657###eoif===676###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");q.push(temp->left);
}

else {
AKA_mark("lis===-58-###sois===-1528-###eois===-152818-###lif===-23-###soif===-###eoif===-645-###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");
}
                if(AKA_mark("lis===59###sois===1598###eois===1617###lif===24###soif===697###eoif===716###ifc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (AKA_mark("lis===59###sois===1598###eois===1617###lif===24###soif===697###eoif===716###isc===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)") && (temp->right != NULL)))          {
AKA_mark("lis===59###sois===1628###eois===1648###lif===24###soif===727###eoif===747###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");q.push(temp->right);
}

else {
AKA_mark("lis===-59-###sois===-1598-###eois===-159819-###lif===-24-###soif===-###eoif===-716-###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");
}
            }
            
            AKA_mark("lis===62###sois===1691###eois===1711###lif===27###soif===790###eoif===810###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");res.push_back(path);
            AKA_mark("lis===63###sois===1725###eois===1738###lif===28###soif===824###eoif===837###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");path.clear();
        }
        
        
        AKA_mark("lis===67###sois===1779###eois===1790###lif===32###soif===878###eoif===889###ins===true###function===.\\p10\\102-binary-tree-level-order-traversal\\102-binary-tree-level-order-traversal.cpp\\Solution\\levelOrder(TreeNode*)");return res;
    }
    
};
#endif
