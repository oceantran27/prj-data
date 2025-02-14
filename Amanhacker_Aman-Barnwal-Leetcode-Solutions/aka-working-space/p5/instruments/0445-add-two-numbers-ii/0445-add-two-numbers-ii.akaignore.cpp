/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0445_ADD_TWO_NUMBERS_II_0445_ADD_TWO_NUMBERS_II_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0445_ADD_TWO_NUMBERS_II_0445_ADD_TWO_NUMBERS_II_CPP
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
{AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode()");AKA_fCall++;}
     /** Instrumented function ListNode(int) */
ListNode(int x) : val(x), next(nullptr) /* << Aka begin of function  ListNode(int x) >> */
{AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int)");AKA_fCall++;}
     /** Instrumented function ListNode(int,ListNode*) */
ListNode(int x, ListNode *next) : val(x), next(next) /* << Aka begin of function  ListNode(int x, ListNode *next) >> */
{AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\ListNode\\ListNode(int,ListNode*)");AKA_fCall++;}
 };

class Solution {
public:
public:
    
    /** Instrumented function addNodeAtBeginning(ListNode**,int) */
void addNodeAtBeginning(ListNode** head, int val) /* << Aka begin of function void addNodeAtBeginning(ListNode** head, int val) >> */
{AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)");AKA_fCall++;

        AKA_mark("lis===36###sois===792###eois===828###lif===2###soif===63###eoif===99###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)");ListNode* first = new ListNode(val);

        if(AKA_mark("lis===38###sois===843###eois===856###lif===4###soif===114###eoif===127###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)") && (AKA_mark("lis===38###sois===843###eois===856###lif===4###soif===114###eoif===127###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)") && (*head == NULL))) {
            AKA_mark("lis===39###sois===873###eois===887###lif===5###soif===144###eoif===158###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)");*head = first;
            AKA_mark("lis===40###sois===901###eois===908###lif===6###soif===172###eoif===179###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)");return;
        }
else {
AKA_mark("lis===-38-###sois===-843-###eois===-84313-###lif===-4-###soif===-###eoif===-127-###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)");
}

        AKA_mark("lis===43###sois===931###eois===951###lif===9###soif===202###eoif===222###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)");first->next = *head;
        AKA_mark("lis===44###sois===961###eois===975###lif===10###soif===232###eoif===246###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)");*head = first;

        AKA_mark("lis===46###sois===987###eois===994###lif===12###soif===258###eoif===265###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addNodeAtBeginning(ListNode**,int)");return;
    }

    /** Instrumented function addTwoNumbers(ListNode*,ListNode*) */
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) /* << Aka begin of function ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) >> */
{AKA_mark("Calling: .\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");AKA_fCall++;

        AKA_mark("lis===51###sois===1074###eois===1096###lif===2###soif===65###eoif===87###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");ListNode* head = NULL;
        
        // Reverse both Linked Lists

        AKA_mark("lis===55###sois===1156###eois===1188###lif===6###soif===147###eoif===179###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");ListNode* cur1 = l1, *cur2 = l2;
        AKA_mark("lis===56###sois===1198###eois===1234###lif===7###soif===189###eoif===225###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");ListNode* prev = NULL, *next = NULL;

        int AKA_BLOCK_LOOP_1246 = 0;
    while(AKA_mark("lis===58###sois===1252###eois===1264###lif===9###soif===243###eoif===255###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===58###sois===1252###eois===1264###lif===9###soif===243###eoif===255###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (cur1 != NULL))) {
        AKA_BLOCK_LOOP_1246++;
        if (AKA_BLOCK_LOOP_1246 > 1000) {
            //break;
        }
            
            AKA_mark("lis===60###sois===1295###eois===1313###lif===11###soif===286###eoif===304###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");next = cur1->next;
            AKA_mark("lis===61###sois===1327###eois===1345###lif===12###soif===318###eoif===336###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cur1->next = prev;

            AKA_mark("lis===63###sois===1361###eois===1373###lif===14###soif===352###eoif===364###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");prev = cur1;
            AKA_mark("lis===64###sois===1387###eois===1399###lif===15###soif===378###eoif===390###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cur1 = next;
        }

        AKA_mark("lis===67###sois===1422###eois===1432###lif===18###soif===413###eoif===423###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");l1 = prev;

        AKA_mark("lis===69###sois===1444###eois===1456###lif===20###soif===435###eoif===447###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");prev = NULL;
        AKA_mark("lis===70###sois===1466###eois===1478###lif===21###soif===457###eoif===469###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");next = NULL;

        int AKA_BLOCK_LOOP_1490 = 0;
    while(AKA_mark("lis===72###sois===1496###eois===1508###lif===23###soif===487###eoif===499###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===72###sois===1496###eois===1508###lif===23###soif===487###eoif===499###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (cur2 != NULL))) {
        AKA_BLOCK_LOOP_1490++;
        if (AKA_BLOCK_LOOP_1490 > 1000) {
            //break;
        }
            
            AKA_mark("lis===74###sois===1539###eois===1557###lif===25###soif===530###eoif===548###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");next = cur2->next;
            AKA_mark("lis===75###sois===1571###eois===1589###lif===26###soif===562###eoif===580###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cur2->next = prev;

            AKA_mark("lis===77###sois===1605###eois===1617###lif===28###soif===596###eoif===608###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");prev = cur2;
            AKA_mark("lis===78###sois===1631###eois===1643###lif===29###soif===622###eoif===634###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cur2 = next;
        }

        AKA_mark("lis===81###sois===1666###eois===1676###lif===32###soif===657###eoif===667###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");l2 = prev;

        // Now, add two linked Lists
        AKA_mark("lis===84###sois===1726###eois===1740###lif===35###soif===717###eoif===731###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");int carry = 0;

        int AKA_BLOCK_LOOP_1752 = 0;
    while(AKA_mark("lis===86###sois===1758###eois===1782###lif===37###soif===749###eoif===773###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && ((AKA_mark("lis===86###sois===1758###eois===1768###lif===37###soif===749###eoif===759###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (l1 != NULL)) && (AKA_mark("lis===86###sois===1772###eois===1782###lif===37###soif===763###eoif===773###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (l2 != NULL)))) {
        AKA_BLOCK_LOOP_1752++;
        if (AKA_BLOCK_LOOP_1752 > 1000) {
            //break;
        }
            
            AKA_mark("lis===88###sois===1813###eois===1849###lif===39###soif===804###eoif===840###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");int sum = l1->val + l2->val + carry;

            if(AKA_mark("lis===90###sois===1868###eois===1876###lif===41###soif===859###eoif===867###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===90###sois===1868###eois===1876###lif===41###soif===859###eoif===867###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (sum <= 9))) {
                AKA_mark("lis===91###sois===1897###eois===1928###lif===42###soif===888###eoif===919###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");addNodeAtBeginning(&head, sum);
                AKA_mark("lis===92###sois===1946###eois===1965###lif===43###soif===937###eoif===956###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cout << sum << " ";
                AKA_mark("lis===93###sois===1983###eois===1993###lif===44###soif===974###eoif===984###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");carry = 0;
            }

            else {
                AKA_mark("lis===97###sois===2048###eois===2084###lif===48###soif===1039###eoif===1075###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");addNodeAtBeginning(&head, sum % 10);
                AKA_mark("lis===98###sois===2102###eois===2126###lif===49###soif===1093###eoif===1117###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cout << sum % 10 << " ";
                AKA_mark("lis===99###sois===2144###eois===2161###lif===50###soif===1135###eoif===1152###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");carry = sum / 10;
            }

            AKA_mark("lis===102###sois===2192###eois===2206###lif===53###soif===1183###eoif===1197###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");l1 = l1->next;
            AKA_mark("lis===103###sois===2220###eois===2234###lif===54###soif===1211###eoif===1225###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");l2 = l2->next;
        }

        int AKA_BLOCK_LOOP_2257 = 0;
    while(AKA_mark("lis===106###sois===2263###eois===2273###lif===57###soif===1254###eoif===1264###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===106###sois===2263###eois===2273###lif===57###soif===1254###eoif===1264###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (l1 != NULL))) {
        AKA_BLOCK_LOOP_2257++;
        if (AKA_BLOCK_LOOP_2257 > 1000) {
            //break;
        }
            
            AKA_mark("lis===108###sois===2304###eois===2330###lif===59###soif===1295###eoif===1321###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");int sum = l1->val + carry;

            if(AKA_mark("lis===110###sois===2349###eois===2357###lif===61###soif===1340###eoif===1348###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===110###sois===2349###eois===2357###lif===61###soif===1340###eoif===1348###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (sum <= 9))) {
                AKA_mark("lis===111###sois===2378###eois===2409###lif===62###soif===1369###eoif===1400###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");addNodeAtBeginning(&head, sum);
                AKA_mark("lis===112###sois===2427###eois===2446###lif===63###soif===1418###eoif===1437###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cout << sum << " ";
                AKA_mark("lis===113###sois===2464###eois===2474###lif===64###soif===1455###eoif===1465###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");carry = 0;
            }

            else {
                AKA_mark("lis===117###sois===2529###eois===2565###lif===68###soif===1520###eoif===1556###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");addNodeAtBeginning(&head, sum % 10);
                AKA_mark("lis===118###sois===2583###eois===2607###lif===69###soif===1574###eoif===1598###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cout << sum % 10 << " ";
                AKA_mark("lis===119###sois===2625###eois===2642###lif===70###soif===1616###eoif===1633###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");carry = sum / 10;
            }
            
            AKA_mark("lis===122###sois===2685###eois===2699###lif===73###soif===1676###eoif===1690###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");l1 = l1->next;
        }

        int AKA_BLOCK_LOOP_2722 = 0;
    while(AKA_mark("lis===125###sois===2728###eois===2738###lif===76###soif===1719###eoif===1729###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===125###sois===2728###eois===2738###lif===76###soif===1719###eoif===1729###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (l2 != NULL))) {
        AKA_BLOCK_LOOP_2722++;
        if (AKA_BLOCK_LOOP_2722 > 1000) {
            //break;
        }
            
            AKA_mark("lis===127###sois===2769###eois===2795###lif===78###soif===1760###eoif===1786###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");int sum = l2->val + carry;

            if(AKA_mark("lis===129###sois===2814###eois===2822###lif===80###soif===1805###eoif===1813###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===129###sois===2814###eois===2822###lif===80###soif===1805###eoif===1813###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (sum <= 9))) {
                AKA_mark("lis===130###sois===2843###eois===2874###lif===81###soif===1834###eoif===1865###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");addNodeAtBeginning(&head, sum);
                AKA_mark("lis===131###sois===2892###eois===2911###lif===82###soif===1883###eoif===1902###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cout << sum << " ";
                AKA_mark("lis===132###sois===2929###eois===2939###lif===83###soif===1920###eoif===1930###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");carry = 0;
            }

            else {
                AKA_mark("lis===136###sois===2994###eois===3030###lif===87###soif===1985###eoif===2021###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");addNodeAtBeginning(&head, sum % 10);
                AKA_mark("lis===137###sois===3048###eois===3072###lif===88###soif===2039###eoif===2063###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cout << sum % 10 << " ";
                AKA_mark("lis===138###sois===3090###eois===3107###lif===89###soif===2081###eoif===2098###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");carry = sum / 10;
            }

            AKA_mark("lis===141###sois===3138###eois===3152###lif===92###soif===2129###eoif===2143###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");l2 = l2->next;
        }

        int AKA_BLOCK_LOOP_3175 = 0;
    while(AKA_mark("lis===144###sois===3181###eois===3190###lif===95###soif===2172###eoif===2181###ifc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (AKA_mark("lis===144###sois===3181###eois===3190###lif===95###soif===2172###eoif===2181###isc===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)") && (carry > 0))) {
        AKA_BLOCK_LOOP_3175++;
        if (AKA_BLOCK_LOOP_3175 > 1000) {
            //break;
        }
            AKA_mark("lis===145###sois===3207###eois===3245###lif===96###soif===2198###eoif===2236###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");addNodeAtBeginning(&head, carry % 10);
            AKA_mark("lis===146###sois===3259###eois===3285###lif===97###soif===2250###eoif===2276###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");cout << carry % 10 << " ";
            AKA_mark("lis===147###sois===3299###eois===3311###lif===98###soif===2290###eoif===2302###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");carry /= 10;
        }

        AKA_mark("lis===150###sois===3334###eois===3346###lif===101###soif===2325###eoif===2337###ins===true###function===.\\p5\\0445-add-two-numbers-ii\\0445-add-two-numbers-ii.cpp\\Solution\\addTwoNumbers(ListNode*,ListNode*)");return head;
    }

};
#endif
