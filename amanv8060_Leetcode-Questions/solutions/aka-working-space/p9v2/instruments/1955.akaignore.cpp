/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1955_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1955_CPP
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
  /** Instrumented function countSpecialSubsequences(vector<int>&) */
int countSpecialSubsequences(vector<int>& nums) /* << Aka begin of function int countSpecialSubsequences(vector<int>& nums) >> */
{AKA_mark("Calling: .\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===13###sois===272###eois===300###lif===1###soif===55###eoif===83###ins===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");vector<long long> arr(3, 0);
    AKA_mark("lis===14###sois===306###eois===326###lif===2###soif===89###eoif===109###ins===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");int n = nums.size();
    AKA_mark("lis===15###sois===332###eois===348###lif===3###soif===115###eoif===131###ins===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");int M = 1e9 + 7;

    int AKA_BLOCK_LOOP_356 = 0;
    AKA_mark("lis===17###sois===361###eois===371###lif===5###soif===144###eoif===154###ins===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");
for (int i = 0; AKA_mark("lis===17###sois===372###eois===377###lif===5###soif===155###eoif===160###ifc===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)") && (AKA_mark("lis===17###sois===372###eois===377###lif===5###soif===155###eoif===160###isc===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)") && (i < n)); ({AKA_mark("lis===17###sois===379###eois===382###lif===5###soif===162###eoif===165###ins===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_356++;
        if (AKA_BLOCK_LOOP_356 > 1000) {
            //break;
        }
      if (AKA_mark("lis===18###sois===397###eois===409###lif===6###soif===180###eoif===192###ifc===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)") && (AKA_mark("lis===18###sois===397###eois===409###lif===6###soif===180###eoif===192###isc===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)") && (nums[i] == 0)))
        {
AKA_mark("lis===19###sois===420###eois===456###lif===7###soif===203###eoif===239###ins===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");arr[0] = ((arr[0] * 2) % M + 1) % M;
}

      else {
if (AKA_mark("lis===20###sois===473###eois===485###lif===8###soif===256###eoif===268###ifc===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)") && (AKA_mark("lis===20###sois===473###eois===485###lif===8###soif===256###eoif===268###isc===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)") && (nums[i] == 1))) {
        AKA_mark("lis===21###sois===498###eois===543###lif===9###soif===281###eoif===326###ins===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");arr[1] = (arr[0] % M + (arr[1] * 2) % M) % M;
      } else {
        AKA_mark("lis===23###sois===569###eois===614###lif===11###soif===352###eoif===397###ins===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");arr[2] = (arr[1] % M + (arr[2] * 2) % M) % M;
      }
}

    }

    AKA_mark("lis===27###sois===638###eois===656###lif===15###soif===421###eoif===439###ins===true###function===.\\p9\\1955.cpp\\Solution\\countSpecialSubsequences(vector<int>&)");return arr[2] % M;
  }
};

#endif
