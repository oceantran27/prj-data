/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1995_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1995_CPP
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
  /** Instrumented function countQuadruplets(vector<int>&) */
int countQuadruplets(vector<int>& nums) /* << Aka begin of function int countQuadruplets(vector<int>& nums) >> */
{AKA_mark("Calling: .\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===266###eois===278###lif===1###soif===47###eoif===59###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");int res = 0;
    AKA_mark("lis===15###sois===284###eois===306###lif===2###soif===65###eoif===87###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");int len = nums.size();

    AKA_mark("lis===17###sois===314###eois===344###lif===4###soif===95###eoif===125###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");unordered_map<int, int> count;
    AKA_mark("lis===18###sois===350###eois===391###lif===5###soif===131###eoif===172###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");count[nums[len - 1] - nums[len - 2]] = 1;

    int AKA_BLOCK_LOOP_399 = 0;
    AKA_mark("lis===20###sois===404###eois===420###lif===7###soif===185###eoif===201###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");
for (int b = len - 3; AKA_mark("lis===20###sois===421###eois===427###lif===7###soif===202###eoif===208###ifc===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)") && (AKA_mark("lis===20###sois===421###eois===427###lif===7###soif===202###eoif===208###isc===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)") && (b >= 1)); ({AKA_mark("lis===20###sois===429###eois===432###lif===7###soif===210###eoif===213###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");b--;})) {
        AKA_BLOCK_LOOP_399++;
        if (AKA_BLOCK_LOOP_399 > 1000) {
            //break;
        }
      int AKA_BLOCK_LOOP_443 = 0;
    AKA_mark("lis===21###sois===448###eois===462###lif===8###soif===229###eoif===243###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");
for (int a = b - 1; AKA_mark("lis===21###sois===463###eois===469###lif===8###soif===244###eoif===250###ifc===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)") && (AKA_mark("lis===21###sois===463###eois===469###lif===8###soif===244###eoif===250###isc===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)") && (a >= 0)); ({AKA_mark("lis===21###sois===471###eois===474###lif===8###soif===252###eoif===255###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");a--;})) {
        AKA_BLOCK_LOOP_443++;
        if (AKA_BLOCK_LOOP_443 > 1000) {
            //break;
        }
        AKA_mark("lis===22###sois===487###eois===519###lif===9###soif===268###eoif===300###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");res += count[nums[a] + nums[b]];
      }

      int AKA_BLOCK_LOOP_538 = 0;
    AKA_mark("lis===25###sois===543###eois===559###lif===12###soif===324###eoif===340###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");
for (int x = len - 1; AKA_mark("lis===25###sois===560###eois===565###lif===12###soif===341###eoif===346###ifc===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)") && (AKA_mark("lis===25###sois===560###eois===565###lif===12###soif===341###eoif===346###isc===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)") && (x > b)); ({AKA_mark("lis===25###sois===567###eois===570###lif===12###soif===348###eoif===351###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");x--;})) {
        AKA_BLOCK_LOOP_538++;
        if (AKA_BLOCK_LOOP_538 > 1000) {
            //break;
        }
        AKA_mark("lis===26###sois===583###eois===610###lif===13###soif===364###eoif===391###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");count[nums[x] - nums[b]]++;
      }
    }

    AKA_mark("lis===30###sois===634###eois===645###lif===17###soif===415###eoif===426###ins===true###function===.\\p10\\1995.cpp\\Solution\\countQuadruplets(vector<int>&)");return res;
  }
};

#endif
