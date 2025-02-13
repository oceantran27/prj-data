/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_27_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_27_CPP
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
  /** Instrumented function removeElement(vector<int>&,int) */
int removeElement(vector<int>& nums, int val) /* << Aka begin of function int removeElement(vector<int>& nums, int val) >> */
{AKA_mark("Calling: .\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)");AKA_fCall++;
    AKA_mark("lis===14###sois===272###eois===292###lif===1###soif===53###eoif===73###ins===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)");int k = nums.size();
    AKA_mark("lis===15###sois===298###eois===310###lif===2###soif===79###eoif===91###ins===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)");int beg = 0;
    int AKA_BLOCK_LOOP_316 = 0;
    AKA_mark("lis===16###sois===321###eois===331###lif===3###soif===102###eoif===112###ins===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)");
for (int i = 0; AKA_mark("lis===16###sois===332###eois===337###lif===3###soif===113###eoif===118###ifc===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)") && (AKA_mark("lis===16###sois===332###eois===337###lif===3###soif===113###eoif===118###isc===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)") && (i < k)); ({AKA_mark("lis===16###sois===339###eois===342###lif===3###soif===120###eoif===123###ins===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)");i++;})) {
        AKA_BLOCK_LOOP_316++;
        if (AKA_BLOCK_LOOP_316 > 1000) {
            //break;
        }
      if (AKA_mark("lis===17###sois===357###eois===371###lif===4###soif===138###eoif===152###ifc===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)") && (AKA_mark("lis===17###sois===357###eois===371###lif===4###soif===138###eoif===152###isc===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)") && (nums[i] != val))) {
        AKA_mark("lis===18###sois===384###eois===404###lif===5###soif===165###eoif===185###ins===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)");nums[beg] = nums[i];
        AKA_mark("lis===19###sois===414###eois===420###lif===6###soif===195###eoif===201###ins===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)");beg++;
      }
else {
AKA_mark("lis===-17-###sois===-357-###eois===-35714-###lif===-4-###soif===-###eoif===-152-###ins===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)");
}
    }
    AKA_mark("lis===22###sois===442###eois===453###lif===9###soif===223###eoif===234###ins===true###function===.\\p3\\27.cpp\\Solution\\removeElement(vector<int>&,int)");return beg;
  }
};

#endif
