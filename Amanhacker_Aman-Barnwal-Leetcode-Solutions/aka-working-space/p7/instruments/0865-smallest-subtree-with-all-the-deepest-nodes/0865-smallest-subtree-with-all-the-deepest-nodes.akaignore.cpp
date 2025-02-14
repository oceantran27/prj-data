/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0865_SMALLEST_SUBTREE_WITH_ALL_THE_DEEPEST_NODES_0865_SMALLEST_SUBTREE_WITH_ALL_THE_DEEPEST_NODES_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0865_SMALLEST_SUBTREE_WITH_ALL_THE_DEEPEST_NODES_0865_SMALLEST_SUBTREE_WITH_ALL_THE_DEEPEST_NODES_CPP
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
{AKA_mark("Calling: .\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function bfs(TreeNode*,vector<TreeNode*>&) */
void bfs(TreeNode* root, vector<TreeNode*> &deepest) /* << Aka begin of function void bfs(TreeNode* root, vector<TreeNode*> &deepest) >> */
{AKA_mark("Calling: .\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");AKA_fCall++;
        
        if(AKA_mark("lis===37###sois===978###eois===990###lif===2###soif===77###eoif===89###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (AKA_mark("lis===37###sois===978###eois===990###lif===2###soif===77###eoif===89###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (root == NULL)))                            {
AKA_mark("lis===37###sois===1019###eois===1026###lif===2###soif===118###eoif===125###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");return;
}

else {
AKA_mark("lis===-37-###sois===-978-###eois===-97812-###lif===-2-###soif===-###eoif===-89-###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");
}
        
        AKA_mark("lis===39###sois===1046###eois===1065###lif===4###soif===145###eoif===164###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");queue<TreeNode*> q;
        AKA_mark("lis===40###sois===1075###eois===1088###lif===5###soif===174###eoif===187###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");q.push(root);
        
        int AKA_BLOCK_LOOP_1108 = 0;
    while(AKA_mark("lis===42###sois===1114###eois===1132###lif===7###soif===213###eoif===231###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (AKA_mark("lis===42###sois===1114###eois===1132###lif===7###soif===213###eoif===231###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (q.empty() == false))) {
        AKA_BLOCK_LOOP_1108++;
        if (AKA_BLOCK_LOOP_1108 > 1000) {
            //break;
        }
            
            AKA_mark("lis===44###sois===1163###eois===1180###lif===9###soif===262###eoif===279###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");int n = q.size();
            AKA_mark("lis===45###sois===1194###eois===1210###lif===10###soif===293###eoif===309###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");deepest.clear();
            
            int AKA_BLOCK_LOOP_1238 = 0;
    while(AKA_mark("lis===47###sois===1244###eois===1247###lif===12###soif===343###eoif===346###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (AKA_mark("lis===47###sois===1244###eois===1247###lif===12###soif===343###eoif===346###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (n--))) {
        AKA_BLOCK_LOOP_1238++;
        if (AKA_BLOCK_LOOP_1238 > 1000) {
            //break;
        }
                
                AKA_mark("lis===49###sois===1286###eois===1313###lif===14###soif===385###eoif===412###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");TreeNode* temp = q.front();
                AKA_mark("lis===50###sois===1331###eois===1339###lif===15###soif===430###eoif===438###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");q.pop();
                
                AKA_mark("lis===52###sois===1375###eois===1399###lif===17###soif===474###eoif===498###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");deepest.push_back(temp);
                
                if(AKA_mark("lis===54###sois===1438###eois===1456###lif===19###soif===537###eoif===555###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (AKA_mark("lis===54###sois===1438###eois===1456###lif===19###soif===537###eoif===555###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (temp->left != NULL)))              {
AKA_mark("lis===54###sois===1471###eois===1490###lif===19###soif===570###eoif===589###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");q.push(temp->left);
}

else {
AKA_mark("lis===-54-###sois===-1438-###eois===-143818-###lif===-19-###soif===-###eoif===-555-###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");
}
                if(AKA_mark("lis===55###sois===1511###eois===1530###lif===20###soif===610###eoif===629###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (AKA_mark("lis===55###sois===1511###eois===1530###lif===20###soif===610###eoif===629###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)") && (temp->right != NULL)))             {
AKA_mark("lis===55###sois===1544###eois===1564###lif===20###soif===643###eoif===663###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");q.push(temp->right);
}

else {
AKA_mark("lis===-55-###sois===-1511-###eois===-151119-###lif===-20-###soif===-###eoif===-629-###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");
}
            }
        }
        
        AKA_mark("lis===59###sois===1610###eois===1617###lif===24###soif===709###eoif===716###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\bfs(TreeNode*,vector<TreeNode*>&)");return;
    }
    
    /** Instrumented function findLCA(TreeNode*,TreeNode*,TreeNode*) */
TreeNode* findLCA(TreeNode* root, TreeNode* l, TreeNode* r) /* << Aka begin of function TreeNode * findLCA(TreeNode* root, TreeNode* l, TreeNode* r) >> */
{AKA_mark("Calling: .\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");AKA_fCall++;
        
        if(AKA_mark("lis===64###sois===1720###eois===1732###lif===2###soif===84###eoif===96###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && (AKA_mark("lis===64###sois===1720###eois===1732###lif===2###soif===84###eoif===96###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && (root == NULL)))                                        {
AKA_mark("lis===64###sois===1773###eois===1785###lif===2###soif===137###eoif===149###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");return NULL;
}

else {
AKA_mark("lis===-64-###sois===-1720-###eois===-172012-###lif===-2-###soif===-###eoif===-96-###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");
}
        
        if(AKA_mark("lis===66###sois===1808###eois===1850###lif===4###soif===172###eoif===214###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && ((AKA_mark("lis===66###sois===1808###eois===1827###lif===4###soif===172###eoif===191###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && (root->val == l->val)) || (AKA_mark("lis===66###sois===1831###eois===1850###lif===4###soif===195###eoif===214###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && (root->val == r->val))))          {
AKA_mark("lis===66###sois===1861###eois===1873###lif===4###soif===225###eoif===237###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");return root;
}

else {
AKA_mark("lis===-66-###sois===-1808-###eois===-180842-###lif===-4-###soif===-###eoif===-214-###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");
}
        
        AKA_mark("lis===68###sois===1893###eois===1936###lif===6###soif===257###eoif===300###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");TreeNode* left = findLCA(root->left, l, r);
        AKA_mark("lis===69###sois===1946###eois===1991###lif===7###soif===310###eoif===355###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");TreeNode* right = findLCA(root->right, l, r);
        
        if(AKA_mark("lis===71###sois===2014###eois===2043###lif===9###soif===378###eoif===407###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && ((AKA_mark("lis===71###sois===2014###eois===2026###lif===9###soif===378###eoif===390###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && (left != NULL)) && (AKA_mark("lis===71###sois===2030###eois===2043###lif===9###soif===394###eoif===407###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && (right != NULL))))                       {
AKA_mark("lis===71###sois===2067###eois===2079###lif===9###soif===431###eoif===443###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");return root;
}

else {
AKA_mark("lis===-71-###sois===-2014-###eois===-201429-###lif===-9-###soif===-###eoif===-407-###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");
}
        
        if(AKA_mark("lis===73###sois===2102###eois===2114###lif===11###soif===466###eoif===478###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && (AKA_mark("lis===73###sois===2102###eois===2114###lif===11###soif===466###eoif===478###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)") && (left != NULL)))                                        {
AKA_mark("lis===73###sois===2155###eois===2167###lif===11###soif===519###eoif===531###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");return left;
}

        else                                                    {
AKA_mark("lis===74###sois===2233###eois===2246###lif===12###soif===597###eoif===610###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\findLCA(TreeNode*,TreeNode*,TreeNode*)");return right;
}

    }
    
    /** Instrumented function subtreeWithAllDeepest(TreeNode*) */
TreeNode* subtreeWithAllDeepest(TreeNode* root) /* << Aka begin of function TreeNode * subtreeWithAllDeepest(TreeNode* root) >> */
{AKA_mark("Calling: .\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");AKA_fCall++;
    
        if(AKA_mark("lis===79###sois===2333###eois===2345###lif===2###soif===68###eoif===80###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)") && (AKA_mark("lis===79###sois===2333###eois===2345###lif===2###soif===68###eoif===80###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)") && (root == NULL)))                            {
AKA_mark("lis===79###sois===2374###eois===2386###lif===2###soif===109###eoif===121###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");return NULL;
}

else {
AKA_mark("lis===-79-###sois===-2333-###eois===-233312-###lif===-2-###soif===-###eoif===-80-###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");
}
        
        // Find all deepest node and find the lca of all
        
        AKA_mark("lis===83###sois===2474###eois===2500###lif===6###soif===209###eoif===235###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");vector<TreeNode*> deepest;
        AKA_mark("lis===84###sois===2510###eois===2529###lif===7###soif===245###eoif===264###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");bfs(root, deepest);
        
        AKA_mark("lis===86###sois===2549###eois===2572###lif===9###soif===284###eoif===307###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");int n = deepest.size();
        
        if(AKA_mark("lis===88###sois===2595###eois===2601###lif===11###soif===330###eoif===336###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)") && (AKA_mark("lis===88###sois===2595###eois===2601###lif===11###soif===330###eoif===336###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)") && (n == 1)))                                  {
AKA_mark("lis===88###sois===2636###eois===2654###lif===11###soif===371###eoif===389###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");return deepest[0];
}

else {
AKA_mark("lis===-88-###sois===-2595-###eois===-25956-###lif===-11-###soif===-###eoif===-336-###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");
}
        
        AKA_mark("lis===90###sois===2674###eois===2728###lif===13###soif===409###eoif===463###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");TreeNode* LCA = findLCA(root, deepest[0], deepest[1]);
        
        int AKA_BLOCK_LOOP_2748 = 0;
    AKA_mark("lis===92###sois===2752###eois===2760###lif===15###soif===487###eoif===495###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");
for(int i=2; AKA_mark("lis===92###sois===2761###eois===2764###lif===15###soif===496###eoif===499###ifc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)") && (AKA_mark("lis===92###sois===2761###eois===2764###lif===15###soif===496###eoif===499###isc===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)") && (i<n)); ({AKA_mark("lis===92###sois===2766###eois===2769###lif===15###soif===501###eoif===504###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");i++;})) {
        AKA_BLOCK_LOOP_2748++;
        if (AKA_BLOCK_LOOP_2748 > 1000) {
            //break;
        }
            AKA_mark("lis===93###sois===2786###eois===2823###lif===16###soif===521###eoif===558###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");LCA = findLCA(root, LCA, deepest[i]);
        }
        
        AKA_mark("lis===96###sois===2854###eois===2865###lif===19###soif===589###eoif===600###ins===true###function===.\\p7\\0865-smallest-subtree-with-all-the-deepest-nodes\\0865-smallest-subtree-with-all-the-deepest-nodes.cpp\\Solution\\subtreeWithAllDeepest(TreeNode*)");return LCA;
    }
    
};
#endif
