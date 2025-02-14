/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0979_DISTRIBUTE_COINS_IN_BINARY_TREE_0979_DISTRIBUTE_COINS_IN_BINARY_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0979_DISTRIBUTE_COINS_IN_BINARY_TREE_0979_DISTRIBUTE_COINS_IN_BINARY_TREE_CPP
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
{AKA_mark("Calling: .\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:

    // dfs(node) is the excess number of coins in the subtree at or below this node
    /** Instrumented function dfs(TreeNode*,int&) */
int dfs(TreeNode* node, int &count) /* << Aka begin of function int dfs(TreeNode* node, int &count) >> */
{AKA_mark("Calling: .\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\dfs(TreeNode*,int&)");AKA_fCall++;
        
        if(AKA_mark("lis===38###sois===1042###eois===1054###lif===2###soif===60###eoif===72###ifc===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\dfs(TreeNode*,int&)") && (AKA_mark("lis===38###sois===1042###eois===1054###lif===2###soif===60###eoif===72###isc===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\dfs(TreeNode*,int&)") && (node == NULL)))                        {
AKA_mark("lis===38###sois===1079###eois===1088###lif===2###soif===97###eoif===106###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\dfs(TreeNode*,int&)");return 0;
}

else {
AKA_mark("lis===-38-###sois===-1042-###eois===-104212-###lif===-2-###soif===-###eoif===-72-###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\dfs(TreeNode*,int&)");
}
        
        AKA_mark("lis===40###sois===1108###eois===1139###lif===4###soif===126###eoif===157###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\dfs(TreeNode*,int&)");int l = dfs(node->left, count);
        AKA_mark("lis===41###sois===1149###eois===1181###lif===5###soif===167###eoif===199###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\dfs(TreeNode*,int&)");int r = dfs(node->right, count);
        
        AKA_mark("lis===43###sois===1201###eois===1226###lif===7###soif===219###eoif===244###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\dfs(TreeNode*,int&)");count += abs(l) + abs(r);
        
        AKA_mark("lis===45###sois===1246###eois===1277###lif===9###soif===264###eoif===295###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\dfs(TreeNode*,int&)");return (node->val + l + r) - 1;
    }
    
    /** Instrumented function distributeCoins(TreeNode*) */
int distributeCoins(TreeNode* root) /* << Aka begin of function int distributeCoins(TreeNode* root) >> */
{AKA_mark("Calling: .\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\distributeCoins(TreeNode*)");AKA_fCall++;
    
        AKA_mark("lis===50###sois===1349###eois===1363###lif===2###soif===53###eoif===67###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\distributeCoins(TreeNode*)");int count = 0;
        
        if(AKA_mark("lis===52###sois===1386###eois===1398###lif===4###soif===90###eoif===102###ifc===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\distributeCoins(TreeNode*)") && (AKA_mark("lis===52###sois===1386###eois===1398###lif===4###soif===90###eoif===102###isc===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\distributeCoins(TreeNode*)") && (root == NULL)))                        {
AKA_mark("lis===52###sois===1423###eois===1436###lif===4###soif===127###eoif===140###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\distributeCoins(TreeNode*)");return count;
}

else {
AKA_mark("lis===-52-###sois===-1386-###eois===-138612-###lif===-4-###soif===-###eoif===-102-###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\distributeCoins(TreeNode*)");
}
        
        AKA_mark("lis===54###sois===1456###eois===1473###lif===6###soif===160###eoif===177###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\distributeCoins(TreeNode*)");dfs(root, count);
        AKA_mark("lis===55###sois===1483###eois===1496###lif===7###soif===187###eoif===200###ins===true###function===.\\p8\\0979-distribute-coins-in-binary-tree\\0979-distribute-coins-in-binary-tree.cpp\\Solution\\distributeCoins(TreeNode*)");return count;
    }
    
};
#endif
