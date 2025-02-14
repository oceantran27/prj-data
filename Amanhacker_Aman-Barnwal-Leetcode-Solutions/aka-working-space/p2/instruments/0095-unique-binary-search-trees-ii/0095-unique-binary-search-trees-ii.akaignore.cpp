/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0095_UNIQUE_BINARY_SEARCH_TREES_II_0095_UNIQUE_BINARY_SEARCH_TREES_II_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0095_UNIQUE_BINARY_SEARCH_TREES_II_0095_UNIQUE_BINARY_SEARCH_TREES_II_CPP
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
{AKA_mark("Calling: .\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function generateTreeHelper(int,int) */
vector<TreeNode*> generateTreeHelper(int start, int end) /* << Aka begin of function vector<TreeNode*> generateTreeHelper(int start, int end) >> */
{AKA_mark("Calling: .\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");AKA_fCall++;
        
        AKA_mark("lis===37###sois===979###eois===1001###lif===2###soif===78###eoif===100###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");vector<TreeNode*> res;
        
        if(AKA_mark("lis===39###sois===1024###eois===1035###lif===4###soif===123###eoif===134###ifc===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)") && (AKA_mark("lis===39###sois===1024###eois===1035###lif===4###soif===123###eoif===134###isc===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)") && (start > end))) {
            
            AKA_mark("lis===41###sois===1066###eois===1088###lif===6###soif===165###eoif===187###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");TreeNode* node = NULL;
            AKA_mark("lis===42###sois===1102###eois===1122###lif===7###soif===201###eoif===221###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");res.push_back(node);
            
            AKA_mark("lis===44###sois===1150###eois===1161###lif===9###soif===249###eoif===260###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");return res;
        }
else {
AKA_mark("lis===-39-###sois===-1024-###eois===-102411-###lif===-4-###soif===-###eoif===-134-###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");
}                                     
        
        if(AKA_mark("lis===47###sois===1232###eois===1244###lif===12###soif===331###eoif===343###ifc===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)") && (AKA_mark("lis===47###sois===1232###eois===1244###lif===12###soif===331###eoif===343###isc===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)") && (start == end))) {
            
            AKA_mark("lis===49###sois===1275###eois===1312###lif===14###soif===374###eoif===411###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");TreeNode* node = new TreeNode(start);
            AKA_mark("lis===50###sois===1326###eois===1346###lif===15###soif===425###eoif===445###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");res.push_back(node);
            
            AKA_mark("lis===52###sois===1374###eois===1385###lif===17###soif===473###eoif===484###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");return res;
        }
else {
AKA_mark("lis===-47-###sois===-1232-###eois===-123212-###lif===-12-###soif===-###eoif===-343-###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");
}
        
        // Take ith node as root 
        
        int AKA_BLOCK_LOOP_1461 = 0;
    AKA_mark("lis===57###sois===1465###eois===1477###lif===22###soif===564###eoif===576###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");
for(int i=start; AKA_mark("lis===57###sois===1478###eois===1484###lif===22###soif===577###eoif===583###ifc===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)") && (AKA_mark("lis===57###sois===1478###eois===1484###lif===22###soif===577###eoif===583###isc===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)") && (i<=end)); ({AKA_mark("lis===57###sois===1486###eois===1489###lif===22###soif===585###eoif===588###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");i++;})) {
        AKA_BLOCK_LOOP_1461++;
        if (AKA_BLOCK_LOOP_1461 > 1000) {
            //break;
        }
            
            AKA_mark("lis===59###sois===1520###eois===1583###lif===24###soif===619###eoif===682###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");vector<TreeNode*> leftNodes = generateTreeHelper(start, i - 1);
            AKA_mark("lis===60###sois===1597###eois===1659###lif===25###soif===696###eoif===758###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");vector<TreeNode*> rightNodes = generateTreeHelper(i + 1, end);
            
            for(auto &l : leftNodes) {
AKA_mark("lis===62###sois===1691###eois===1698###lif===27###soif===790###eoif===797###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");
{
                for(auto &r : rightNodes) {
AKA_mark("lis===63###sois===1735###eois===1742###lif===28###soif===834###eoif===841###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");
{
                    
                    AKA_mark("lis===65###sois===1802###eois===1835###lif===30###soif===901###eoif===934###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");TreeNode* node = new TreeNode(i);
                    
                    AKA_mark("lis===67###sois===1879###eois===1894###lif===32###soif===978###eoif===993###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");node->left = l;
                    AKA_mark("lis===68###sois===1916###eois===1932###lif===33###soif===1015###eoif===1031###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");node->right = r;
                    
                    AKA_mark("lis===70###sois===1976###eois===1996###lif===35###soif===1075###eoif===1095###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");res.push_back(node);
                }}
AKA_mark("lis===63###sois===1735###eois===1742###lif===28###soif===834###eoif===841###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");

            }}
AKA_mark("lis===62###sois===1691###eois===1698###lif===27###soif===790###eoif===797###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");

        }
    
        AKA_mark("lis===75###sois===2057###eois===2068###lif===40###soif===1156###eoif===1167###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTreeHelper(int,int)");return res;
    }
    
    /** Instrumented function generateTrees(int) */
vector<TreeNode*> generateTrees(int n) /* << Aka begin of function vector<TreeNode*> generateTrees(int n) >> */
{AKA_mark("Calling: .\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTrees(int)");AKA_fCall++;
    
        AKA_mark("lis===80###sois===2143###eois===2175###lif===2###soif===56###eoif===88###ins===true###function===.\\p2\\0095-unique-binary-search-trees-ii\\0095-unique-binary-search-trees-ii.cpp\\Solution\\generateTrees(int)");return generateTreeHelper(1, n);        
    }
    
};
#endif
