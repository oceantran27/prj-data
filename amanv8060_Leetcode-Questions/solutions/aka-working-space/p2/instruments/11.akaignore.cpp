/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_11_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_11_CPP
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

#ifndef NULL
#define NULL 0
#endif

class Solution {
 public:
public:
  /** Instrumented function maxArea(vector<int>&) */
int maxArea(vector<int>& height) /* << Aka begin of function int maxArea(vector<int>& height) >> */
{AKA_mark("Calling: .\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===17###sois===273###eois===283###lif===1###soif===40###eoif===50###ins===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)");int s = 0;
    AKA_mark("lis===18###sois===289###eois===315###lif===2###soif===56###eoif===82###ins===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)");int e = height.size() - 1;

    AKA_mark("lis===20###sois===323###eois===343###lif===4###soif===90###eoif===110###ins===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)");int water = INT_MIN;
    int AKA_BLOCK_LOOP_349 = 0;
    while (AKA_mark("lis===21###sois===356###eois===361###lif===5###soif===123###eoif===128###ifc===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)") && (AKA_mark("lis===21###sois===356###eois===361###lif===5###soif===123###eoif===128###isc===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)") && (s < e))) {
        AKA_BLOCK_LOOP_349++;
        if (AKA_BLOCK_LOOP_349 > 1000) {
            //break;
        }
      AKA_mark("lis===22###sois===372###eois===428###lif===6###soif===139###eoif===195###ins===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)");water = max(water, min(height[s], height[e]) * (e - s));

      if (AKA_mark("lis===24###sois===442###eois===463###lif===8###soif===209###eoif===230###ifc===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)") && (AKA_mark("lis===24###sois===442###eois===463###lif===8###soif===209###eoif===230###isc===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)") && (height[s] < height[e])))
        {
AKA_mark("lis===25###sois===474###eois===478###lif===9###soif===241###eoif===245###ins===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)");s++;
}

      else
        {
AKA_mark("lis===27###sois===500###eois===504###lif===11###soif===267###eoif===271###ins===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)");e--;
}

    }

    AKA_mark("lis===30###sois===519###eois===532###lif===14###soif===286###eoif===299###ins===true###function===.\\p2\\11.cpp\\Solution\\maxArea(vector<int>&)");return water;
  }
};

#endif
