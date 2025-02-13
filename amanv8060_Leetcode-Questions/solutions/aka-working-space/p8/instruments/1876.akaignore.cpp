/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1876_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1876_CPP
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
  /** Instrumented function countGoodSubstrings(string) */
int countGoodSubstrings(string s) /* << Aka begin of function int countGoodSubstrings(string s) >> */
{AKA_mark("Calling: .\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");AKA_fCall++;
    AKA_mark("lis===14###sois===260###eois===274###lif===1###soif===41###eoif===55###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");int count = 0;
    AKA_mark("lis===15###sois===280###eois===295###lif===2###soif===61###eoif===76###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");vector<char> v;

    if (AKA_mark("lis===17###sois===307###eois===321###lif===4###soif===88###eoif===102###ifc===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)") && (AKA_mark("lis===17###sois===307###eois===321###lif===4###soif===88###eoif===102###isc===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)") && (s.length() < 3))) {
      AKA_mark("lis===18###sois===332###eois===341###lif===5###soif===113###eoif===122###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");return 0;
    } else {
      int AKA_BLOCK_LOOP_363 = 0;
    AKA_mark("lis===20###sois===368###eois===378###lif===7###soif===149###eoif===159###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");
for (int i = 0; AKA_mark("lis===20###sois===379###eois===397###lif===7###soif===160###eoif===178###ifc===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)") && (AKA_mark("lis===20###sois===379###eois===397###lif===7###soif===160###eoif===178###isc===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)") && (i < s.length() - 2)); ({AKA_mark("lis===20###sois===399###eois===402###lif===7###soif===180###eoif===183###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");i++;})) {
        AKA_BLOCK_LOOP_363++;
        if (AKA_BLOCK_LOOP_363 > 1000) {
            //break;
        }
        int AKA_BLOCK_LOOP_415 = 0;
    AKA_mark("lis===21###sois===420###eois===430###lif===8###soif===201###eoif===211###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");
for (int j = i; AKA_mark("lis===21###sois===431###eois===440###lif===8###soif===212###eoif===221###ifc===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)") && (AKA_mark("lis===21###sois===431###eois===440###lif===8###soif===212###eoif===221###isc===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)") && (j < i + 3)); ({AKA_mark("lis===21###sois===442###eois===445###lif===8###soif===223###eoif===226###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");j++;})) {
        AKA_BLOCK_LOOP_415++;
        if (AKA_BLOCK_LOOP_415 > 1000) {
            //break;
        }
          AKA_mark("lis===22###sois===460###eois===478###lif===9###soif===241###eoif===259###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");v.push_back(s[j]);
        }

        AKA_mark("lis===25###sois===501###eois===526###lif===12###soif===282###eoif===307###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");sort(v.begin(), v.end());

        AKA_mark("lis===27###sois===538###eois===588###lif===14###soif===319###eoif===369###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");auto ip = unique(v.begin(), v.begin() + v.size());

        AKA_mark("lis===29###sois===600###eois===634###lif===16###soif===381###eoif===415###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");v.resize(distance(v.begin(), ip));

        if (AKA_mark("lis===31###sois===650###eois===663###lif===18###soif===431###eoif===444###ifc===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)") && (AKA_mark("lis===31###sois===650###eois===663###lif===18###soif===431###eoif===444###isc===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)") && (v.size() == 3))) {
          AKA_mark("lis===32###sois===678###eois===686###lif===19###soif===459###eoif===467###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");count++;
        }
else {
AKA_mark("lis===-31-###sois===-650-###eois===-65013-###lif===-18-###soif===-###eoif===-444-###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");
}
        AKA_mark("lis===34###sois===707###eois===717###lif===21###soif===488###eoif===498###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");v.clear();
      }
      AKA_mark("lis===36###sois===734###eois===747###lif===23###soif===515###eoif===528###ins===true###function===.\\p8\\1876.cpp\\Solution\\countGoodSubstrings(string)");return count;
    }
  }
};

#endif
