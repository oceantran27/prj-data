/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1991_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1991_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
public:
  /** Instrumented function findMiddleIndex(vector<int>&) */
int findMiddleIndex(vector<int>& nums) /* << Aka begin of function int findMiddleIndex(vector<int>& nums) >> */
{AKA_mark("Calling: .\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===265###eois===285###lif===1###soif===46###eoif===66###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");int l = nums.size();
    AKA_mark("lis===15###sois===291###eois===333###lif===2###soif===72###eoif===114###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");vector<int> pre(l + 2, 0), post(l + 2, 0);

    AKA_mark("lis===17###sois===341###eois===358###lif===4###soif===122###eoif===139###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");pre[1] = nums[0];
    AKA_mark("lis===18###sois===364###eois===386###lif===5###soif===145###eoif===167###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");post[l] = nums[l - 1];

    int AKA_BLOCK_LOOP_394 = 0;
    AKA_mark("lis===20###sois===399###eois===409###lif===7###soif===180###eoif===190###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");
for (int i = 2; AKA_mark("lis===20###sois===410###eois===416###lif===7###soif===191###eoif===197###ifc===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)") && (AKA_mark("lis===20###sois===410###eois===416###lif===7###soif===191###eoif===197###isc===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)") && (i <= l)); ({AKA_mark("lis===20###sois===418###eois===421###lif===7###soif===199###eoif===202###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_394++;
        if (AKA_BLOCK_LOOP_394 > 1000) {
            //break;
        }
      AKA_mark("lis===21###sois===432###eois===466###lif===8###soif===213###eoif===247###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");pre[i] = pre[i - 1] + nums[i - 1];
    }
    int AKA_BLOCK_LOOP_479 = 0;
    AKA_mark("lis===23###sois===484###eois===498###lif===10###soif===265###eoif===279###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");
for (int i = l - 1; AKA_mark("lis===23###sois===499###eois===505###lif===10###soif===280###eoif===286###ifc===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)") && (AKA_mark("lis===23###sois===499###eois===505###lif===10###soif===280###eoif===286###isc===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)") && (i >= 1)); ({AKA_mark("lis===23###sois===507###eois===510###lif===10###soif===288###eoif===291###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");i--;})) {
        AKA_BLOCK_LOOP_479++;
        if (AKA_BLOCK_LOOP_479 > 1000) {
            //break;
        }
      AKA_mark("lis===24###sois===521###eois===557###lif===11###soif===302###eoif===338###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");post[i] = post[i + 1] + nums[i - 1];
    }

    AKA_mark("lis===27###sois===572###eois===585###lif===14###soif===353###eoif===366###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");int ans = -1;
    int AKA_BLOCK_LOOP_591 = 0;
    AKA_mark("lis===28###sois===596###eois===606###lif===15###soif===377###eoif===387###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");
for (int i = 1; AKA_mark("lis===28###sois===607###eois===613###lif===15###soif===388###eoif===394###ifc===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)") && (AKA_mark("lis===28###sois===607###eois===613###lif===15###soif===388###eoif===394###isc===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)") && (i <= l)); ({AKA_mark("lis===28###sois===615###eois===618###lif===15###soif===396###eoif===399###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_591++;
        if (AKA_BLOCK_LOOP_591 > 1000) {
            //break;
        }
      AKA_mark("lis===29###sois===629###eois===649###lif===16###soif===410###eoif===430###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");int pr = pre[i - 1];
      AKA_mark("lis===30###sois===657###eois===678###lif===17###soif===438###eoif===459###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");int ps = post[i + 1];
      if (AKA_mark("lis===31###sois===690###eois===698###lif===18###soif===471###eoif===479###ifc===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)") && (AKA_mark("lis===31###sois===690###eois===698###lif===18###soif===471###eoif===479###isc===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)") && (pr == ps))) {
        AKA_mark("lis===32###sois===711###eois===723###lif===19###soif===492###eoif===504###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");ans = i - 1;
        AKA_mark("lis===33###sois===733###eois===739###lif===20###soif===514###eoif===520###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");break;
      }
else {
AKA_mark("lis===-31-###sois===-690-###eois===-6908-###lif===-18-###soif===-###eoif===-479-###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");
}
    }

    AKA_mark("lis===37###sois===763###eois===774###lif===24###soif===544###eoif===555###ins===true###function===.\\p10\\1991.cpp\\Solution\\findMiddleIndex(vector<int>&)");return ans;
  }
};
#endif
