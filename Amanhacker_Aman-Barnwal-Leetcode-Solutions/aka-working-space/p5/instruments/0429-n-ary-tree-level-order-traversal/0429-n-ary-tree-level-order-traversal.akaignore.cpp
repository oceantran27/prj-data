/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_0429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_0429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_CPP
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

class Node {
public:
public:
    int val;
    vector<Node*> children;

    /** Instrumented function Node() */
Node() /* << Aka begin of function  Node() >> */
{AKA_mark("Calling: .\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Node\\Node()");AKA_fCall++;}

    /** Instrumented function Node(int) */
Node(int _val) /* << Aka begin of function  Node(int _val) >> */
{AKA_mark("Calling: .\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Node\\Node(int)");AKA_fCall++;
        AKA_mark("lis===19###sois===304###eois===315###lif===1###soif===26###eoif===37###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Node\\Node(int)");val = _val;
    }

    /** Instrumented function Node(int,vector<Node*>) */
Node(int _val, vector<Node*> _children) /* << Aka begin of function  Node(int _val, vector<Node*> _children) >> */
{AKA_mark("Calling: .\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Node\\Node(int,vector<Node*>)");AKA_fCall++;
        AKA_mark("lis===23###sois===381###eois===392###lif===1###soif===51###eoif===62###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Node\\Node(int,vector<Node*>)");val = _val;
        AKA_mark("lis===24###sois===402###eois===423###lif===2###soif===72###eoif===93###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Node\\Node(int,vector<Node*>)");children = _children;
    }
};

class Solution {
public:
public:

    /** Instrumented function bfs(Node*,vector<vector<int>>&) */
void bfs(Node* root, vector<vector<int>> &res) /* << Aka begin of function void bfs(Node* root, vector<vector<int>> &res) >> */
{AKA_mark("Calling: .\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");AKA_fCall++;
        
        if(AKA_mark("lis===33###sois===542###eois===554###lif===2###soif===71###eoif===83###ifc===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)") && (AKA_mark("lis===33###sois===542###eois===554###lif===2###soif===71###eoif===83###isc===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)") && (root == NULL)))                            {
AKA_mark("lis===33###sois===583###eois===590###lif===2###soif===112###eoif===119###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");return;
}

else {
AKA_mark("lis===-33-###sois===-542-###eois===-54212-###lif===-2-###soif===-###eoif===-83-###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");
}
        
        AKA_mark("lis===35###sois===610###eois===625###lif===4###soif===139###eoif===154###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");queue<Node*> q;
        AKA_mark("lis===36###sois===635###eois===650###lif===5###soif===164###eoif===179###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");q.push({root});
        
        int AKA_BLOCK_LOOP_670 = 0;
    while(AKA_mark("lis===38###sois===676###eois===694###lif===7###soif===205###eoif===223###ifc===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)") && (AKA_mark("lis===38###sois===676###eois===694###lif===7###soif===205###eoif===223###isc===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)") && (q.empty() == false))) {
        AKA_BLOCK_LOOP_670++;
        if (AKA_BLOCK_LOOP_670 > 1000) {
            //break;
        }
            
            AKA_mark("lis===40###sois===725###eois===742###lif===9###soif===254###eoif===271###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");int n = q.size();
            AKA_mark("lis===41###sois===756###eois===773###lif===10###soif===285###eoif===302###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");vector<int> path;
            
            int AKA_BLOCK_LOOP_801 = 0;
    while(AKA_mark("lis===43###sois===807###eois===810###lif===12###soif===336###eoif===339###ifc===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)") && (AKA_mark("lis===43###sois===807###eois===810###lif===12###soif===336###eoif===339###isc===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)") && (n--))) {
        AKA_BLOCK_LOOP_801++;
        if (AKA_BLOCK_LOOP_801 > 1000) {
            //break;
        }
                
                AKA_mark("lis===45###sois===849###eois===872###lif===14###soif===378###eoif===401###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");Node* temp = q.front();
                AKA_mark("lis===46###sois===890###eois===898###lif===15###soif===419###eoif===427###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");q.pop();
            
                AKA_mark("lis===48###sois===930###eois===956###lif===17###soif===459###eoif===485###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");path.push_back(temp->val);
                
                AKA_mark("lis===50###sois===992###eois===1026###lif===19###soif===521###eoif===555###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");vector<Node*> ch = temp->children;
                
                for(auto &x : ch) {
AKA_mark("lis===52###sois===1066###eois===1073###lif===21###soif===595###eoif===602###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");
{
                    AKA_mark("lis===53###sois===1103###eois===1113###lif===22###soif===632###eoif===642###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");q.push(x);
                }}
AKA_mark("lis===52###sois===1066###eois===1073###lif===21###soif===595###eoif===602###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");

            }
            
            AKA_mark("lis===57###sois===1175###eois===1195###lif===26###soif===704###eoif===724###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");res.push_back(path);
            AKA_mark("lis===58###sois===1209###eois===1222###lif===27###soif===738###eoif===751###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");path.clear();
        }
        
        AKA_mark("lis===61###sois===1253###eois===1260###lif===30###soif===782###eoif===789###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\bfs(Node*,vector<vector<int>>&)");return;
    }
    
    /** Instrumented function levelOrder(Node*) */
vector<vector<int>> levelOrder(Node* root) /* << Aka begin of function vector<vector<int>> levelOrder(Node* root) >> */
{AKA_mark("Calling: .\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\levelOrder(Node*)");AKA_fCall++;
    
        AKA_mark("lis===66###sois===1339###eois===1363###lif===2###soif===60###eoif===84###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\levelOrder(Node*)");vector<vector<int>> res;
        
        if(AKA_mark("lis===68###sois===1386###eois===1398###lif===4###soif===107###eoif===119###ifc===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\levelOrder(Node*)") && (AKA_mark("lis===68###sois===1386###eois===1398###lif===4###soif===107###eoif===119###isc===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\levelOrder(Node*)") && (root == NULL)))                            {
AKA_mark("lis===68###sois===1427###eois===1438###lif===4###soif===148###eoif===159###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\levelOrder(Node*)");return res;
}

else {
AKA_mark("lis===-68-###sois===-1386-###eois===-138612-###lif===-4-###soif===-###eoif===-119-###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\levelOrder(Node*)");
}
        
        AKA_mark("lis===70###sois===1458###eois===1473###lif===6###soif===179###eoif===194###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\levelOrder(Node*)");bfs(root, res);
        AKA_mark("lis===71###sois===1483###eois===1494###lif===7###soif===204###eoif===215###ins===true###function===.\\p5\\0429-n-ary-tree-level-order-traversal\\0429-n-ary-tree-level-order-traversal.cpp\\Solution\\levelOrder(Node*)");return res;
    }
    
};
#endif
