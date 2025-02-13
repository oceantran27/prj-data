/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_2007_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_2007_CPP
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
  /** Instrumented function findOriginalArray(vector<int>&) */
vector<int> findOriginalArray(vector<int>& nums) /* << Aka begin of function vector<int> findOriginalArray(vector<int>& nums) >> */
{AKA_mark("Calling: .\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===13###sois===273###eois===301###lif===1###soif===56###eoif===84###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");unordered_map<int, int> d2c;
    AKA_mark("lis===14###sois===307###eois===323###lif===2###soif===90###eoif===106###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");vector<int> ret;
    for (int i : nums) AKA_mark("lis===15###sois===334###eois===339###lif===3###soif===117###eoif===122###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");
{
AKA_mark("lis===15###sois===348###eois===357###lif===3###soif===131###eoif===140###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");d2c[i]++;
}

AKA_mark("lis===15###sois===334###eois===339###lif===3###soif===117###eoif===122###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");

    if (AKA_mark("lis===16###sois===367###eois===391###lif===4###soif===150###eoif===174###ifc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (AKA_mark("lis===16###sois===367###eois===391###lif===4###soif===150###eoif===174###isc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (d2c.find(0) != d2c.end()))) {
      if (AKA_mark("lis===17###sois===406###eois===421###lif===5###soif===189###eoif===204###ifc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (AKA_mark("lis===17###sois===406###eois===421###lif===5###soif===189###eoif===204###isc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (d2c[0] % 2 != 0))) {
AKA_mark("lis===17###sois===423###eois===433###lif===5###soif===206###eoif===216###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");return {};
}

else {
AKA_mark("lis===-17-###sois===-406-###eois===-40615-###lif===-5-###soif===-###eoif===-204-###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");
}
      AKA_mark("lis===18###sois===441###eois===478###lif===6###soif===224###eoif===261###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");ret.insert(ret.end(), d2c[0] / 2, 0);
      AKA_mark("lis===19###sois===486###eois===499###lif===7###soif===269###eoif===282###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");d2c.erase(0);
    }
else {
AKA_mark("lis===-16-###sois===-367-###eois===-36724-###lif===-4-###soif===-###eoif===-174-###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");
}

    for (int i : nums) {
AKA_mark("lis===22###sois===519###eois===524###lif===10###soif===302###eoif===307###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");
{
      if (AKA_mark("lis===23###sois===546###eois===570###lif===11###soif===329###eoif===353###ifc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (AKA_mark("lis===23###sois===546###eois===570###lif===11###soif===329###eoif===353###isc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (d2c.find(i) == d2c.end()))) {
AKA_mark("lis===23###sois===572###eois===581###lif===11###soif===355###eoif===364###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");continue;
}

else {
AKA_mark("lis===-23-###sois===-546-###eois===-54624-###lif===-11-###soif===-###eoif===-353-###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");
}
      AKA_mark("lis===24###sois===589###eois===601###lif===12###soif===372###eoif===384###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");int cur = i;
      int AKA_BLOCK_LOOP_609 = 0;
    while (AKA_mark("lis===25###sois===616###eois===662###lif===13###soif===399###eoif===445###ifc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && ((AKA_mark("lis===25###sois===616###eois===628###lif===13###soif===399###eoif===411###isc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (cur % 2 == 0)) && (AKA_mark("lis===25###sois===632###eois===662###lif===13###soif===415###eoif===445###isc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (d2c.find(cur / 2) != d2c.end())))) {
        AKA_BLOCK_LOOP_609++;
        if (AKA_BLOCK_LOOP_609 > 1000) {
            //break;
        }
        AKA_mark("lis===26###sois===675###eois===689###lif===14###soif===458###eoif===472###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");cur = cur / 2;
      }
      // now cur is the smallest element in the chain
      AKA_mark("lis===29###sois===761###eois===784###lif===17###soif===544###eoif===567###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");int need_as_double = 0;
      int AKA_BLOCK_LOOP_792 = 0;
    for (; AKA_mark("lis===30###sois===799###eois===825###lif===18###soif===582###eoif===608###ifc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (AKA_mark("lis===30###sois===799###eois===825###lif===18###soif===582###eoif===608###isc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (d2c.find(cur) != d2c.end())); ({AKA_mark("lis===30###sois===827###eois===835###lif===18###soif===610###eoif===618###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");cur *= 2;})) {
        AKA_BLOCK_LOOP_792++;
        if (AKA_BLOCK_LOOP_792 > 1000) {
            //break;
        }
        AKA_mark("lis===31###sois===848###eois===875###lif===19###soif===631###eoif===658###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");d2c[cur] -= need_as_double;

        if (AKA_mark("lis===33###sois===891###eois===903###lif===21###soif===674###eoif===686###ifc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (AKA_mark("lis===33###sois===891###eois===903###lif===21###soif===674###eoif===686###isc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (d2c[cur] < 0))) {
AKA_mark("lis===33###sois===905###eois===915###lif===21###soif===688###eoif===698###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");return {};
}

else {
AKA_mark("lis===-33-###sois===-891-###eois===-89112-###lif===-21-###soif===-###eoif===-686-###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");
}
        AKA_mark("lis===34###sois===925###eois===962###lif===22###soif===708###eoif===745###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");ret.insert(ret.end(), d2c[cur], cur);
        AKA_mark("lis===35###sois===972###eois===998###lif===23###soif===755###eoif===781###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");need_as_double = d2c[cur];
        AKA_mark("lis===36###sois===1008###eois===1023###lif===24###soif===791###eoif===806###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");d2c.erase(cur);
      }
      if (AKA_mark("lis===38###sois===1044###eois===1063###lif===26###soif===827###eoif===846###ifc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (AKA_mark("lis===38###sois===1044###eois===1063###lif===26###soif===827###eoif===846###isc===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)") && (need_as_double != 0))) {
AKA_mark("lis===38###sois===1065###eois===1075###lif===26###soif===848###eoif===858###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");return {};
}

else {
AKA_mark("lis===-38-###sois===-1044-###eois===-104419-###lif===-26-###soif===-###eoif===-846-###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");
}
    }}
AKA_mark("lis===22###sois===519###eois===524###lif===10###soif===302###eoif===307###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");

    AKA_mark("lis===40###sois===1088###eois===1099###lif===28###soif===871###eoif===882###ins===true###function===.\\p11\\2007.cpp\\Solution\\findOriginalArray(vector<int>&)");return ret;
  }
};

#endif
