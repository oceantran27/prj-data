/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_103_BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_103_BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_103_BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_103_BINARY_TREE_ZIGZAG_LEVEL_ORDER_TRAVERSAL_CPP
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
{AKA_mark("Calling: .\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function zigzagLevelOrder(TreeNode*) */
vector<vector<int>> zigzagLevelOrder(TreeNode* root) /* << Aka begin of function vector<vector<int>> zigzagLevelOrder(TreeNode* root) >> */
{AKA_mark("Calling: .\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");AKA_fCall++;
    
        AKA_mark("lis===37###sois===971###eois===995###lif===2###soif===70###eoif===94###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");vector<vector<int>> res;
        
        if(AKA_mark("lis===39###sois===1018###eois===1030###lif===4###soif===117###eoif===129###ifc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (AKA_mark("lis===39###sois===1018###eois===1030###lif===4###soif===117###eoif===129###isc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (root == NULL)))                        {
AKA_mark("lis===39###sois===1055###eois===1066###lif===4###soif===154###eoif===165###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");return res;
}

else {
AKA_mark("lis===-39-###sois===-1018-###eois===-101812-###lif===-4-###soif===-###eoif===-129-###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");
}
        
        AKA_mark("lis===41###sois===1086###eois===1105###lif===6###soif===185###eoif===204###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");queue<TreeNode*> q;
        AKA_mark("lis===42###sois===1115###eois===1128###lif===7###soif===214###eoif===227###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");q.push(root);
        
        AKA_mark("lis===44###sois===1148###eois===1165###lif===9###soif===247###eoif===264###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");vector<int> path;
        
        // 1-based indexing
        
        // Even level - Right to left
        // Odd level - Left to right
        
        AKA_mark("lis===51###sois===1311###eois===1321###lif===16###soif===410###eoif===420###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");int i = 1;
        
        int AKA_BLOCK_LOOP_1341 = 0;
    while(AKA_mark("lis===53###sois===1347###eois===1365###lif===18###soif===446###eoif===464###ifc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (AKA_mark("lis===53###sois===1347###eois===1365###lif===18###soif===446###eoif===464###isc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (q.empty() == false))) {
        AKA_BLOCK_LOOP_1341++;
        if (AKA_BLOCK_LOOP_1341 > 1000) {
            //break;
        }
            
            AKA_mark("lis===55###sois===1396###eois===1413###lif===20###soif===495###eoif===512###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");int n = q.size();
            
            int AKA_BLOCK_LOOP_1441 = 0;
    AKA_mark("lis===57###sois===1445###eois===1453###lif===22###soif===544###eoif===552###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");
for(int i=0; AKA_mark("lis===57###sois===1454###eois===1457###lif===22###soif===553###eoif===556###ifc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (AKA_mark("lis===57###sois===1454###eois===1457###lif===22###soif===553###eoif===556###isc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (i<n)); ({AKA_mark("lis===57###sois===1459###eois===1462###lif===22###soif===558###eoif===561###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");i++;})) {
        AKA_BLOCK_LOOP_1441++;
        if (AKA_BLOCK_LOOP_1441 > 1000) {
            //break;
        }

                AKA_mark("lis===59###sois===1485###eois===1512###lif===24###soif===584###eoif===611###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");TreeNode* temp = q.front();
                AKA_mark("lis===60###sois===1530###eois===1538###lif===25###soif===629###eoif===637###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");q.pop();
                
                AKA_mark("lis===62###sois===1574###eois===1600###lif===27###soif===673###eoif===699###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");path.push_back(temp->val);
                
                if(AKA_mark("lis===64###sois===1639###eois===1657###lif===29###soif===738###eoif===756###ifc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (AKA_mark("lis===64###sois===1639###eois===1657###lif===29###soif===738###eoif===756###isc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (temp->left != NULL)))          {
AKA_mark("lis===64###sois===1668###eois===1687###lif===29###soif===767###eoif===786###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");q.push(temp->left);
}

else {
AKA_mark("lis===-64-###sois===-1639-###eois===-163918-###lif===-29-###soif===-###eoif===-756-###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");
}
                if(AKA_mark("lis===65###sois===1708###eois===1727###lif===30###soif===807###eoif===826###ifc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (AKA_mark("lis===65###sois===1708###eois===1727###lif===30###soif===807###eoif===826###isc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (temp->right != NULL)))         {
AKA_mark("lis===65###sois===1737###eois===1757###lif===30###soif===836###eoif===856###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");q.push(temp->right);
}

else {
AKA_mark("lis===-65-###sois===-1708-###eois===-170819-###lif===-30-###soif===-###eoif===-826-###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");
}
            }
            
            if(AKA_mark("lis===68###sois===1803###eois===1813###lif===33###soif===902###eoif===912###ifc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (AKA_mark("lis===68###sois===1803###eois===1813###lif===33###soif===902###eoif===912###isc===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)") && (i % 2 == 0)))             {
AKA_mark("lis===68###sois===1827###eois===1861###lif===33###soif===926###eoif===960###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");reverse(path.begin(), path.end());
}

else {
AKA_mark("lis===-68-###sois===-1803-###eois===-180310-###lif===-33-###soif===-###eoif===-912-###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");
}
            
            AKA_mark("lis===70###sois===1889###eois===1909###lif===35###soif===988###eoif===1008###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");res.push_back(path);
            AKA_mark("lis===71###sois===1923###eois===1936###lif===36###soif===1022###eoif===1035###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");path.clear();
            
            AKA_mark("lis===73###sois===1964###eois===1968###lif===38###soif===1063###eoif===1067###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");i++;
        }
        
        AKA_mark("lis===76###sois===1999###eois===2010###lif===41###soif===1098###eoif===1109###ins===true###function===.\\p11\\103-binary-tree-zigzag-level-order-traversal\\103-binary-tree-zigzag-level-order-traversal.cpp\\Solution\\zigzagLevelOrder(TreeNode*)");return res;
    }
    
};
#endif
