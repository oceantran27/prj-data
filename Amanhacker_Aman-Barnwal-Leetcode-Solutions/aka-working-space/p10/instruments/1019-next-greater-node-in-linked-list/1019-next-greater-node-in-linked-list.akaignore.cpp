/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1019_NEXT_GREATER_NODE_IN_LINKED_LIST_1019_NEXT_GREATER_NODE_IN_LINKED_LIST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1019_NEXT_GREATER_NODE_IN_LINKED_LIST_1019_NEXT_GREATER_NODE_IN_LINKED_LIST_CPP
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
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 struct ListNode {
     int val;
     ListNode *next;
     /** Instrumented function ListNode() */
ListNode() : val(0), next(nullptr) /* << Aka begin of function  ListNode() >> */
{AKA_mark("Calling: .\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\ListNode\\ListNode()");AKA_fCall++;}
     /** Instrumented function ListNode(int) */
ListNode(int x) : val(x), next(nullptr) /* << Aka begin of function  ListNode(int x) >> */
{AKA_mark("Calling: .\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\ListNode\\ListNode(int)");AKA_fCall++;}
     /** Instrumented function ListNode(int,ListNode*) */
ListNode(int x, ListNode *next) : val(x), next(next) /* << Aka begin of function  ListNode(int x, ListNode *next) >> */
{AKA_mark("Calling: .\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\ListNode\\ListNode(int,ListNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function nextLargerNodes(ListNode*) */
vector<int> nextLargerNodes(ListNode* head) /* << Aka begin of function vector<int> nextLargerNodes(ListNode* head) >> */
{AKA_mark("Calling: .\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");AKA_fCall++;
    
        AKA_mark("lis===35###sois===788###eois===804###lif===2###soif===61###eoif===77###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");vector<int> res;
        AKA_mark("lis===36###sois===814###eois===836###lif===3###soif===87###eoif===109###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");ListNode* temp = head;
        
        AKA_mark("lis===38###sois===856###eois===870###lif===5###soif===129###eoif===143###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");vector<int> v;
        
        int AKA_BLOCK_LOOP_890 = 0;
    while(AKA_mark("lis===40###sois===896###eois===908###lif===7###soif===169###eoif===181###ifc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (AKA_mark("lis===40###sois===896###eois===908###lif===7###soif===169###eoif===181###isc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (temp != NULL))) {
        AKA_BLOCK_LOOP_890++;
        if (AKA_BLOCK_LOOP_890 > 1000) {
            //break;
        }
            AKA_mark("lis===41###sois===925###eois===948###lif===8###soif===198###eoif===221###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");v.push_back(temp->val);
            AKA_mark("lis===42###sois===962###eois===980###lif===9###soif===235###eoif===253###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");temp = temp->next;
        }
        
        // Now, find the next greater right of all elements of vector v
        AKA_mark("lis===46###sois===1084###eois===1097###lif===13###soif===357###eoif===370###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");stack<int> w;
        
        int AKA_BLOCK_LOOP_1117 = 0;
    AKA_mark("lis===48###sois===1121###eois===1138###lif===15###soif===394###eoif===411###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");
for(int i=v.size()-1; AKA_mark("lis===48###sois===1139###eois===1143###lif===15###soif===412###eoif===416###ifc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (AKA_mark("lis===48###sois===1139###eois===1143###lif===15###soif===412###eoif===416###isc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (i>=0)); ({AKA_mark("lis===48###sois===1145###eois===1148###lif===15###soif===418###eoif===421###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");i--;})) {
        AKA_BLOCK_LOOP_1117++;
        if (AKA_BLOCK_LOOP_1117 > 1000) {
            //break;
        }
            
            if(AKA_mark("lis===50###sois===1182###eois===1199###lif===17###soif===455###eoif===472###ifc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (AKA_mark("lis===50###sois===1182###eois===1199###lif===17###soif===455###eoif===472###isc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (w.empty() == true)))                                       {
AKA_mark("lis===50###sois===1239###eois===1256###lif===17###soif===512###eoif===529###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");res.push_back(0);
}

            else {
if(AKA_mark("lis===51###sois===1278###eois===1292###lif===18###soif===551###eoif===565###ifc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (AKA_mark("lis===51###sois===1278###eois===1292###lif===18###soif===551###eoif===565###isc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (w.top() > v[i])))                                     {
AKA_mark("lis===51###sois===1330###eois===1353###lif===18###soif===603###eoif===626###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");res.push_back(w.top());
}

            else {
if(AKA_mark("lis===52###sois===1375###eois===1390###lif===19###soif===648###eoif===663###ifc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (AKA_mark("lis===52###sois===1375###eois===1390###lif===19###soif===648###eoif===663###isc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (w.top() <= v[i]))) {

                int AKA_BLOCK_LOOP_1413 = 0;
    while(AKA_mark("lis===54###sois===1419###eois===1456###lif===21###soif===692###eoif===729###ifc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && ((AKA_mark("lis===54###sois===1419###eois===1437###lif===21###soif===692###eoif===710###isc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (w.empty() == false)) && (AKA_mark("lis===54###sois===1441###eois===1456###lif===21###soif===714###eoif===729###isc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (w.top() <= v[i]))))            {
AKA_mark("lis===54###sois===1469###eois===1477###lif===21###soif===742###eoif===750###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");w.pop();
}

                
                if(AKA_mark("lis===56###sois===1516###eois===1533###lif===23###soif===789###eoif===806###ifc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (AKA_mark("lis===56###sois===1516###eois===1533###lif===23###soif===789###eoif===806###isc===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)") && (w.empty() == true)))                                   {
AKA_mark("lis===56###sois===1569###eois===1586###lif===23###soif===842###eoif===859###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");res.push_back(0);
}

                else                                                    {
AKA_mark("lis===57###sois===1660###eois===1683###lif===24###soif===933###eoif===956###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");res.push_back(w.top());
}

            }
else {
AKA_mark("lis===-52-###sois===-1375-###eois===-137515-###lif===-19-###soif===-###eoif===-663-###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");
}
}

}

            
            AKA_mark("lis===60###sois===1726###eois===1739###lif===27###soif===999###eoif===1012###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");w.push(v[i]);
        }
        
        AKA_mark("lis===63###sois===1770###eois===1802###lif===30###soif===1043###eoif===1075###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");reverse(res.begin(), res.end());
        AKA_mark("lis===64###sois===1812###eois===1823###lif===31###soif===1085###eoif===1096###ins===true###function===.\\p10\\1019-next-greater-node-in-linked-list\\1019-next-greater-node-in-linked-list.cpp\\Solution\\nextLargerNodes(ListNode*)");return res;
    }
    
};
#endif
