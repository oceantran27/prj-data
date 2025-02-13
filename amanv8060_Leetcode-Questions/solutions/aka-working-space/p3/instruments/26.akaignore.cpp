/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_26_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P3_26_CPP
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
  /** Instrumented function removeDuplicates(vector<int>&) */
int removeDuplicates(vector<int>& nums) /* << Aka begin of function int removeDuplicates(vector<int>& nums) >> */
{AKA_mark("Calling: .\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===13###sois===264###eois===284###lif===1###soif===47###eoif===67###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");int n = nums.size();
    AKA_mark("lis===14###sois===290###eois===307###lif===2###soif===73###eoif===90###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");int k = 0, i = 0;
    if (AKA_mark("lis===15###sois===317###eois===323###lif===3###soif===100###eoif===106###ifc===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)") && (AKA_mark("lis===15###sois===317###eois===323###lif===3###soif===100###eoif===106###isc===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)") && (n == 0))) {
AKA_mark("lis===15###sois===325###eois===334###lif===3###soif===108###eoif===117###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");return 0;
}

else {
AKA_mark("lis===-15-###sois===-317-###eois===-3176-###lif===-3-###soif===-###eoif===-106-###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");
}
    AKA_mark("lis===16###sois===340###eois===358###lif===4###soif===123###eoif===141###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");nums[k] = nums[0];
    AKA_mark("lis===17###sois===364###eois===374###lif===5###soif===147###eoif===157###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");k = k + 1;
    int AKA_BLOCK_LOOP_380 = 0;
    AKA_mark("lis===18###sois===385###eois===391###lif===6###soif===168###eoif===174###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");
for (i = 1; AKA_mark("lis===18###sois===392###eois===397###lif===6###soif===175###eoif===180###ifc===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)") && (AKA_mark("lis===18###sois===392###eois===397###lif===6###soif===175###eoif===180###isc===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)") && (i < n)); ({AKA_mark("lis===18###sois===399###eois===402###lif===6###soif===182###eoif===185###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_380++;
        if (AKA_BLOCK_LOOP_380 > 1000) {
            //break;
        }
      if (AKA_mark("lis===19###sois===417###eois===439###lif===7###soif===200###eoif===222###ifc===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)") && (AKA_mark("lis===19###sois===417###eois===439###lif===7###soif===200###eoif===222###isc===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)") && (nums[i] != nums[i - 1]))) {
        AKA_mark("lis===20###sois===452###eois===470###lif===8###soif===235###eoif===253###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");nums[k] = nums[i];
        AKA_mark("lis===21###sois===480###eois===484###lif===9###soif===263###eoif===267###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");k++;
      }
else {
AKA_mark("lis===-19-###sois===-417-###eois===-41722-###lif===-7-###soif===-###eoif===-222-###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");
}
    }
    AKA_mark("lis===24###sois===506###eois===515###lif===12###soif===289###eoif===298###ins===true###function===.\\p3\\26.cpp\\Solution\\removeDuplicates(vector<int>&)");return k;
  }
};

#endif
