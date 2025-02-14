/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0508_MOST_FREQUENT_SUBTREE_SUM_0508_MOST_FREQUENT_SUBTREE_SUM_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0508_MOST_FREQUENT_SUBTREE_SUM_0508_MOST_FREQUENT_SUBTREE_SUM_CPP
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
{AKA_mark("Calling: .\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\TreeNode\\TreeNode()");AKA_fCall++;}
     /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(nullptr), right(nullptr) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
     /** Instrumented function TreeNode(int,TreeNode*,TreeNode*) */
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) /* << Aka begin of function  TreeNode(int x, TreeNode *left, TreeNode *right) >> */
{AKA_mark("Calling: .\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\TreeNode\\TreeNode(int,TreeNode*,TreeNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function findSubtreeSum(TreeNode*,int&) */
void findSubtreeSum(TreeNode* root, int &sum) /* << Aka begin of function void findSubtreeSum(TreeNode* root, int &sum) >> */
{AKA_mark("Calling: .\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findSubtreeSum(TreeNode*,int&)");AKA_fCall++;
        
        if(AKA_mark("lis===37###sois===971###eois===983###lif===2###soif===70###eoif===82###ifc===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findSubtreeSum(TreeNode*,int&)") && (AKA_mark("lis===37###sois===971###eois===983###lif===2###soif===70###eoif===82###isc===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findSubtreeSum(TreeNode*,int&)") && (root == NULL)))                            {
AKA_mark("lis===37###sois===1012###eois===1019###lif===2###soif===111###eoif===118###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findSubtreeSum(TreeNode*,int&)");return;
}

else {
AKA_mark("lis===-37-###sois===-971-###eois===-97112-###lif===-2-###soif===-###eoif===-82-###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findSubtreeSum(TreeNode*,int&)");
}
        
        AKA_mark("lis===39###sois===1039###eois===1056###lif===4###soif===138###eoif===155###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findSubtreeSum(TreeNode*,int&)");sum += root->val;
        
        AKA_mark("lis===41###sois===1076###eois===1108###lif===6###soif===175###eoif===207###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findSubtreeSum(TreeNode*,int&)");findSubtreeSum(root->left, sum);
        AKA_mark("lis===42###sois===1118###eois===1151###lif===7###soif===217###eoif===250###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findSubtreeSum(TreeNode*,int&)");findSubtreeSum(root->right, sum);
        
        AKA_mark("lis===44###sois===1171###eois===1178###lif===9###soif===270###eoif===277###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findSubtreeSum(TreeNode*,int&)");return;
    }
    
    /** Instrumented function dfs(TreeNode*,unordered_map<int,int>&) */
void dfs(TreeNode* root, unordered_map<int, int> &u) /* << Aka begin of function void dfs(TreeNode* root, unordered_map<int, int> &u) >> */
{AKA_mark("Calling: .\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)");AKA_fCall++;
        
        if(AKA_mark("lis===49###sois===1274###eois===1286###lif===2###soif===77###eoif===89###ifc===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)") && (AKA_mark("lis===49###sois===1274###eois===1286###lif===2###soif===77###eoif===89###isc===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)") && (root == NULL)))                            {
AKA_mark("lis===49###sois===1315###eois===1322###lif===2###soif===118###eoif===125###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)");return;
}

else {
AKA_mark("lis===-49-###sois===-1274-###eois===-127412-###lif===-2-###soif===-###eoif===-89-###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)");
}
        
        AKA_mark("lis===51###sois===1342###eois===1354###lif===4###soif===145###eoif===157###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)");int sum = 0;
        AKA_mark("lis===52###sois===1364###eois===1390###lif===5###soif===167###eoif===193###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)");findSubtreeSum(root, sum);
        
        AKA_mark("lis===54###sois===1410###eois===1419###lif===7###soif===213###eoif===222###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)");u[sum]++;
        
        AKA_mark("lis===56###sois===1439###eois===1458###lif===9###soif===242###eoif===261###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)");dfs(root->left, u);
        AKA_mark("lis===57###sois===1468###eois===1488###lif===10###soif===271###eoif===291###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)");dfs(root->right, u);
        
        AKA_mark("lis===59###sois===1508###eois===1515###lif===12###soif===311###eoif===318###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\dfs(TreeNode*,unordered_map<int,int>&)");return;
    }
    
    /** Instrumented function findFrequentTreeSum(TreeNode*) */
vector<int> findFrequentTreeSum(TreeNode* root) /* << Aka begin of function vector<int> findFrequentTreeSum(TreeNode* root) >> */
{AKA_mark("Calling: .\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");AKA_fCall++;
    
        AKA_mark("lis===64###sois===1599###eois===1615###lif===2###soif===65###eoif===81###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");vector<int> res;
        
        if(AKA_mark("lis===66###sois===1638###eois===1650###lif===4###soif===104###eoif===116###ifc===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)") && (AKA_mark("lis===66###sois===1638###eois===1650###lif===4###soif===104###eoif===116###isc===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)") && (root == NULL)))                            {
AKA_mark("lis===66###sois===1679###eois===1690###lif===4###soif===145###eoif===156###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");return res;
}

else {
AKA_mark("lis===-66-###sois===-1638-###eois===-163812-###lif===-4-###soif===-###eoif===-116-###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");
}
        
        // 1st arg - sum, 2nd arg - Freq
        AKA_mark("lis===69###sois===1752###eois===1778###lif===7###soif===218###eoif===244###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");unordered_map<int, int> u;      
        
        // Find subtree sum at each node
        AKA_mark("lis===72###sois===1846###eois===1859###lif===10###soif===312###eoif===325###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");dfs(root, u);
        
        AKA_mark("lis===74###sois===1879###eois===1896###lif===12###soif===345###eoif===362###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");int maxFreq = -1;
        
        // 1st arg - Freq, 2nd arg - vector of Sum
        AKA_mark("lis===77###sois===1968###eois===2003###lif===15###soif===434###eoif===469###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");unordered_map<int, vector<int>> mp;
        
        for(auto &x : u) {
AKA_mark("lis===79###sois===2027###eois===2034###lif===17###soif===493###eoif===500###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");
{
            
            if(AKA_mark("lis===81###sois===2072###eois===2091###lif===19###soif===538###eoif===557###ifc===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)") && (AKA_mark("lis===81###sois===2072###eois===2091###lif===19###soif===538###eoif===557###isc===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)") && (maxFreq <= x.second))) {
                AKA_mark("lis===82###sois===2112###eois===2131###lif===20###soif===578###eoif===597###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");maxFreq = x.second;
                AKA_mark("lis===83###sois===2149###eois===2180###lif===21###soif===615###eoif===646###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");mp[maxFreq].push_back(x.first);        
            }
else {
AKA_mark("lis===-81-###sois===-2072-###eois===-207219-###lif===-19-###soif===-###eoif===-557-###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");
}
        }}
AKA_mark("lis===79###sois===2027###eois===2034###lif===17###soif===493###eoif===500###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");

        
        AKA_mark("lis===87###sois===2234###eois===2252###lif===25###soif===700###eoif===718###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");res = mp[maxFreq];
        AKA_mark("lis===88###sois===2262###eois===2273###lif===26###soif===728###eoif===739###ins===true###function===.\\p6\\0508-most-frequent-subtree-sum\\0508-most-frequent-subtree-sum.cpp\\Solution\\findFrequentTreeSum(TreeNode*)");return res;
    }
    
};
#endif
