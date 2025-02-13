/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_344_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P6_344_CPP
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
  /** Instrumented function reverseString(vector<char>&) */
void reverseString(vector<char> &s) /* << Aka begin of function void reverseString(vector<char> &s) >> */
{AKA_mark("Calling: .\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===262###eois===268###lif===1###soif===43###eoif===49###ins===true###function===.\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)");int i;
    AKA_mark("lis===15###sois===274###eois===291###lif===2###soif===55###eoif===72###ins===true###function===.\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)");int n = s.size();
    int AKA_BLOCK_LOOP_297 = 0;
    AKA_mark("lis===16###sois===302###eois===308###lif===3###soif===83###eoif===89###ins===true###function===.\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)");
for (i = 0; AKA_mark("lis===16###sois===309###eois===318###lif===3###soif===90###eoif===99###ifc===true###function===.\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)") && (AKA_mark("lis===16###sois===309###eois===318###lif===3###soif===90###eoif===99###isc===true###function===.\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)") && (i < n / 2)); ({AKA_mark("lis===16###sois===320###eois===323###lif===3###soif===101###eoif===104###ins===true###function===.\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)");i++;})) {
        AKA_BLOCK_LOOP_297++;
        if (AKA_BLOCK_LOOP_297 > 1000) {
            //break;
        }
      AKA_mark("lis===17###sois===334###eois===350###lif===4###soif===115###eoif===131###ins===true###function===.\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)");int temp = s[i];
      AKA_mark("lis===18###sois===358###eois===378###lif===5###soif===139###eoif===159###ins===true###function===.\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)");s[i] = s[n - i - 1];
      AKA_mark("lis===19###sois===386###eois===406###lif===6###soif===167###eoif===187###ins===true###function===.\\p6\\344.cpp\\Solution\\reverseString(vector<char>&)");s[n - i - 1] = temp;
    }
  }
};

#endif
