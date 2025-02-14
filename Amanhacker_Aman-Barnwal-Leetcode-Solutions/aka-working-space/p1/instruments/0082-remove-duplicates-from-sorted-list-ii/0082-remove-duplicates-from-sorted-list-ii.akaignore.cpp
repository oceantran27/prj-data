/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0082_REMOVE_DUPLICATES_FROM_SORTED_LIST_II_0082_REMOVE_DUPLICATES_FROM_SORTED_LIST_II_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0082_REMOVE_DUPLICATES_FROM_SORTED_LIST_II_0082_REMOVE_DUPLICATES_FROM_SORTED_LIST_II_CPP
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
{AKA_mark("Calling: .\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\ListNode\\ListNode()");AKA_fCall++;}
     /** Instrumented function ListNode(int) */
ListNode(int x) : val(x), next(nullptr) /* << Aka begin of function  ListNode(int x) >> */
{AKA_mark("Calling: .\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\ListNode\\ListNode(int)");AKA_fCall++;}
     /** Instrumented function ListNode(int,ListNode*) */
ListNode(int x, ListNode *next) : val(x), next(next) /* << Aka begin of function  ListNode(int x, ListNode *next) >> */
{AKA_mark("Calling: .\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\ListNode\\ListNode(int,ListNode*)");AKA_fCall++;}
 };


class Solution {
public:
public:
    
    // Using Sentinel Head
    
    /** Instrumented function deleteDuplicates(ListNode*) */
ListNode* deleteDuplicates(ListNode* head) /* << Aka begin of function ListNode * deleteDuplicates(ListNode* head) >> */
{AKA_mark("Calling: .\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");AKA_fCall++;

        if(AKA_mark("lis===39###sois===824###eois===836###lif===2###soif===59###eoif===71###ifc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && (AKA_mark("lis===39###sois===824###eois===836###lif===2###soif===59###eoif===71###isc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && (head == NULL)))                            {
AKA_mark("lis===39###sois===865###eois===877###lif===2###soif===100###eoif===112###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");return NULL;
}

else {
AKA_mark("lis===-39-###sois===-824-###eois===-82412-###lif===-2-###soif===-###eoif===-71-###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");
}

        AKA_mark("lis===41###sois===889###eois===926###lif===4###soif===124###eoif===161###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");ListNode* sentinel = new ListNode(0);
        AKA_mark("lis===42###sois===936###eois===958###lif===5###soif===171###eoif===193###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");sentinel->next = head;

        AKA_mark("lis===44###sois===970###eois===1010###lif===7###soif===205###eoif===245###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");ListNode* temp = head, *prev = sentinel;

        int AKA_BLOCK_LOOP_1022 = 0;
    while(AKA_mark("lis===46###sois===1028###eois===1040###lif===9###soif===263###eoif===275###ifc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && (AKA_mark("lis===46###sois===1028###eois===1040###lif===9###soif===263###eoif===275###isc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && (temp != NULL))) {
        AKA_BLOCK_LOOP_1022++;
        if (AKA_BLOCK_LOOP_1022 > 1000) {
            //break;
        }
            
            if(AKA_mark("lis===48###sois===1074###eois===1124###lif===11###soif===309###eoif===359###ifc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && ((AKA_mark("lis===48###sois===1074###eois===1092###lif===11###soif===309###eoif===327###isc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && (temp->next != NULL)) && (AKA_mark("lis===48###sois===1096###eois===1124###lif===11###soif===331###eoif===359###isc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && (temp->val == temp->next->val)))) {
                
                // Move till the end of duplicates sublist
                int AKA_BLOCK_LOOP_1223 = 0;
    while(AKA_mark("lis===51###sois===1229###eois===1279###lif===14###soif===464###eoif===514###ifc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && ((AKA_mark("lis===51###sois===1229###eois===1247###lif===14###soif===464###eoif===482###isc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && (temp->next != NULL)) && (AKA_mark("lis===51###sois===1251###eois===1279###lif===14###soif===486###eoif===514###isc===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)") && (temp->val == temp->next->val)))) {
        AKA_BLOCK_LOOP_1223++;
        if (AKA_BLOCK_LOOP_1223 > 1000) {
            //break;
        }
                    AKA_mark("lis===52###sois===1304###eois===1322###lif===15###soif===539###eoif===557###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");temp = temp->next;
                }
                
                // Skip all duplicates
                AKA_mark("lis===56###sois===1417###eois===1441###lif===19###soif===652###eoif===676###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");prev->next = temp->next;
            }
            else {
                AKA_mark("lis===59###sois===1494###eois===1512###lif===22###soif===729###eoif===747###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");prev = prev->next;
            }   

            AKA_mark("lis===62###sois===1546###eois===1564###lif===25###soif===781###eoif===799###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");temp = temp->next;
        }

        AKA_mark("lis===65###sois===1587###eois===1609###lif===28###soif===822###eoif===844###ins===true###function===.\\p1\\0082-remove-duplicates-from-sorted-list-ii\\0082-remove-duplicates-from-sorted-list-ii.cpp\\Solution\\deleteDuplicates(ListNode*)");return sentinel->next;
    }

};
#endif
