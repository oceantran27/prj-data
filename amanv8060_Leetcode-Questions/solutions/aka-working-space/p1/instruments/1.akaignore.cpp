/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_1_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_1_CPP
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
using namespace std;

class Solution {
 public:
public:
  /** Instrumented function twoSum(vector<int>&,int) */
vector<int> twoSum(vector<int> &arr, int target) /* << Aka begin of function vector<int> twoSum(vector<int> &arr, int target) >> */
{AKA_mark("Calling: .\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)");AKA_fCall++;
    AKA_mark("lis===13###sois===249###eois===276###lif===1###soif===56###eoif===83###ins===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)");unordered_map<int, int> mp;

    int AKA_BLOCK_LOOP_284 = 0;
    AKA_mark("lis===15###sois===289###eois===299###lif===3###soif===96###eoif===106###ins===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)");
for (int i = 0; AKA_mark("lis===15###sois===300###eois===314###lif===3###soif===107###eoif===121###ifc===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)") && (AKA_mark("lis===15###sois===300###eois===314###lif===3###soif===107###eoif===121###isc===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)") && (i < arr.size())); ({AKA_mark("lis===15###sois===316###eois===319###lif===3###soif===123###eoif===126###ins===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)");i++;})) {
        AKA_BLOCK_LOOP_284++;
        if (AKA_BLOCK_LOOP_284 > 1000) {
            //break;
        }
      AKA_mark("lis===16###sois===330###eois===356###lif===4###soif===137###eoif===163###ins===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)");int val = target - arr[i];
      if (AKA_mark("lis===17###sois===368###eois===392###lif===5###soif===175###eoif===199###ifc===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)") && (AKA_mark("lis===17###sois===368###eois===392###lif===5###soif===175###eoif===199###isc===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)") && (mp.find(val) != mp.end()))) {
        AKA_mark("lis===18###sois===405###eois===436###lif===6###soif===212###eoif===243###ins===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)");return vector<int>{mp[val], i};
      } else {
        AKA_mark("lis===20###sois===462###eois===477###lif===8###soif===269###eoif===284###ins===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)");mp[arr[i]] = i;
      }
    }
    AKA_mark("lis===23###sois===499###eois===509###lif===11###soif===306###eoif===316###ins===true###function===.\\p1\\1.cpp\\Solution\\twoSum(vector<int>&,int)");return {};
  }
};
#endif
