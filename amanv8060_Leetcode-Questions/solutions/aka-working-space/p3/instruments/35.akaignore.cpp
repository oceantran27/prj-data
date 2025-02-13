/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_35_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_35_CPP
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
  /** Instrumented function searchInsert(vector<int>&,int) */
int searchInsert(vector<int>& a, int target) /* << Aka begin of function int searchInsert(vector<int>& a, int target) >> */
{AKA_mark("Calling: .\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");AKA_fCall++;
    AKA_mark("lis===14###sois===271###eois===319###lif===1###soif===52###eoif===100###ins===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");int l = 0, r = (int)a.size() - 1, mid, ans = -1;
    int AKA_BLOCK_LOOP_325 = 0;
    while (AKA_mark("lis===15###sois===332###eois===338###lif===2###soif===113###eoif===119###ifc===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)") && (AKA_mark("lis===15###sois===332###eois===338###lif===2###soif===113###eoif===119###isc===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)") && (l <= r))) {
        AKA_BLOCK_LOOP_325++;
        if (AKA_BLOCK_LOOP_325 > 1000) {
            //break;
        }
      AKA_mark("lis===16###sois===349###eois===371###lif===3###soif===130###eoif===152###ins===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");mid = l + (r - l) / 2;
      if (AKA_mark("lis===17###sois===383###eois===399###lif===4###soif===164###eoif===180###ifc===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)") && (AKA_mark("lis===17###sois===383###eois===399###lif===4###soif===164###eoif===180###isc===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)") && (a[mid] == target))) {
AKA_mark("lis===17###sois===401###eois===412###lif===4###soif===182###eoif===193###ins===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");return mid;
}

else {
AKA_mark("lis===-17-###sois===-383-###eois===-38316-###lif===-4-###soif===-###eoif===-180-###ins===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");
}
      if (AKA_mark("lis===18###sois===424###eois===439###lif===5###soif===205###eoif===220###ifc===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)") && (AKA_mark("lis===18###sois===424###eois===439###lif===5###soif===205###eoif===220###isc===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)") && (a[mid] < target))) {
        AKA_mark("lis===19###sois===452###eois===464###lif===6###soif===233###eoif===245###ins===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");l = mid + 1;
        AKA_mark("lis===20###sois===474###eois===488###lif===7###soif===255###eoif===269###ins===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");ans = mid + 1;
      } else {
        AKA_mark("lis===22###sois===514###eois===524###lif===9###soif===295###eoif===305###ins===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");ans = mid;
        AKA_mark("lis===23###sois===534###eois===546###lif===10###soif===315###eoif===327###ins===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");r = mid - 1;
      }
    }
    AKA_mark("lis===26###sois===568###eois===579###lif===13###soif===349###eoif===360###ins===true###function===.\\p3\\35.cpp\\Solution\\searchInsert(vector<int>&,int)");return ans;
  }
};

#endif
