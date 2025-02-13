/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1833_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1833_CPP
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
  /** Instrumented function maxIceCream(vector<int>&,int) */
int maxIceCream(vector<int>& costs, int coins) /* << Aka begin of function int maxIceCream(vector<int>& costs, int coins) >> */
{AKA_mark("Calling: .\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)");AKA_fCall++;
    AKA_mark("lis===14###sois===273###eois===306###lif===1###soif===54###eoif===87###ins===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)");sort(costs.begin(), costs.end());

    AKA_mark("lis===16###sois===314###eois===334###lif===3###soif===95###eoif===115###ins===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)");int able_to_buy = 0;

    int AKA_BLOCK_LOOP_342 = 0;
    AKA_mark("lis===18###sois===347###eois===357###lif===5###soif===128###eoif===138###ins===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)");
for (int i = 0; AKA_mark("lis===18###sois===358###eois===374###lif===5###soif===139###eoif===155###ifc===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)") && (AKA_mark("lis===18###sois===358###eois===374###lif===5###soif===139###eoif===155###isc===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)") && (i < costs.size())); ({AKA_mark("lis===18###sois===376###eois===379###lif===5###soif===157###eoif===160###ins===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)");i++;})) {
        AKA_BLOCK_LOOP_342++;
        if (AKA_BLOCK_LOOP_342 > 1000) {
            //break;
        }
      if (AKA_mark("lis===19###sois===394###eois===415###lif===6###soif===175###eoif===196###ifc===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)") && (AKA_mark("lis===19###sois===394###eois===415###lif===6###soif===175###eoif===196###isc===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)") && (coins - costs[i] >= 0))) {
        AKA_mark("lis===20###sois===428###eois===442###lif===7###soif===209###eoif===223###ins===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)");able_to_buy++;
        AKA_mark("lis===21###sois===452###eois===470###lif===8###soif===233###eoif===251###ins===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)");coins -= costs[i];
      }
else {
AKA_mark("lis===-19-###sois===-394-###eois===-39421-###lif===-6-###soif===-###eoif===-196-###ins===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)");
}
    }

    AKA_mark("lis===25###sois===494###eois===513###lif===12###soif===275###eoif===294###ins===true###function===.\\p8\\1833.cpp\\Solution\\maxIceCream(vector<int>&,int)");return able_to_buy;
  }
};

#endif
