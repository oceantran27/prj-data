/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_7_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_7_CPP
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
  /** Instrumented function reverse(int) */
int reverse(int x) /* << Aka begin of function int reverse(int x) >> */
{AKA_mark("Calling: .\\p1\\7.cpp\\Solution\\reverse(int)");AKA_fCall++;
    AKA_mark("lis===14###sois===245###eois===263###lif===1###soif===26###eoif===44###ins===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)");int temp = abs(x);
    AKA_mark("lis===15###sois===269###eois===287###lif===2###soif===50###eoif===68###ins===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)");long long ans = 0;
    int AKA_BLOCK_LOOP_293 = 0;
    while (AKA_mark("lis===16###sois===300###eois===308###lif===3###soif===81###eoif===89###ifc===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)") && (AKA_mark("lis===16###sois===300###eois===308###lif===3###soif===81###eoif===89###isc===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)") && (temp > 0))) {
        AKA_BLOCK_LOOP_293++;
        if (AKA_BLOCK_LOOP_293 > 1000) {
            //break;
        }
      AKA_mark("lis===17###sois===319###eois===346###lif===4###soif===100###eoif===127###ins===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)");ans = ans * 10 + temp % 10;
      AKA_mark("lis===18###sois===354###eois===365###lif===5###soif===135###eoif===146###ins===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)");temp /= 10;
    }
    if (AKA_mark("lis===20###sois===382###eois===387###lif===7###soif===163###eoif===168###ifc===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)") && (AKA_mark("lis===20###sois===382###eois===387###lif===7###soif===163###eoif===168###isc===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)") && (x > 0)))
      {
AKA_mark("lis===21###sois===396###eois===444###lif===8###soif===177###eoif===225###ins===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)");return ans > INT_MAX || ans < INT_MIN ? 0 : ans;
}

    else
      {
AKA_mark("lis===23###sois===462###eois===513###lif===10###soif===243###eoif===294###ins===true###function===.\\p1\\7.cpp\\Solution\\reverse(int)");return ans > INT_MAX || ans < INT_MIN ? 0 : -(ans);
}

  }
};

#endif
