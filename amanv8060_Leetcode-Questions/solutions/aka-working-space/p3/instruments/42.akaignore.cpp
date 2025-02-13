/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_42_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_42_CPP
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
  /** Instrumented function trap(vector<int>&) */
int trap(vector<int>& a) /* << Aka begin of function int trap(vector<int>& a) >> */
{AKA_mark("Calling: .\\p3\\42.cpp\\Solution\\trap(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===251###eois===268###lif===1###soif===32###eoif===49###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");int n = a.size();
    if (AKA_mark("lis===15###sois===278###eois===284###lif===2###soif===59###eoif===65###ifc===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)") && (AKA_mark("lis===15###sois===278###eois===284###lif===2###soif===59###eoif===65###isc===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)") && (n == 0))) {
AKA_mark("lis===15###sois===286###eois===295###lif===2###soif===67###eoif===76###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");return 0;
}

else {
AKA_mark("lis===-15-###sois===-278-###eois===-2786-###lif===-2-###soif===-###eoif===-65-###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");
}
    AKA_mark("lis===16###sois===301###eois===332###lif===3###soif===82###eoif===113###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");vector<int> lvect, rvect, vect;
    AKA_mark("lis===17###sois===338###eois===354###lif===4###soif===119###eoif===135###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");int left = a[0];
    int AKA_BLOCK_LOOP_360 = 0;
    AKA_mark("lis===18###sois===365###eois===375###lif===5###soif===146###eoif===156###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");
for (int i = 0; AKA_mark("lis===18###sois===376###eois===381###lif===5###soif===157###eoif===162###ifc===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)") && (AKA_mark("lis===18###sois===376###eois===381###lif===5###soif===157###eoif===162###isc===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)") && (i < n)); ({AKA_mark("lis===18###sois===383###eois===386###lif===5###soif===164###eoif===167###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_360++;
        if (AKA_BLOCK_LOOP_360 > 1000) {
            //break;
        }
      AKA_mark("lis===19###sois===397###eois===420###lif===6###soif===178###eoif===201###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");left = max(left, a[i]);
      AKA_mark("lis===20###sois===428###eois===450###lif===7###soif===209###eoif===231###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");lvect.push_back(left);
    }
    AKA_mark("lis===22###sois===463###eois===484###lif===9###soif===244###eoif===265###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");int right = a[n - 1];
    int AKA_BLOCK_LOOP_490 = 0;
    AKA_mark("lis===23###sois===495###eois===509###lif===10###soif===276###eoif===290###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");
for (int i = n - 1; AKA_mark("lis===23###sois===510###eois===516###lif===10###soif===291###eoif===297###ifc===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)") && (AKA_mark("lis===23###sois===510###eois===516###lif===10###soif===291###eoif===297###isc===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)") && (i >= 0)); ({AKA_mark("lis===23###sois===518###eois===521###lif===10###soif===299###eoif===302###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");i--;})) {
        AKA_BLOCK_LOOP_490++;
        if (AKA_BLOCK_LOOP_490 > 1000) {
            //break;
        }
      AKA_mark("lis===24###sois===532###eois===557###lif===11###soif===313###eoif===338###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");right = max(right, a[i]);
      AKA_mark("lis===25###sois===565###eois===588###lif===12###soif===346###eoif===369###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");rvect.push_back(right);
    }
    AKA_mark("lis===27###sois===601###eois===637###lif===14###soif===382###eoif===418###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");reverse(rvect.begin(), rvect.end());
    int AKA_BLOCK_LOOP_643 = 0;
    AKA_mark("lis===28###sois===648###eois===658###lif===15###soif===429###eoif===439###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");
for (int i = 0; AKA_mark("lis===28###sois===659###eois===664###lif===15###soif===440###eoif===445###ifc===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)") && (AKA_mark("lis===28###sois===659###eois===664###lif===15###soif===440###eoif===445###isc===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)") && (i < n)); ({AKA_mark("lis===28###sois===666###eois===669###lif===15###soif===447###eoif===450###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_643++;
        if (AKA_BLOCK_LOOP_643 > 1000) {
            //break;
        }
      AKA_mark("lis===29###sois===680###eois===727###lif===16###soif===461###eoif===508###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");vect.push_back(min(lvect[i], rvect[i]) - a[i]);
    }
    AKA_mark("lis===31###sois===740###eois===752###lif===18###soif===521###eoif===533###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");int sum = 0;
    AKA_mark("lis===32###sois===758###eois===806###lif===19###soif===539###eoif===587###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");sum = accumulate(vect.begin(), vect.end(), sum);
    AKA_mark("lis===33###sois===812###eois===823###lif===20###soif===593###eoif===604###ins===true###function===.\\p3\\42.cpp\\Solution\\trap(vector<int>&)");return sum;
  }
};
#endif
