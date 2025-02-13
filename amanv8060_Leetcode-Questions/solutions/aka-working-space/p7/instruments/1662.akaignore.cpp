/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1662_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1662_CPP
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
  /** Instrumented function arrayStringsAreEqual(vector<string>&,vector<string>&) */
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) /* << Aka begin of function bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) >> */
{AKA_mark("Calling: .\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===298###eois===320###lif===1###soif===79###eoif===101###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");int n1 = word1.size();
    AKA_mark("lis===15###sois===326###eois===348###lif===2###soif===107###eoif===129###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");int n2 = word2.size();
    AKA_mark("lis===16###sois===354###eois===366###lif===3###soif===135###eoif===147###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");string str1;
    AKA_mark("lis===17###sois===372###eois===384###lif===4###soif===153###eoif===165###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");string str2;

    int AKA_BLOCK_LOOP_392 = 0;
    AKA_mark("lis===19###sois===397###eois===407###lif===6###soif===178###eoif===188###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");
for (int i = 0; AKA_mark("lis===19###sois===408###eois===414###lif===6###soif===189###eoif===195###ifc===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)") && (AKA_mark("lis===19###sois===408###eois===414###lif===6###soif===189###eoif===195###isc===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)") && (i < n1)); ({AKA_mark("lis===19###sois===416###eois===419###lif===6###soif===197###eoif===200###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");i++;})) {
        AKA_BLOCK_LOOP_392++;
        if (AKA_BLOCK_LOOP_392 > 1000) {
            //break;
        }
      AKA_mark("lis===20###sois===430###eois===453###lif===7###soif===211###eoif===234###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");str1 = str1 + word1[i];
    }
    int AKA_BLOCK_LOOP_466 = 0;
    AKA_mark("lis===22###sois===471###eois===481###lif===9###soif===252###eoif===262###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");
for (int i = 0; AKA_mark("lis===22###sois===482###eois===488###lif===9###soif===263###eoif===269###ifc===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)") && (AKA_mark("lis===22###sois===482###eois===488###lif===9###soif===263###eoif===269###isc===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)") && (i < n2)); ({AKA_mark("lis===22###sois===490###eois===493###lif===9###soif===271###eoif===274###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");i++;})) {
        AKA_BLOCK_LOOP_466++;
        if (AKA_BLOCK_LOOP_466 > 1000) {
            //break;
        }
      AKA_mark("lis===23###sois===504###eois===527###lif===10###soif===285###eoif===308###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");str2 = str2 + word2[i];
    }
    if (AKA_mark("lis===25###sois===544###eois===556###lif===12###soif===325###eoif===337###ifc===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)") && (AKA_mark("lis===25###sois===544###eois===556###lif===12###soif===325###eoif===337###isc===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)") && (str1 == str2))) {
      AKA_mark("lis===26###sois===567###eois===579###lif===13###soif===348###eoif===360###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");return true;
    }
else {
AKA_mark("lis===-25-###sois===-544-###eois===-54412-###lif===-12-###soif===-###eoif===-337-###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");
}
    AKA_mark("lis===28###sois===592###eois===605###lif===15###soif===373###eoif===386###ins===true###function===.\\p7\\1662.cpp\\Solution\\arrayStringsAreEqual(vector<string>&,vector<string>&)");return false;
  }
};

#endif
