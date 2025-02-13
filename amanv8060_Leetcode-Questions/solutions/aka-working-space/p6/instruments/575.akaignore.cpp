/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_575_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_575_CPP
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
  /** Instrumented function distributeCandies(vector<int>&) */
int distributeCandies(vector<int>& candyType) /* << Aka begin of function int distributeCandies(vector<int>& candyType) >> */
{AKA_mark("Calling: .\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===272###eois===297###lif===1###soif===53###eoif===78###ins===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)");int n = candyType.size();
    AKA_mark("lis===15###sois===303###eois===319###lif===2###soif===84###eoif===100###ins===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)");map<int, int> m;
    int AKA_BLOCK_LOOP_325 = 0;
    AKA_mark("lis===16###sois===330###eois===340###lif===3###soif===111###eoif===121###ins===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)");
for (int i = 0; AKA_mark("lis===16###sois===341###eois===346###lif===3###soif===122###eoif===127###ifc===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)") && (AKA_mark("lis===16###sois===341###eois===346###lif===3###soif===122###eoif===127###isc===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)") && (i < n)); ({AKA_mark("lis===16###sois===348###eois===351###lif===3###soif===129###eoif===132###ins===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_325++;
        if (AKA_BLOCK_LOOP_325 > 1000) {
            //break;
        }
      AKA_mark("lis===17###sois===362###eois===390###lif===4###soif===143###eoif===171###ins===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)");m.insert({candyType[i], 1});
    }
    AKA_mark("lis===19###sois===403###eois===425###lif===6###soif===184###eoif===206###ins===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)");int maplen = m.size();
    if (AKA_mark("lis===20###sois===435###eois===450###lif===7###soif===216###eoif===231###ifc===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)") && (AKA_mark("lis===20###sois===435###eois===450###lif===7###soif===216###eoif===231###isc===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)") && (maplen >= n / 2)))
      {
AKA_mark("lis===21###sois===459###eois===472###lif===8###soif===240###eoif===253###ins===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)");return n / 2;
}

    else
      {
AKA_mark("lis===23###sois===490###eois===504###lif===10###soif===271###eoif===285###ins===true###function===.\\p6\\575.cpp\\Solution\\distributeCandies(vector<int>&)");return maplen;
}

  }
};

#endif
