/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_2006_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_2006_CPP
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
#include <algorithm>
using namespace std;

class Solution {
 public:
public:
  /** Instrumented function countKDifference(vector<int>&,int) */
int countKDifference(vector<int>& nums, int k) /* << Aka begin of function int countKDifference(vector<int>& nums, int k) >> */
{AKA_mark("Calling: .\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");AKA_fCall++;
    AKA_mark("lis===9###sois===170###eois===190###lif===1###soif===54###eoif===74###ins===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");int n = nums.size();
    AKA_mark("lis===10###sois===196###eois===206###lif===2###soif===80###eoif===90###ins===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");int c = 0;
    int AKA_BLOCK_LOOP_212 = 0;
    AKA_mark("lis===11###sois===217###eois===227###lif===3###soif===101###eoif===111###ins===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");
for (int i = 0; AKA_mark("lis===11###sois===228###eois===233###lif===3###soif===112###eoif===117###ifc===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)") && (AKA_mark("lis===11###sois===228###eois===233###lif===3###soif===112###eoif===117###isc===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)") && (i < n)); ({AKA_mark("lis===11###sois===235###eois===238###lif===3###soif===119###eoif===122###ins===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");i++;})) {
        AKA_BLOCK_LOOP_212++;
        if (AKA_BLOCK_LOOP_212 > 1000) {
            //break;
        }
      int AKA_BLOCK_LOOP_249 = 0;
    AKA_mark("lis===12###sois===254###eois===268###lif===4###soif===138###eoif===152###ins===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");
for (int j = i + 1; AKA_mark("lis===12###sois===269###eois===274###lif===4###soif===153###eoif===158###ifc===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)") && (AKA_mark("lis===12###sois===269###eois===274###lif===4###soif===153###eoif===158###isc===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)") && (j < n)); ({AKA_mark("lis===12###sois===276###eois===279###lif===4###soif===160###eoif===163###ins===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");j++;})) {
        AKA_BLOCK_LOOP_249++;
        if (AKA_BLOCK_LOOP_249 > 1000) {
            //break;
        }
        if (AKA_mark("lis===13###sois===296###eois===344###lif===5###soif===180###eoif===228###ifc===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)") && ((AKA_mark("lis===13###sois===296###eois===318###lif===5###soif===180###eoif===202###isc===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)") && (nums[i] - nums[j] == k)) || (AKA_mark("lis===13###sois===322###eois===344###lif===5###soif===206###eoif===228###isc===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)") && (nums[j] - nums[i] == k)))) {
          AKA_mark("lis===14###sois===359###eois===363###lif===6###soif===243###eoif===247###ins===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");c++;
        }
else {
AKA_mark("lis===-13-###sois===-296-###eois===-29648-###lif===-5-###soif===-###eoif===-228-###ins===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");
}
      }
    }
    AKA_mark("lis===18###sois===396###eois===405###lif===10###soif===280###eoif===289###ins===true###function===.\\p11\\2006.cpp\\Solution\\countKDifference(vector<int>&,int)");return c;
  }
};

#endif
