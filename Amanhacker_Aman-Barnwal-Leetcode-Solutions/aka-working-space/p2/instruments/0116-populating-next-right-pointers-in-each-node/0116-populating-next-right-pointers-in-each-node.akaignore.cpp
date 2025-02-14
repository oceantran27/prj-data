/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0116_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_0116_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0116_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_0116_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_CPP
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
    Node* left;
    Node* right;
    Node* next;

    /** Instrumented function Node() */
Node() : val(0), left(NULL), right(NULL), next(NULL) /* << Aka begin of function  Node() >> */
{AKA_mark("Calling: .\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Node\\Node()");AKA_fCall++;}

    /** Instrumented function Node(int) */
Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) /* << Aka begin of function  Node(int _val) >> */
{AKA_mark("Calling: .\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Node\\Node(int)");AKA_fCall++;}

    /** Instrumented function Node(int,Node*,Node*,Node*) */
Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) /* << Aka begin of function  Node(int _val, Node* _left, Node* _right, Node* _next) >> */
{AKA_mark("Calling: .\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Node\\Node(int,Node*,Node*,Node*)");AKA_fCall++;}
};

class Solution {
public:
public:
    
    /** Instrumented function bfs(Node*&) */
void bfs(Node* &root) /* << Aka begin of function void bfs(Node* &root) >> */
{AKA_mark("Calling: .\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");AKA_fCall++;
        
        if(AKA_mark("lis===31###sois===631###eois===643###lif===2###soif===46###eoif===58###ifc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (AKA_mark("lis===31###sois===631###eois===643###lif===2###soif===46###eoif===58###isc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (root == NULL)))                            {
AKA_mark("lis===31###sois===672###eois===679###lif===2###soif===87###eoif===94###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");return;
}

else {
AKA_mark("lis===-31-###sois===-631-###eois===-63112-###lif===-2-###soif===-###eoif===-58-###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");
}
        
        AKA_mark("lis===33###sois===699###eois===714###lif===4###soif===114###eoif===129###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");queue<Node*> q;
        AKA_mark("lis===34###sois===724###eois===737###lif===5###soif===139###eoif===152###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");q.push(root);
        
        int AKA_BLOCK_LOOP_757 = 0;
    while(AKA_mark("lis===36###sois===763###eois===781###lif===7###soif===178###eoif===196###ifc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (AKA_mark("lis===36###sois===763###eois===781###lif===7###soif===178###eoif===196###isc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (q.empty() == false))) {
        AKA_BLOCK_LOOP_757++;
        if (AKA_BLOCK_LOOP_757 > 1000) {
            //break;
        }
            
            AKA_mark("lis===38###sois===812###eois===829###lif===9###soif===227###eoif===244###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");int n = q.size();
            
            // Print all nodes at a level
            AKA_mark("lis===41###sois===900###eois===919###lif===12###soif===315###eoif===334###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");vector<Node*> path;
            
            int AKA_BLOCK_LOOP_947 = 0;
    while(AKA_mark("lis===43###sois===953###eois===956###lif===14###soif===368###eoif===371###ifc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (AKA_mark("lis===43###sois===953###eois===956###lif===14###soif===368###eoif===371###isc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (n--))) {
        AKA_BLOCK_LOOP_947++;
        if (AKA_BLOCK_LOOP_947 > 1000) {
            //break;
        }
                
                AKA_mark("lis===45###sois===995###eois===1018###lif===16###soif===410###eoif===433###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");Node* temp = q.front();
                AKA_mark("lis===46###sois===1036###eois===1044###lif===17###soif===451###eoif===459###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");q.pop();
            
                AKA_mark("lis===48###sois===1076###eois===1097###lif===19###soif===491###eoif===512###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");path.push_back(temp);
                
                if(AKA_mark("lis===50###sois===1136###eois===1154###lif===21###soif===551###eoif===569###ifc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (AKA_mark("lis===50###sois===1136###eois===1154###lif===21###soif===551###eoif===569###isc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (temp->left != NULL)))              {
AKA_mark("lis===50###sois===1169###eois===1188###lif===21###soif===584###eoif===603###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");q.push(temp->left);
}

else {
AKA_mark("lis===-50-###sois===-1136-###eois===-113618-###lif===-21-###soif===-###eoif===-569-###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");
}
                if(AKA_mark("lis===51###sois===1209###eois===1228###lif===22###soif===624###eoif===643###ifc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (AKA_mark("lis===51###sois===1209###eois===1228###lif===22###soif===624###eoif===643###isc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (temp->right != NULL)))             {
AKA_mark("lis===51###sois===1242###eois===1262###lif===22###soif===657###eoif===677###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");q.push(temp->right);
}

else {
AKA_mark("lis===-51-###sois===-1209-###eois===-120919-###lif===-22-###soif===-###eoif===-643-###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");
}
            }
            
            AKA_mark("lis===54###sois===1305###eois===1325###lif===25###soif===720###eoif===740###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");int k = path.size();
            
            int AKA_BLOCK_LOOP_1353 = 0;
    AKA_mark("lis===56###sois===1357###eois===1365###lif===27###soif===772###eoif===780###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");
for(int i=1; AKA_mark("lis===56###sois===1366###eois===1369###lif===27###soif===781###eoif===784###ifc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (AKA_mark("lis===56###sois===1366###eois===1369###lif===27###soif===781###eoif===784###isc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)") && (i<k)); ({AKA_mark("lis===56###sois===1371###eois===1374###lif===27###soif===786###eoif===789###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");i++;})) {
        AKA_BLOCK_LOOP_1353++;
        if (AKA_BLOCK_LOOP_1353 > 1000) {
            //break;
        }
                AKA_mark("lis===57###sois===1395###eois===1421###lif===28###soif===810###eoif===836###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");path[i-1]->next = path[i];
            }
            
            AKA_mark("lis===60###sois===1464###eois===1487###lif===31###soif===879###eoif===902###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");path[k-1]->next = NULL;
            
            AKA_mark("lis===62###sois===1515###eois===1528###lif===33###soif===930###eoif===943###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");path.clear();
        }
        
        AKA_mark("lis===65###sois===1559###eois===1566###lif===36###soif===974###eoif===981###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\bfs(Node*&)");return;
    }
    
    /** Instrumented function connect(Node*) */
Node* connect(Node* root) /* << Aka begin of function Node * connect(Node* root) >> */
{AKA_mark("Calling: .\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\connect(Node*)");AKA_fCall++;
    
        if(AKA_mark("lis===70###sois===1631###eois===1643###lif===2###soif===46###eoif===58###ifc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\connect(Node*)") && (AKA_mark("lis===70###sois===1631###eois===1643###lif===2###soif===46###eoif===58###isc===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\connect(Node*)") && (root == NULL)))                        {
AKA_mark("lis===70###sois===1668###eois===1680###lif===2###soif===83###eoif===95###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\connect(Node*)");return NULL;
}

else {
AKA_mark("lis===-70-###sois===-1631-###eois===-163112-###lif===-2-###soif===-###eoif===-58-###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\connect(Node*)");
}
        
        AKA_mark("lis===72###sois===1700###eois===1710###lif===4###soif===115###eoif===125###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\connect(Node*)");bfs(root);
        AKA_mark("lis===73###sois===1720###eois===1732###lif===5###soif===135###eoif===147###ins===true###function===.\\p2\\0116-populating-next-right-pointers-in-each-node\\0116-populating-next-right-pointers-in-each-node.cpp\\Solution\\connect(Node*)");return root;
    }
    
};
#endif
