/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0086_PARTITION_LIST_0086_PARTITION_LIST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0086_PARTITION_LIST_0086_PARTITION_LIST_CPP
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
{AKA_mark("Calling: .\\p2\\0086-partition-list\\0086-partition-list.cpp\\ListNode\\ListNode()");AKA_fCall++;}
     /** Instrumented function ListNode(int) */
ListNode(int x) : val(x), next(nullptr) /* << Aka begin of function  ListNode(int x) >> */
{AKA_mark("Calling: .\\p2\\0086-partition-list\\0086-partition-list.cpp\\ListNode\\ListNode(int)");AKA_fCall++;}
     /** Instrumented function ListNode(int,ListNode*) */
ListNode(int x, ListNode *next) : val(x), next(next) /* << Aka begin of function  ListNode(int x, ListNode *next) >> */
{AKA_mark("Calling: .\\p2\\0086-partition-list\\0086-partition-list.cpp\\ListNode\\ListNode(int,ListNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function partition(ListNode*,int) */
ListNode* partition(ListNode* head, int x) /* << Aka begin of function ListNode * partition(ListNode* head, int x) >> */
{AKA_mark("Calling: .\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");AKA_fCall++;
        
        // Create two nodes with garbage vales.

        // small -> to have nodes with value less than key
        // large -> to have nodes with value greater than or equal to key.

        AKA_mark("lis===40###sois===980###eois===1015###lif===7###soif===253###eoif===288###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");ListNode* small = new ListNode(-1);
        AKA_mark("lis===41###sois===1025###eois===1060###lif===8###soif===298###eoif===333###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");ListNode* large = new ListNode(-1);

        // Now visit each node :

        // if node smaller -> add to small and small -> next = NULL
        // else -> add to large and large -> next = NULL

        AKA_mark("lis===48###sois===1237###eois===1285###lif===15###soif===510###eoif===558###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");ListNode *smallHead = small, *largeHead = large;

        int AKA_BLOCK_LOOP_1297 = 0;
    while(AKA_mark("lis===50###sois===1303###eois===1315###lif===17###soif===576###eoif===588###ifc===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)") && (AKA_mark("lis===50###sois===1303###eois===1315###lif===17###soif===576###eoif===588###isc===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)") && (head != NULL))) {
        AKA_BLOCK_LOOP_1297++;
        if (AKA_BLOCK_LOOP_1297 > 1000) {
            //break;
        }

            if(AKA_mark("lis===52###sois===1337###eois===1350###lif===19###soif===610###eoif===623###ifc===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)") && (AKA_mark("lis===52###sois===1337###eois===1350###lif===19###soif===610###eoif===623###isc===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)") && (head->val < x))) {
                
                AKA_mark("lis===54###sois===1389###eois===1408###lif===21###soif===662###eoif===681###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");small->next = head;
                AKA_mark("lis===55###sois===1426###eois===1446###lif===22###soif===699###eoif===719###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");small = small->next;
                
                AKA_mark("lis===57###sois===1482###eois===1500###lif===24###soif===755###eoif===773###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");head = head->next;
                AKA_mark("lis===58###sois===1518###eois===1537###lif===25###soif===791###eoif===810###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");small->next = NULL;
            }

            else {

                AKA_mark("lis===63###sois===1594###eois===1613###lif===30###soif===867###eoif===886###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");large->next = head;
                AKA_mark("lis===64###sois===1631###eois===1651###lif===31###soif===904###eoif===924###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");large = large->next;
                
                AKA_mark("lis===66###sois===1687###eois===1705###lif===33###soif===960###eoif===978###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");head = head->next;
                AKA_mark("lis===67###sois===1723###eois===1742###lif===34###soif===996###eoif===1015###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");large->next = NULL;
            }
        }

        // At end, Join two Linked Lists [Remember the garbage nodes]

        // Make small->next = largeHead -> next : we appending largeHead -> next because the first node is garbage.

        AKA_mark("lis===75###sois===1972###eois===2002###lif===42###soif===1245###eoif===1275###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");small->next = largeHead->next;
        AKA_mark("lis===76###sois===2012###eois===2035###lif===43###soif===1285###eoif===1308###ins===true###function===.\\p2\\0086-partition-list\\0086-partition-list.cpp\\Solution\\partition(ListNode*,int)");return smallHead->next;
    }
    
};
#endif
