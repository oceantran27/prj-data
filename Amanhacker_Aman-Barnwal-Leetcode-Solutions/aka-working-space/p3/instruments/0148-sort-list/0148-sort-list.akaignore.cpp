/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0148_SORT_LIST_0148_SORT_LIST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0148_SORT_LIST_0148_SORT_LIST_CPP
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
{AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode()");AKA_fCall++;}
     /** Instrumented function ListNode(int) */
ListNode(int x) : val(x), next(nullptr) /* << Aka begin of function  ListNode(int x) >> */
{AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int)");AKA_fCall++;}
     /** Instrumented function ListNode(int,ListNode*) */
ListNode(int x, ListNode *next) : val(x), next(next) /* << Aka begin of function  ListNode(int x, ListNode *next) >> */
{AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\ListNode\\ListNode(int,ListNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    // With O(1) space complexity

    /** Instrumented function mergeList(ListNode*,ListNode*,ListNode**) */
void mergeList(ListNode* l1, ListNode* l2, ListNode** head) /* << Aka begin of function void mergeList(ListNode* l1, ListNode* l2, ListNode** head) >> */
{AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");AKA_fCall++;
        
        AKA_mark("lis===37###sois===845###eois===877###lif===2###soif===81###eoif===113###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");ListNode* ptr = new ListNode(0);
        AKA_mark("lis===38###sois===887###eois===907###lif===3###soif===123###eoif===143###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");ListNode* cur = ptr;

        int AKA_BLOCK_LOOP_919 = 0;
    while(AKA_mark("lis===40###sois===925###eois===949###lif===5###soif===161###eoif===185###ifc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)") && ((AKA_mark("lis===40###sois===925###eois===935###lif===5###soif===161###eoif===171###isc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)") && (l1 != NULL)) && (AKA_mark("lis===40###sois===939###eois===949###lif===5###soif===175###eoif===185###isc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)") && (l2 != NULL)))) {
        AKA_BLOCK_LOOP_919++;
        if (AKA_BLOCK_LOOP_919 > 1000) {
            //break;
        }

            if(AKA_mark("lis===42###sois===971###eois===989###lif===7###soif===207###eoif===225###ifc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)") && (AKA_mark("lis===42###sois===971###eois===989###lif===7###soif===207###eoif===225###isc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)") && (l1->val <= l2->val))) {
                AKA_mark("lis===43###sois===1010###eois===1025###lif===8###soif===246###eoif===261###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");cur->next = l1;
                AKA_mark("lis===44###sois===1043###eois===1057###lif===9###soif===279###eoif===293###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");l1 = l1->next;
            }
            else {
                AKA_mark("lis===47###sois===1110###eois===1125###lif===12###soif===346###eoif===361###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");cur->next = l2;
                AKA_mark("lis===48###sois===1143###eois===1157###lif===13###soif===379###eoif===393###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");l2 = l2->next;
            }

            AKA_mark("lis===51###sois===1188###eois===1204###lif===16###soif===424###eoif===440###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");cur = cur->next;
        }

        if(AKA_mark("lis===54###sois===1230###eois===1240###lif===19###soif===466###eoif===476###ifc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)") && (AKA_mark("lis===54###sois===1230###eois===1240###lif===19###soif===466###eoif===476###isc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)") && (l1 != NULL))) {

            AKA_mark("lis===56###sois===1259###eois===1274###lif===21###soif===495###eoif===510###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");cur->next = l1;
            AKA_mark("lis===57###sois===1288###eois===1302###lif===22###soif===524###eoif===538###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");l1 = l1->next;
        }
else {
AKA_mark("lis===-54-###sois===-1230-###eois===-123010-###lif===-19-###soif===-###eoif===-476-###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");
}

        if(AKA_mark("lis===60###sois===1328###eois===1338###lif===25###soif===564###eoif===574###ifc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)") && (AKA_mark("lis===60###sois===1328###eois===1338###lif===25###soif===564###eoif===574###isc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)") && (l2 != NULL))) {

            AKA_mark("lis===62###sois===1357###eois===1372###lif===27###soif===593###eoif===608###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");cur->next = l2;
            AKA_mark("lis===63###sois===1386###eois===1400###lif===28###soif===622###eoif===636###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");l2 = l2->next;
        }
else {
AKA_mark("lis===-60-###sois===-1328-###eois===-132810-###lif===-25-###soif===-###eoif===-574-###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");
}

        AKA_mark("lis===66###sois===1423###eois===1441###lif===31###soif===659###eoif===677###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");*head = ptr->next;
        AKA_mark("lis===67###sois===1451###eois===1458###lif===32###soif===687###eoif===694###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\mergeList(ListNode*,ListNode*,ListNode**)");return;
    }

    /** Instrumented function sortList(ListNode*) */
ListNode* sortList(ListNode* head) /* << Aka begin of function ListNode * sortList(ListNode* head) >> */
{AKA_mark("Calling: .\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");AKA_fCall++;

        AKA_mark("lis===72###sois===1521###eois===1546###lif===2###soif===48###eoif===73###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");ListNode* newHead = NULL;   

        if(AKA_mark("lis===74###sois===1564###eois===1598###lif===4###soif===91###eoif===125###ifc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)") && ((AKA_mark("lis===74###sois===1564###eois===1576###lif===4###soif===91###eoif===103###isc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)") && (head == NULL)) || (AKA_mark("lis===74###sois===1580###eois===1598###lif===4###soif===107###eoif===125###isc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)") && (head->next == NULL))))                     {
AKA_mark("lis===74###sois===1620###eois===1632###lif===4###soif===147###eoif===159###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");return head;
}

else {
AKA_mark("lis===-74-###sois===-1564-###eois===-156434-###lif===-4-###soif===-###eoif===-125-###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");
} 

        // Find the middle node of the Linked List
        AKA_mark("lis===77###sois===1697###eois===1740###lif===7###soif===224###eoif===267###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");ListNode* slow = head, *fast = head, *temp;

        int AKA_BLOCK_LOOP_1752 = 0;
    while(AKA_mark("lis===79###sois===1758###eois===1792###lif===9###soif===285###eoif===319###ifc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)") && ((AKA_mark("lis===79###sois===1758###eois===1770###lif===9###soif===285###eoif===297###isc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)") && (fast != NULL)) && (AKA_mark("lis===79###sois===1774###eois===1792###lif===9###soif===301###eoif===319###isc===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)") && (fast->next != NULL)))) {
        AKA_BLOCK_LOOP_1752++;
        if (AKA_BLOCK_LOOP_1752 > 1000) {
            //break;
        }
            AKA_mark("lis===80###sois===1809###eois===1821###lif===10###soif===336###eoif===348###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");temp = slow;
            AKA_mark("lis===81###sois===1835###eois===1853###lif===11###soif===362###eoif===380###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");slow = slow->next;
            AKA_mark("lis===82###sois===1867###eois===1891###lif===12###soif===394###eoif===418###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");fast = fast->next->next;
        }

        AKA_mark("lis===85###sois===1914###eois===1932###lif===15###soif===441###eoif===459###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");temp->next = NULL;      // End of 1st list

        // Here, slow is the middle node

        AKA_mark("lis===89###sois===2012###eois===2042###lif===19###soif===539###eoif===569###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");ListNode* l1 = sortList(head);    //    left half recursive call
        AKA_mark("lis===90###sois===2086###eois===2116###lif===20###soif===613###eoif===643###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");ListNode* l2 = sortList(slow);    //    right half recursive call

        AKA_mark("lis===92###sois===2163###eois===2191###lif===22###soif===690###eoif===718###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");mergeList(l1, l2, &newHead);

        AKA_mark("lis===94###sois===2203###eois===2218###lif===24###soif===730###eoif===745###ins===true###function===.\\p3\\0148-sort-list\\0148-sort-list.cpp\\Solution\\sortList(ListNode*)");return newHead;
    }

};
#endif
