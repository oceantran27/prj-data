/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1915_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1915_CPP
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
  /** Instrumented function wonderfulSubstrings(string) */
long long wonderfulSubstrings(string s) /* << Aka begin of function long long wonderfulSubstrings(string s) >> */
{AKA_mark("Calling: .\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");AKA_fCall++;
    AKA_mark("lis===14###sois===266###eois===283###lif===1###soif===47###eoif===64###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");int n = s.size();
    AKA_mark("lis===15###sois===289###eois===318###lif===2###soif===70###eoif===99###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");map<long long, long long> mp;
    AKA_mark("lis===16###sois===324###eois===334###lif===3###soif===105###eoif===115###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");mp[0] = 1;
    AKA_mark("lis===17###sois===340###eois===360###lif===4###soif===121###eoif===141###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");long long count = 0;
    AKA_mark("lis===18###sois===366###eois===385###lif===5###soif===147###eoif===166###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");long long mask = 0;
    int AKA_BLOCK_LOOP_391 = 0;
    AKA_mark("lis===19###sois===396###eois===406###lif===6###soif===177###eoif===187###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");
for (int i = 0; AKA_mark("lis===19###sois===407###eois===412###lif===6###soif===188###eoif===193###ifc===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)") && (AKA_mark("lis===19###sois===407###eois===412###lif===6###soif===188###eoif===193###isc===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)") && (i < n)); ({AKA_mark("lis===19###sois===414###eois===417###lif===6###soif===195###eoif===198###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");i++;})) {
        AKA_BLOCK_LOOP_391++;
        if (AKA_BLOCK_LOOP_391 > 1000) {
            //break;
        }
      AKA_mark("lis===20###sois===428###eois===462###lif===7###soif===209###eoif===243###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");mask = mask ^ (1 << (s[i] - 'a'));
      if (AKA_mark("lis===21###sois===474###eois===488###lif===8###soif===255###eoif===269###ifc===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)") && (AKA_mark("lis===21###sois===474###eois===488###lif===8###soif===255###eoif===269###isc===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)") && (mp.count(mask)))) {
        AKA_mark("lis===22###sois===501###eois===519###lif===9###soif===282###eoif===300###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");count += mp[mask];
      }
else {
AKA_mark("lis===-21-###sois===-474-###eois===-47414-###lif===-8-###soif===-###eoif===-269-###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");
}
      int AKA_BLOCK_LOOP_536 = 0;
    AKA_mark("lis===24###sois===541###eois===554###lif===11###soif===322###eoif===335###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");
for (char j = 'a'; AKA_mark("lis===24###sois===555###eois===563###lif===11###soif===336###eoif===344###ifc===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)") && (AKA_mark("lis===24###sois===555###eois===563###lif===11###soif===336###eoif===344###isc===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)") && (j <= 'j')); ({AKA_mark("lis===24###sois===565###eois===568###lif===11###soif===346###eoif===349###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");j++;})) {
        AKA_BLOCK_LOOP_536++;
        if (AKA_BLOCK_LOOP_536 > 1000) {
            //break;
        }
        AKA_mark("lis===25###sois===581###eois===619###lif===12###soif===362###eoif===400###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");long long x = mask ^ (1 << (j - 'a'));
        if (AKA_mark("lis===26###sois===633###eois===644###lif===13###soif===414###eoif===425###ifc===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)") && (AKA_mark("lis===26###sois===633###eois===644###lif===13###soif===414###eoif===425###isc===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)") && (mp.count(x)))) {
          AKA_mark("lis===27###sois===659###eois===674###lif===14###soif===440###eoif===455###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");count += mp[x];
        }
else {
AKA_mark("lis===-26-###sois===-633-###eois===-63311-###lif===-13-###soif===-###eoif===-425-###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");
}
      }
      AKA_mark("lis===30###sois===702###eois===713###lif===17###soif===483###eoif===494###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");mp[mask]++;
    }
    AKA_mark("lis===32###sois===726###eois===739###lif===19###soif===507###eoif===520###ins===true###function===.\\p8\\1915.cpp\\Solution\\wonderfulSubstrings(string)");return count;
  }
};

#endif
