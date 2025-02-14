/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0652_FIND_DUPLICATE_SUBTREES_0652_FIND_DUPLICATE_SUBTREES_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0652_FIND_DUPLICATE_SUBTREES_0652_FIND_DUPLICATE_SUBTREES_CPP
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
{AKA_mark("Calling: .\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:

    /** Instrumented function solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&) */
string solve(TreeNode* root, vector<TreeNode*> &res, unordered_map<string, int> &u) /* << Aka begin of function string solve(TreeNode* root, vector<TreeNode*> &res, unordered_map<string, int> &u) >> */
{AKA_mark("Calling: .\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)");AKA_fCall++;
        
        if(AKA_mark("lis===37###sois===1005###eois===1017###lif===2###soif===108###eoif===120###ifc===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)") && (AKA_mark("lis===37###sois===1005###eois===1017###lif===2###soif===108###eoif===120###isc===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)") && (root == NULL)))                        {
AKA_mark("lis===37###sois===1042###eois===1053###lif===2###soif===145###eoif===156###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)");return "#";
}

else {
AKA_mark("lis===-37-###sois===-1005-###eois===-100512-###lif===-2-###soif===-###eoif===-120-###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)");
}
        
        // postorder = left -> right -> root
        AKA_mark("lis===40###sois===1119###eois===1220###lif===5###soif===222###eoif===323###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)");string s = solve(root->left, res, u) + "," + solve(root->right, res, u) + "," + to_string(root->val);
        
        AKA_mark("lis===42###sois===1240###eois===1247###lif===7###soif===343###eoif===350###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)");u[s]++;
        
        if(AKA_mark("lis===44###sois===1270###eois===1279###lif===9###soif===373###eoif===382###ifc===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)") && (AKA_mark("lis===44###sois===1270###eois===1279###lif===9###soif===373###eoif===382###isc===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)") && (u[s] == 2)))                           {
AKA_mark("lis===44###sois===1307###eois===1327###lif===9###soif===410###eoif===430###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)");res.push_back(root);
}

else {
AKA_mark("lis===-44-###sois===-1270-###eois===-12709-###lif===-9-###soif===-###eoif===-382-###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)");
}
        AKA_mark("lis===45###sois===1337###eois===1346###lif===10###soif===440###eoif===449###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\solve(TreeNode*,vector<TreeNode*>&,unordered_map<string,int>&)");return s;
    }
    
    /** Instrumented function findDuplicateSubtrees(TreeNode*) */
vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) /* << Aka begin of function vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) >> */
{AKA_mark("Calling: .\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\findDuplicateSubtrees(TreeNode*)");AKA_fCall++;
    
        AKA_mark("lis===50###sois===1438###eois===1460###lif===2###soif===73###eoif===95###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\findDuplicateSubtrees(TreeNode*)");vector<TreeNode*> res;
        
        if(AKA_mark("lis===52###sois===1483###eois===1495###lif===4###soif===118###eoif===130###ifc===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\findDuplicateSubtrees(TreeNode*)") && (AKA_mark("lis===52###sois===1483###eois===1495###lif===4###soif===118###eoif===130###isc===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\findDuplicateSubtrees(TreeNode*)") && (root == NULL)))                        {
AKA_mark("lis===52###sois===1520###eois===1531###lif===4###soif===155###eoif===166###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\findDuplicateSubtrees(TreeNode*)");return res;
}

else {
AKA_mark("lis===-52-###sois===-1483-###eois===-148312-###lif===-4-###soif===-###eoif===-130-###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\findDuplicateSubtrees(TreeNode*)");
}
        
        AKA_mark("lis===54###sois===1551###eois===1580###lif===6###soif===186###eoif===215###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\findDuplicateSubtrees(TreeNode*)");unordered_map<string, int> u;
        
        AKA_mark("lis===56###sois===1600###eois===1620###lif===8###soif===235###eoif===255###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\findDuplicateSubtrees(TreeNode*)");solve(root, res, u);
        AKA_mark("lis===57###sois===1630###eois===1641###lif===9###soif===265###eoif===276###ins===true###function===.\\p6\\0652-find-duplicate-subtrees\\0652-find-duplicate-subtrees.cpp\\Solution\\findDuplicateSubtrees(TreeNode*)");return res;
    }
    
};
#endif
