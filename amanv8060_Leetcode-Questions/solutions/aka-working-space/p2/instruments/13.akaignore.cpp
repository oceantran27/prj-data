/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_13_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_13_CPP
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
  /** Instrumented function romanToInt(string) */
int romanToInt(string s) /* << Aka begin of function int romanToInt(string s) >> */
{AKA_mark("Calling: .\\p2\\13.cpp\\Solution\\romanToInt(string)");AKA_fCall++;
    AKA_mark("lis===14###sois===251###eois===263###lif===1###soif===32###eoif===44###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");int sum = 0;
    if (AKA_mark("lis===15###sois===273###eois===288###lif===2###soif===54###eoif===69###ifc===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)") && (AKA_mark("lis===15###sois===273###eois===288###lif===2###soif===54###eoif===69###isc===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)") && (s.length() == 0))) {
      AKA_mark("lis===16###sois===299###eois===309###lif===3###soif===80###eoif===90###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");return -1;
    } else {
      AKA_mark("lis===18###sois===331###eois===351###lif===5###soif===112###eoif===132###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");map<char, int> temp;
      AKA_mark("lis===19###sois===359###eois===381###lif===6###soif===140###eoif===162###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");temp.insert({'I', 1});
      AKA_mark("lis===20###sois===389###eois===411###lif===7###soif===170###eoif===192###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");temp.insert({'V', 5});
      AKA_mark("lis===21###sois===419###eois===442###lif===8###soif===200###eoif===223###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");temp.insert({'X', 10});
      AKA_mark("lis===22###sois===450###eois===473###lif===9###soif===231###eoif===254###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");temp.insert({'L', 50});
      AKA_mark("lis===23###sois===481###eois===505###lif===10###soif===262###eoif===286###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");temp.insert({'C', 100});
      AKA_mark("lis===24###sois===513###eois===537###lif===11###soif===294###eoif===318###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");temp.insert({'D', 500});
      AKA_mark("lis===25###sois===545###eois===570###lif===12###soif===326###eoif===351###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");temp.insert({'M', 1000});

      int AKA_BLOCK_LOOP_580 = 0;
    AKA_mark("lis===27###sois===585###eois===595###lif===14###soif===366###eoif===376###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");
for (int i = 0; AKA_mark("lis===27###sois===596###eois===610###lif===14###soif===377###eoif===391###ifc===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)") && (AKA_mark("lis===27###sois===596###eois===610###lif===14###soif===377###eoif===391###isc===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)") && (i < s.length())); ({AKA_mark("lis===27###sois===612###eois===615###lif===14###soif===393###eoif===396###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");i++;})) {
        AKA_BLOCK_LOOP_580++;
        if (AKA_BLOCK_LOOP_580 > 1000) {
            //break;
        }
        if (AKA_mark("lis===28###sois===632###eois===659###lif===15###soif===413###eoif===440###ifc===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)") && (AKA_mark("lis===28###sois===632###eois===659###lif===15###soif===413###eoif===440###isc===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)") && (temp[s[i]] < temp[s[i + 1]]))) {
          AKA_mark("lis===29###sois===674###eois===709###lif===16###soif===455###eoif===490###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");sum += temp[s[i + 1]] - temp[s[i]];
          AKA_mark("lis===30###sois===721###eois===725###lif===17###soif===502###eoif===506###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");i++;
          AKA_mark("lis===31###sois===737###eois===746###lif===18###soif===518###eoif===527###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");continue;
        }
else {
AKA_mark("lis===-28-###sois===-632-###eois===-63227-###lif===-15-###soif===-###eoif===-440-###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");
}
        AKA_mark("lis===33###sois===767###eois===785###lif===20###soif===548###eoif===566###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");sum += temp[s[i]];
      }
    }
    AKA_mark("lis===36###sois===807###eois===818###lif===23###soif===588###eoif===599###ins===true###function===.\\p2\\13.cpp\\Solution\\romanToInt(string)");return sum;
  }
};

#endif
