/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1022_SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_1022_SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1022_SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_1022_SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_CPP
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
{AKA_mark("Calling: .\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function findNumber(vector<int>) */
int findNumber(vector<int> v) /* << Aka begin of function int findNumber(vector<int> v) >> */
{AKA_mark("Calling: .\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)");AKA_fCall++;
        
        AKA_mark("lis===37###sois===952###eois===964###lif===2###soif===51###eoif===63###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)");int sum = 0;
        AKA_mark("lis===38###sois===974###eois===986###lif===3###soif===73###eoif===85###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)");int mul = 1;
        
        AKA_mark("lis===40###sois===1006###eois===1023###lif===5###soif===105###eoif===122###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)");int n = v.size();
        
        int AKA_BLOCK_LOOP_1043 = 0;
    AKA_mark("lis===42###sois===1047###eois===1057###lif===7###soif===146###eoif===156###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)");
for(int i=n-1; AKA_mark("lis===42###sois===1058###eois===1062###lif===7###soif===157###eoif===161###ifc===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)") && (AKA_mark("lis===42###sois===1058###eois===1062###lif===7###soif===157###eoif===161###isc===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)") && (i>=0)); ({AKA_mark("lis===42###sois===1064###eois===1067###lif===7###soif===163###eoif===166###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)");i--;})) {
        AKA_BLOCK_LOOP_1043++;
        if (AKA_BLOCK_LOOP_1043 > 1000) {
            //break;
        }
            AKA_mark("lis===43###sois===1084###eois===1102###lif===8###soif===183###eoif===201###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)");sum += mul * v[i];
            AKA_mark("lis===44###sois===1116###eois===1125###lif===9###soif===215###eoif===224###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)");mul *= 2;
        }
        
        AKA_mark("lis===47###sois===1156###eois===1167###lif===12###soif===255###eoif===266###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\findNumber(vector<int>)");return sum;
    }
    
    /** Instrumented function dfs(TreeNode*,vector<int>,int&) */
void dfs(TreeNode* root, vector<int> path, int &res) /* << Aka begin of function void dfs(TreeNode* root, vector<int> path, int &res) >> */
{AKA_mark("Calling: .\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");AKA_fCall++;
        
        if(AKA_mark("lis===52###sois===1263###eois===1275###lif===2###soif===77###eoif===89###ifc===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)") && (AKA_mark("lis===52###sois===1263###eois===1275###lif===2###soif===77###eoif===89###isc===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)") && (root == NULL)))                            {
AKA_mark("lis===52###sois===1304###eois===1311###lif===2###soif===118###eoif===125###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");return;
}

else {
AKA_mark("lis===-52-###sois===-1263-###eois===-126312-###lif===-2-###soif===-###eoif===-89-###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");
}
        
        AKA_mark("lis===54###sois===1331###eois===1357###lif===4###soif===145###eoif===171###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");path.push_back(root->val);
        
        if(AKA_mark("lis===56###sois===1380###eois===1421###lif===6###soif===194###eoif===235###ifc===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)") && ((AKA_mark("lis===56###sois===1380###eois===1398###lif===6###soif===194###eoif===212###isc===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)") && (root->left == NULL)) && (AKA_mark("lis===56###sois===1402###eois===1421###lif===6###soif===216###eoif===235###isc===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)") && (root->right == NULL)))) {
            
            AKA_mark("lis===58###sois===1452###eois===1477###lif===8###soif===266###eoif===291###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");int t = findNumber(path);
            AKA_mark("lis===59###sois===1491###eois===1500###lif===9###soif===305###eoif===314###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");res += t;
        }
else {
AKA_mark("lis===-56-###sois===-1380-###eois===-138041-###lif===-6-###soif===-###eoif===-235-###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");
}
        
        AKA_mark("lis===62###sois===1531###eois===1558###lif===12###soif===345###eoif===372###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");dfs(root->left, path, res);
        AKA_mark("lis===63###sois===1568###eois===1596###lif===13###soif===382###eoif===410###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");dfs(root->right, path, res);
        
        AKA_mark("lis===65###sois===1616###eois===1632###lif===15###soif===430###eoif===446###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");path.pop_back();
        
        AKA_mark("lis===67###sois===1652###eois===1659###lif===17###soif===466###eoif===473###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\dfs(TreeNode*,vector<int>,int&)");return;
    }
    
    /** Instrumented function sumRootToLeaf(TreeNode*) */
int sumRootToLeaf(TreeNode* root) /* << Aka begin of function int sumRootToLeaf(TreeNode* root) >> */
{AKA_mark("Calling: .\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\sumRootToLeaf(TreeNode*)");AKA_fCall++;
    
        AKA_mark("lis===72###sois===1729###eois===1741###lif===2###soif===51###eoif===63###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\sumRootToLeaf(TreeNode*)");int res = 0;
        
        if(AKA_mark("lis===74###sois===1764###eois===1776###lif===4###soif===86###eoif===98###ifc===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\sumRootToLeaf(TreeNode*)") && (AKA_mark("lis===74###sois===1764###eois===1776###lif===4###soif===86###eoif===98###isc===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\sumRootToLeaf(TreeNode*)") && (root == NULL)))                            {
AKA_mark("lis===74###sois===1805###eois===1816###lif===4###soif===127###eoif===138###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\sumRootToLeaf(TreeNode*)");return res;
}

else {
AKA_mark("lis===-74-###sois===-1764-###eois===-176412-###lif===-4-###soif===-###eoif===-98-###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\sumRootToLeaf(TreeNode*)");
}
        
        AKA_mark("lis===76###sois===1836###eois===1853###lif===6###soif===158###eoif===175###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\sumRootToLeaf(TreeNode*)");vector<int> path;
        
        // Find all root to leaf paths
        
        AKA_mark("lis===80###sois===1923###eois===1944###lif===10###soif===245###eoif===266###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\sumRootToLeaf(TreeNode*)");dfs(root, path, res);
        
            
        AKA_mark("lis===83###sois===1978###eois===1989###lif===13###soif===300###eoif===311###ins===true###function===.\\p10\\1022-sum-of-root-to-leaf-binary-numbers\\1022-sum-of-root-to-leaf-binary-numbers.cpp\\Solution\\sumRootToLeaf(TreeNode*)");return res;
    }
    
};
#endif
