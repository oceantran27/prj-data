/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1982_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1982_CPP
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
  /** Instrumented function recoverArray(int,vector<int>&) */
vector<int> recoverArray(int n, vector<int>& sums) /* << Aka begin of function vector<int> recoverArray(int n, vector<int>& sums) >> */
{AKA_mark("Calling: .\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");AKA_fCall++;
    AKA_mark("lis===13###sois===275###eois===306###lif===1###soif===58###eoif===89###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");sort(sums.begin(), sums.end());

    AKA_mark("lis===15###sois===314###eois===330###lif===3###soif===97###eoif===113###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");vector<int> ans;
    int AKA_BLOCK_LOOP_336 = 0;
    while (AKA_mark("lis===16###sois===343###eois===346###lif===4###soif===126###eoif===129###ifc===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)") && (AKA_mark("lis===16###sois===343###eois===346###lif===4###soif===126###eoif===129###isc===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)") && (n--))) {
        AKA_BLOCK_LOOP_336++;
        if (AKA_BLOCK_LOOP_336 > 1000) {
            //break;
        }
      AKA_mark("lis===17###sois===357###eois===386###lif===5###soif===140###eoif===169###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");int diff = sums[1] - sums[0];
      AKA_mark("lis===18###sois===394###eois===423###lif===6###soif===177###eoif===206###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");unordered_map<int, int> freq;
      AKA_mark("lis===19###sois===431###eois===452###lif===7###soif===214###eoif===235###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");vector<int> ss0, ss1;
      AKA_mark("lis===20###sois===460###eois===476###lif===8###soif===243###eoif===259###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");bool on = false;
      for (auto& x : sums)
        AKA_mark("lis===21###sois===489###eois===496###lif===9###soif===272###eoif===279###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");
{
if (AKA_mark("lis===22###sois===518###eois===526###lif===10###soif===301###eoif===309###ifc===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)") && (AKA_mark("lis===22###sois===518###eois===526###lif===10###soif===301###eoif===309###isc===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)") && (!freq[x]))) {
          AKA_mark("lis===23###sois===541###eois===558###lif===11###soif===324###eoif===341###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");ss0.push_back(x);
          AKA_mark("lis===24###sois===570###eois===587###lif===12###soif===353###eoif===370###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");freq[x + diff]++;
          if (AKA_mark("lis===25###sois===603###eois===609###lif===13###soif===386###eoif===392###ifc===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)") && (AKA_mark("lis===25###sois===603###eois===609###lif===13###soif===386###eoif===392###isc===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)") && (x == 0))) {
AKA_mark("lis===25###sois===611###eois===621###lif===13###soif===394###eoif===404###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");on = true;
}

else {
AKA_mark("lis===-25-###sois===-603-###eois===-6036-###lif===-13-###soif===-###eoif===-392-###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");
}
        } else {
          AKA_mark("lis===27###sois===651###eois===668###lif===15###soif===434###eoif===451###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");ss1.push_back(x);
          AKA_mark("lis===28###sois===680###eois===690###lif===16###soif===463###eoif===473###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");freq[x]--;
        }
}

AKA_mark("lis===21###sois===489###eois===496###lif===9###soif===272###eoif===279###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");

      if (AKA_mark("lis===30###sois===713###eois===715###lif===18###soif===496###eoif===498###ifc===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)") && (AKA_mark("lis===30###sois===713###eois===715###lif===18###soif===496###eoif===498###isc===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)") && (on))) {
        AKA_mark("lis===31###sois===728###eois===748###lif===19###soif===511###eoif===531###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");ans.push_back(diff);
        AKA_mark("lis===32###sois===758###eois===769###lif===20###soif===541###eoif===552###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");sums = ss0;
      } else {
        AKA_mark("lis===34###sois===795###eois===816###lif===22###soif===578###eoif===599###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");ans.push_back(-diff);
        AKA_mark("lis===35###sois===826###eois===837###lif===23###soif===609###eoif===620###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");sums = ss1;
      }
    }
    AKA_mark("lis===38###sois===859###eois===870###lif===26###soif===642###eoif===653###ins===true###function===.\\p9\\1982.cpp\\Solution\\recoverArray(int,vector<int>&)");return ans;
  }
};

#endif
