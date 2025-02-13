/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_775_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_775_CPP
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
  /** Instrumented function isIdealPermutation(vector<int>&) */
bool isIdealPermutation(vector<int> &nums) /* << Aka begin of function bool isIdealPermutation(vector<int> &nums) >> */
{AKA_mark("Calling: .\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)");AKA_fCall++;
    int AKA_BLOCK_LOOP_269 = 0;
    AKA_mark("lis===14###sois===274###eois===284###lif===1###soif===55###eoif===65###ins===true###function===.\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)");
for (int i = 0; AKA_mark("lis===14###sois===285###eois===300###lif===1###soif===66###eoif===81###ifc===true###function===.\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)") && (AKA_mark("lis===14###sois===285###eois===300###lif===1###soif===66###eoif===81###isc===true###function===.\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)") && (i < nums.size())); ({AKA_mark("lis===14###sois===302###eois===305###lif===1###soif===83###eoif===86###ins===true###function===.\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_269++;
        if (AKA_BLOCK_LOOP_269 > 1000) {
            //break;
        }
      if (AKA_mark("lis===15###sois===320###eois===340###lif===2###soif===101###eoif===121###ifc===true###function===.\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)") && (AKA_mark("lis===15###sois===320###eois===340###lif===2###soif===101###eoif===121###isc===true###function===.\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)") && (abs(nums[i] - i) > 1))) {
AKA_mark("lis===15###sois===342###eois===355###lif===2###soif===123###eoif===136###ins===true###function===.\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)");return false;
}

else {
AKA_mark("lis===-15-###sois===-320-###eois===-32020-###lif===-2-###soif===-###eoif===-121-###ins===true###function===.\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)");
}
    }
    AKA_mark("lis===17###sois===368###eois===380###lif===4###soif===149###eoif===161###ins===true###function===.\\p6\\775.cpp\\Solution\\isIdealPermutation(vector<int>&)");return true;
  }
};

#endif
