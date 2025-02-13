/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_53_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_53_CPP
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
  /** Instrumented function maxSubArray(vector<int>&) */
int maxSubArray(vector<int>& nums) /* << Aka begin of function int maxSubArray(vector<int>& nums) >> */
{AKA_mark("Calling: .\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===261###eois===304###lif===1###soif===42###eoif===85###ins===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)");int cur = 0, mx = INT_MIN, n = nums.size();

    int AKA_BLOCK_LOOP_312 = 0;
    AKA_mark("lis===16###sois===317###eois===327###lif===3###soif===98###eoif===108###ins===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)");
for (int i = 0; AKA_mark("lis===16###sois===328###eois===333###lif===3###soif===109###eoif===114###ifc===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)") && (AKA_mark("lis===16###sois===328###eois===333###lif===3###soif===109###eoif===114###isc===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)") && (i < n)); ({AKA_mark("lis===16###sois===335###eois===338###lif===3###soif===116###eoif===119###ins===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_312++;
        if (AKA_BLOCK_LOOP_312 > 1000) {
            //break;
        }
      AKA_mark("lis===17###sois===349###eois===364###lif===4###soif===130###eoif===145###ins===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)");cur += nums[i];
      AKA_mark("lis===18###sois===372###eois===390###lif===5###soif===153###eoif===171###ins===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)");mx = max(mx, cur);
      if (AKA_mark("lis===19###sois===402###eois===409###lif===6###soif===183###eoif===190###ifc===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)") && (AKA_mark("lis===19###sois===402###eois===409###lif===6###soif===183###eoif===190###isc===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)") && (cur < 0))) {
        AKA_mark("lis===20###sois===422###eois===430###lif===7###soif===203###eoif===211###ins===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)");cur = 0;
      }
else {
AKA_mark("lis===-19-###sois===-402-###eois===-4027-###lif===-6-###soif===-###eoif===-190-###ins===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)");
}
    }
    AKA_mark("lis===23###sois===452###eois===462###lif===10###soif===233###eoif===243###ins===true###function===.\\p4\\53.cpp\\Solution\\maxSubArray(vector<int>&)");return mx;
  }
};

#endif
