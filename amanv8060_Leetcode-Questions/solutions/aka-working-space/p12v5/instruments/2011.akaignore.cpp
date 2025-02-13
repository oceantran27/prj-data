/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2011_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2011_CPP
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
  /** Instrumented function finalValueAfterOperations(vector<string>&) */
int finalValueAfterOperations(vector<string>& operations) /* << Aka begin of function int finalValueAfterOperations(vector<string>& operations) >> */
{AKA_mark("Calling: .\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)");AKA_fCall++;
    AKA_mark("lis===13###sois===282###eois===294###lif===1###soif===65###eoif===77###ins===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)");int ans = 0;
    int AKA_BLOCK_LOOP_300 = 0;
    AKA_mark("lis===14###sois===305###eois===315###lif===2###soif===88###eoif===98###ins===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)");
for (int i = 0; AKA_mark("lis===14###sois===316###eois===337###lif===2###soif===99###eoif===120###ifc===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)") && (AKA_mark("lis===14###sois===316###eois===337###lif===2###soif===99###eoif===120###isc===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)") && (i < operations.size())); ({AKA_mark("lis===14###sois===339###eois===342###lif===2###soif===122###eoif===125###ins===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)");i++;})) {
        AKA_BLOCK_LOOP_300++;
        if (AKA_BLOCK_LOOP_300 > 1000) {
            //break;
        }
      AKA_mark("lis===15###sois===353###eois===378###lif===3###soif===136###eoif===161###ins===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)");string s = operations[i];
      if (AKA_mark("lis===16###sois===390###eois===414###lif===4###soif===173###eoif===197###ifc===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)") && ((AKA_mark("lis===16###sois===390###eois===400###lif===4###soif===173###eoif===183###isc===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)") && (s == "--X")) || (AKA_mark("lis===16###sois===404###eois===414###lif===4###soif===187###eoif===197###isc===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)") && (s == "X--")))) {
        AKA_mark("lis===17###sois===427###eois===441###lif===5###soif===210###eoif===224###ins===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)");ans = ans - 1;
      } else {
        AKA_mark("lis===19###sois===467###eois===481###lif===7###soif===250###eoif===264###ins===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)");ans = ans + 1;
      }
    }
    AKA_mark("lis===22###sois===503###eois===514###lif===10###soif===286###eoif===297###ins===true###function===.\\p12\\2011.cpp\\Solution\\finalValueAfterOperations(vector<string>&)");return ans;
  }
};

#endif
