/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0863_ALL_NODES_DISTANCE_K_IN_BINARY_TREE_0863_ALL_NODES_DISTANCE_K_IN_BINARY_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0863_ALL_NODES_DISTANCE_K_IN_BINARY_TREE_0863_ALL_NODES_DISTANCE_K_IN_BINARY_TREE_CPP
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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(NULL), right(NULL) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    // Form the graph
    /** Instrumented function bfs(TreeNode*,unordered_map<int,vector<int>>&) */
void bfs(TreeNode* root, unordered_map<int, vector<int>> &adj) /* << Aka begin of function void bfs(TreeNode* root, unordered_map<int, vector<int>> &adj) >> */
{AKA_mark("Calling: .\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");AKA_fCall++;
        
        AKA_mark("lis===34###sois===686###eois===705###lif===2###soif===84###eoif===103###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");queue<TreeNode*> q;
        AKA_mark("lis===35###sois===715###eois===728###lif===3###soif===113###eoif===126###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");q.push(root);
        
        int AKA_BLOCK_LOOP_748 = 0;
    while(AKA_mark("lis===37###sois===754###eois===772###lif===5###soif===152###eoif===170###ifc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)") && (AKA_mark("lis===37###sois===754###eois===772###lif===5###soif===152###eoif===170###isc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)") && (q.empty() == false))) {
        AKA_BLOCK_LOOP_748++;
        if (AKA_BLOCK_LOOP_748 > 1000) {
            //break;
        }
            
            AKA_mark("lis===39###sois===803###eois===820###lif===7###soif===201###eoif===218###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");int n = q.size();
            
            int AKA_BLOCK_LOOP_848 = 0;
    while(AKA_mark("lis===41###sois===854###eois===857###lif===9###soif===252###eoif===255###ifc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)") && (AKA_mark("lis===41###sois===854###eois===857###lif===9###soif===252###eoif===255###isc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)") && (n--))) {
        AKA_BLOCK_LOOP_848++;
        if (AKA_BLOCK_LOOP_848 > 1000) {
            //break;
        }
                
                AKA_mark("lis===43###sois===896###eois===923###lif===11###soif===294###eoif===321###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");TreeNode* temp = q.front();
                AKA_mark("lis===44###sois===941###eois===949###lif===12###soif===339###eoif===347###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");q.pop();
                
                if(AKA_mark("lis===46###sois===988###eois===1006###lif===14###soif===386###eoif===404###ifc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)") && (AKA_mark("lis===46###sois===988###eois===1006###lif===14###soif===386###eoif===404###isc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)") && (temp->left != NULL))) {
                    
                    AKA_mark("lis===48###sois===1053###eois===1095###lif===16###soif===451###eoif===493###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");adj[temp->left->val].push_back(temp->val);
                    AKA_mark("lis===49###sois===1117###eois===1159###lif===17###soif===515###eoif===557###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");adj[temp->val].push_back(temp->left->val);
                    
                    AKA_mark("lis===51###sois===1203###eois===1222###lif===19###soif===601###eoif===620###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");q.push(temp->left);
                }
else {
AKA_mark("lis===-46-###sois===-988-###eois===-98818-###lif===-14-###soif===-###eoif===-404-###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");
}
                
                if(AKA_mark("lis===54###sois===1280###eois===1299###lif===22###soif===678###eoif===697###ifc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)") && (AKA_mark("lis===54###sois===1280###eois===1299###lif===22###soif===678###eoif===697###isc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)") && (temp->right != NULL))) {
                    
                    AKA_mark("lis===56###sois===1346###eois===1389###lif===24###soif===744###eoif===787###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");adj[temp->right->val].push_back(temp->val);
                    AKA_mark("lis===57###sois===1411###eois===1454###lif===25###soif===809###eoif===852###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");adj[temp->val].push_back(temp->right->val);
                    
                    AKA_mark("lis===59###sois===1498###eois===1518###lif===27###soif===896###eoif===916###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");q.push(temp->right);
                }
else {
AKA_mark("lis===-54-###sois===-1280-###eois===-128019-###lif===-22-###soif===-###eoif===-697-###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");
}
            }
        }
        
        AKA_mark("lis===64###sois===1583###eois===1590###lif===32###soif===981###eoif===988###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\bfs(TreeNode*,unordered_map<int,vector<int>>&)");return;
    }
   
    /** Instrumented function dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&) */
void dfs(int src, unordered_map<int, vector<int>> &adj, vector<int> &dist, vector<int> &vis) /* << Aka begin of function void dfs(int src, unordered_map<int, vector<int>> &adj, vector<int> &dist, vector<int> &vis) >> */
{AKA_mark("Calling: .\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)");AKA_fCall++;
        
        AKA_mark("lis===69###sois===1722###eois===1735###lif===2###soif===114###eoif===127###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)");vis[src] = 1;
        
        for(auto &ch : adj[src]) {
AKA_mark("lis===71###sois===1759###eois===1767###lif===4###soif===151###eoif===159###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)");
{
            
            if(AKA_mark("lis===73###sois===1812###eois===1824###lif===6###soif===204###eoif===216###ifc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)") && (AKA_mark("lis===73###sois===1812###eois===1824###lif===6###soif===204###eoif===216###isc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)") && (vis[ch] == 0))) {

                AKA_mark("lis===75###sois===1847###eois===1872###lif===8###soif===239###eoif===264###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)");dist[ch] = dist[src] + 1;
                AKA_mark("lis===76###sois===1890###eois===1914###lif===9###soif===282###eoif===306###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)");dfs(ch, adj, dist, vis);
            }
else {
AKA_mark("lis===-73-###sois===-1812-###eois===-181212-###lif===-6-###soif===-###eoif===-216-###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)");
}
        }}
AKA_mark("lis===71###sois===1759###eois===1767###lif===4###soif===151###eoif===159###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)");

        
        AKA_mark("lis===80###sois===1960###eois===1967###lif===13###soif===352###eoif===359###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\dfs(int,unordered_map<int,vector<int>>&,vector<int>&,vector<int>&)");return;
    }
    
    /** Instrumented function distanceK(TreeNode*,TreeNode*,int) */
vector<int> distanceK(TreeNode* root, TreeNode* target, int k) /* << Aka begin of function vector<int> distanceK(TreeNode* root, TreeNode* target, int k) >> */
{AKA_mark("Calling: .\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");AKA_fCall++;
    
        AKA_mark("lis===85###sois===2066###eois===2082###lif===2###soif===80###eoif===96###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");vector<int> res;
        AKA_mark("lis===86###sois===2092###eois===2128###lif===3###soif===106###eoif===142###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");unordered_map<int, vector<int>> adj;
        
        AKA_mark("lis===88###sois===2148###eois===2163###lif===5###soif===162###eoif===177###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");bfs(root, adj);
        AKA_mark("lis===89###sois===2173###eois===2195###lif===6###soif===187###eoif===209###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");int src = target->val;
        
        AKA_mark("lis===91###sois===2215###eois===2253###lif===8###soif===229###eoif===267###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");vector<int> dist(501, 0), vis(501, 0);
        AKA_mark("lis===92###sois===2263###eois===2288###lif===9###soif===277###eoif===302###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");dfs(src, adj, dist, vis);
        
        int AKA_BLOCK_LOOP_2308 = 0;
    AKA_mark("lis===94###sois===2312###eois===2320###lif===11###soif===326###eoif===334###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");
for(int i=0; AKA_mark("lis===94###sois===2321###eois===2327###lif===11###soif===335###eoif===341###ifc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)") && (AKA_mark("lis===94###sois===2321###eois===2327###lif===11###soif===335###eoif===341###isc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)") && (i<=500)); ({AKA_mark("lis===94###sois===2329###eois===2332###lif===11###soif===343###eoif===346###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");i++;})) {
        AKA_BLOCK_LOOP_2308++;
        if (AKA_BLOCK_LOOP_2308 > 1000) {
            //break;
        }
            if(AKA_mark("lis===95###sois===2352###eois===2379###lif===12###soif===366###eoif===393###ifc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)") && ((AKA_mark("lis===95###sois===2352###eois===2364###lif===12###soif===366###eoif===378###isc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)") && (dist[i] == k)) && (AKA_mark("lis===95###sois===2368###eois===2379###lif===12###soif===382###eoif===393###isc===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)") && (vis[i] == 1))))                  {
AKA_mark("lis===95###sois===2398###eois===2415###lif===12###soif===412###eoif===429###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");res.push_back(i);
}

else {
AKA_mark("lis===-95-###sois===-2352-###eois===-235227-###lif===-12-###soif===-###eoif===-393-###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");
}
        }
        
        AKA_mark("lis===98###sois===2446###eois===2457###lif===15###soif===460###eoif===471###ins===true###function===.\\p7\\0863-all-nodes-distance-k-in-binary-tree\\0863-all-nodes-distance-k-in-binary-tree.cpp\\Solution\\distanceK(TreeNode*,TreeNode*,int)");return res;
    }
    
};
#endif
