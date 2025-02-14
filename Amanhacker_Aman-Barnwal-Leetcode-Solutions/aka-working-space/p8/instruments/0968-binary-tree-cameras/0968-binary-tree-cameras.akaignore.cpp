/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0968_BINARY_TREE_CAMERAS_0968_BINARY_TREE_CAMERAS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0968_BINARY_TREE_CAMERAS_0968_BINARY_TREE_CAMERAS_CPP
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
{AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:

    /** Instrumented function dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&) */
void dfs(TreeNode* node, TreeNode* par, int &camCount, set<TreeNode*> &covered) /* << Aka begin of function void dfs(TreeNode* node, TreeNode* par, int &camCount, set<TreeNode*> &covered) >> */
{AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");AKA_fCall++;
        
        if(AKA_mark("lis===37###sois===1001###eois===1013###lif===2###soif===104###eoif===116###ifc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)") && (AKA_mark("lis===37###sois===1001###eois===1013###lif===2###soif===104###eoif===116###isc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)") && (node == NULL)))                        {
AKA_mark("lis===37###sois===1038###eois===1045###lif===2###soif===141###eoif===148###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");return;
}

else {
AKA_mark("lis===-37-###sois===-1001-###eois===-100112-###lif===-2-###soif===-###eoif===-116-###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");
}
        
        if(AKA_mark("lis===39###sois===1068###eois===1080###lif===4###soif===171###eoif===183###ifc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)") && (AKA_mark("lis===39###sois===1068###eois===1080###lif===4###soif===171###eoif===183###isc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)") && (node != NULL))) {
            
            AKA_mark("lis===41###sois===1111###eois===1152###lif===6###soif===214###eoif===255###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");dfs(node->left, node, camCount, covered);
            AKA_mark("lis===42###sois===1166###eois===1208###lif===7###soif===269###eoif===311###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");dfs(node->right, node, camCount, covered);
            
            // Here, you go to bottom level of the tree
            
            // Check if I need to add camera at node
            
            // if (par is NULL && node is uncovered) || any of left or right node is uncovered
            if( AKA_mark("lis===49###sois===1475###eois===1654###lif===14###soif===578###eoif===757###ifc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)") && (((((AKA_mark("lis===49###sois===1476###eois===1487###lif===14###soif===579###eoif===590###isc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)") && (par == NULL)) && (AKA_mark("lis===49###sois===1491###eois===1526###lif===14###soif===594###eoif===629###isc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)") && (covered.find(node) == covered.end())))) || 
                (AKA_mark("lis===50###sois===1549###eois===1590###lif===15###soif===652###eoif===693###isc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)") && (covered.find(node->left) == covered.end()))) || 
                (AKA_mark("lis===51###sois===1612###eois===1654###lif===16###soif===715###eoif===757###isc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)") && (covered.find(node->right) == covered.end()))) ) {
                
                AKA_mark("lis===53###sois===1694###eois===1705###lif===18###soif===797###eoif===808###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");camCount++;
                
                // Cover node, par, and its left and right child
                AKA_mark("lis===56###sois===1807###eois===1828###lif===21###soif===910###eoif===931###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");covered.insert(node);
                AKA_mark("lis===57###sois===1846###eois===1866###lif===22###soif===949###eoif===969###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");covered.insert(par);
                AKA_mark("lis===58###sois===1884###eois===1911###lif===23###soif===987###eoif===1014###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");covered.insert(node->left);
                AKA_mark("lis===59###sois===1929###eois===1957###lif===24###soif===1032###eoif===1060###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");covered.insert(node->right);
            }
else {
AKA_mark("lis===-49-###sois===-1475-###eois===-1475179-###lif===-14-###soif===-###eoif===-757-###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");
}
        }
else {
AKA_mark("lis===-39-###sois===-1068-###eois===-106812-###lif===-4-###soif===-###eoif===-183-###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");
}
        
        AKA_mark("lis===63###sois===2003###eois===2010###lif===28###soif===1106###eoif===1113###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\dfs(TreeNode*,TreeNode*,int&,set<TreeNode*>&)");return;
    }
    
    /** Instrumented function minCameraCover(TreeNode*) */
int minCameraCover(TreeNode* root) /* << Aka begin of function int minCameraCover(TreeNode* root) >> */
{AKA_mark("Calling: .\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)");AKA_fCall++;
        
        AKA_mark("lis===68###sois===2085###eois===2102###lif===2###soif===56###eoif===73###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)");int camCount = 0;
        AKA_mark("lis===69###sois===2112###eois===2135###lif===3###soif===83###eoif===106###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)");set<TreeNode*> covered;
        
        if(AKA_mark("lis===71###sois===2158###eois===2170###lif===5###soif===129###eoif===141###ifc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)") && (AKA_mark("lis===71###sois===2158###eois===2170###lif===5###soif===129###eoif===141###isc===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)") && (root == NULL)))                        {
AKA_mark("lis===71###sois===2195###eois===2211###lif===5###soif===166###eoif===182###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)");return camCount;
}

else {
AKA_mark("lis===-71-###sois===-2158-###eois===-215812-###lif===-5-###soif===-###eoif===-141-###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)");
}
    
        AKA_mark("lis===73###sois===2227###eois===2248###lif===7###soif===198###eoif===219###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)");covered.insert(NULL);
        
        AKA_mark("lis===75###sois===2268###eois===2303###lif===9###soif===239###eoif===274###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)");dfs(root, NULL, camCount, covered);
        AKA_mark("lis===76###sois===2313###eois===2329###lif===10###soif===284###eoif===300###ins===true###function===.\\p8\\0968-binary-tree-cameras\\0968-binary-tree-cameras.cpp\\Solution\\minCameraCover(TreeNode*)");return camCount;
    }
    
};

#endif
