/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_29_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_29_CPP
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
  /** Instrumented function divide(int,int) */
int divide(int dividend, int divisor) /* << Aka begin of function int divide(int dividend, int divisor) >> */
{AKA_mark("Calling: .\\p3\\29.cpp\\Solution\\divide(int,int)");AKA_fCall++;
    if (AKA_mark("lis===14###sois===268###eois===304###lif===1###soif===49###eoif===85###ifc===true###function===.\\p3\\29.cpp\\Solution\\divide(int,int)") && ((AKA_mark("lis===14###sois===268###eois===287###lif===1###soif===49###eoif===68###isc===true###function===.\\p3\\29.cpp\\Solution\\divide(int,int)") && (dividend == INT_MIN)) && (AKA_mark("lis===14###sois===291###eois===304###lif===1###soif===72###eoif===85###isc===true###function===.\\p3\\29.cpp\\Solution\\divide(int,int)") && (divisor == -1)))) {
AKA_mark("lis===14###sois===306###eois===321###lif===1###soif===87###eoif===102###ins===true###function===.\\p3\\29.cpp\\Solution\\divide(int,int)");return INT_MAX;
}

else {
AKA_mark("lis===-14-###sois===-268-###eois===-26836-###lif===-1-###soif===-###eoif===-85-###ins===true###function===.\\p3\\29.cpp\\Solution\\divide(int,int)");
}
    AKA_mark("lis===15###sois===327###eois===353###lif===2###soif===108###eoif===134###ins===true###function===.\\p3\\29.cpp\\Solution\\divide(int,int)");return dividend / divisor;
  }
};

#endif
