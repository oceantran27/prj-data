/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1441_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1441_CPP
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
  /** Instrumented function buildArray(vector<int>&,int) */
vector<string> buildArray(vector<int>& target, int n) /* << Aka begin of function vector<string> buildArray(vector<int>& target, int n) >> */
{AKA_mark("Calling: .\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");AKA_fCall++;
    AKA_mark("lis===14###sois===280###eois===301###lif===1###soif===61###eoif===82###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");vector<string> stack;
    AKA_mark("lis===15###sois===307###eois===323###lif===2###soif===88###eoif===104###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");int counter = 0;

    int AKA_BLOCK_LOOP_331 = 0;
    AKA_mark("lis===17###sois===336###eois===346###lif===4###soif===117###eoif===127###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");
for (int i = 1; AKA_mark("lis===17###sois===347###eois===353###lif===4###soif===128###eoif===134###ifc===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)") && (AKA_mark("lis===17###sois===347###eois===353###lif===4###soif===128###eoif===134###isc===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)") && (i <= n)); ({AKA_mark("lis===17###sois===355###eois===358###lif===4###soif===136###eoif===139###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");i++;})) {
        AKA_BLOCK_LOOP_331++;
        if (AKA_BLOCK_LOOP_331 > 1000) {
            //break;
        }
      if (AKA_mark("lis===18###sois===373###eois===419###lif===5###soif===154###eoif===200###ifc===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)") && ((AKA_mark("lis===18###sois===373###eois===391###lif===5###soif===154###eoif===172###isc===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)") && (target.size() == 0)) || (AKA_mark("lis===18###sois===395###eois===419###lif===5###soif===176###eoif===200###isc===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)") && (counter >= target.size())))) {
        AKA_mark("lis===19###sois===432###eois===445###lif===6###soif===213###eoif===226###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");return stack;
      }
else {
AKA_mark("lis===-18-###sois===-373-###eois===-37346-###lif===-5-###soif===-###eoif===-200-###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");
}
      AKA_mark("lis===21###sois===462###eois===486###lif===8###soif===243###eoif===267###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");stack.push_back("Push");
      if (AKA_mark("lis===22###sois===498###eois===518###lif===9###soif===279###eoif===299###ifc===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)") && (AKA_mark("lis===22###sois===498###eois===518###lif===9###soif===279###eoif===299###isc===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)") && (i != target[counter]))) {
        AKA_mark("lis===23###sois===531###eois===554###lif===10###soif===312###eoif===335###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");stack.push_back("Pop");
      } else {
        AKA_mark("lis===25###sois===580###eois===590###lif===12###soif===361###eoif===371###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");counter++;
      }
    }
    AKA_mark("lis===28###sois===612###eois===625###lif===15###soif===393###eoif===406###ins===true###function===.\\p7\\1441.cpp\\Solution\\buildArray(vector<int>&,int)");return stack;
  }
};
#endif
