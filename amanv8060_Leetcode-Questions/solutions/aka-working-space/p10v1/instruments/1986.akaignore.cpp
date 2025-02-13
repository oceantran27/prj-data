/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1986_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1986_CPP
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
  /** Instrumented function minSessions(vector<int>&,int) */
int minSessions(vector<int>& tasks, int sessionTime) /* << Aka begin of function int minSessions(vector<int>& tasks, int sessionTime) >> */
{AKA_mark("Calling: .\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");AKA_fCall++;
    AKA_mark("lis===13###sois===277###eois===304###lif===1###soif===60###eoif===87###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");const int N = tasks.size();
    AKA_mark("lis===14###sois===310###eois===330###lif===2###soif===93###eoif===113###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");const int INF = 1e9;
    AKA_mark("lis===15###sois===336###eois===382###lif===3###soif===119###eoif===165###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");vector<pair<int, int>> dp(1 << N, {INF, INF});
    AKA_mark("lis===16###sois===388###eois===405###lif===4###soif===171###eoif===188###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");dp[0] = {0, INF};
    int AKA_BLOCK_LOOP_411 = 0;
    AKA_mark("lis===17###sois===416###eois===429###lif===5###soif===199###eoif===212###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");
for (int mask = 1; AKA_mark("lis===17###sois===430###eois===445###lif===5###soif===213###eoif===228###ifc===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)") && (AKA_mark("lis===17###sois===430###eois===445###lif===5###soif===213###eoif===228###isc===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)") && (mask < (1 << N))); ({AKA_mark("lis===17###sois===447###eois===453###lif===5###soif===230###eoif===236###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");++mask;})) {
        AKA_BLOCK_LOOP_411++;
        if (AKA_BLOCK_LOOP_411 > 1000) {
            //break;
        }
      AKA_mark("lis===18###sois===464###eois===497###lif===6###soif===247###eoif===280###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");pair<int, int> best = {INF, INF};
      int AKA_BLOCK_LOOP_505 = 0;
    AKA_mark("lis===19###sois===510###eois===520###lif===7###soif===293###eoif===303###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");
for (int i = 0; AKA_mark("lis===19###sois===521###eois===526###lif===7###soif===304###eoif===309###ifc===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)") && (AKA_mark("lis===19###sois===521###eois===526###lif===7###soif===304###eoif===309###isc===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)") && (i < N)); ({AKA_mark("lis===19###sois===528###eois===531###lif===7###soif===311###eoif===314###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");++i;})) {
        AKA_BLOCK_LOOP_505++;
        if (AKA_BLOCK_LOOP_505 > 1000) {
            //break;
        }
        if (AKA_mark("lis===20###sois===548###eois===563###lif===8###soif===331###eoif===346###ifc===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)") && (AKA_mark("lis===20###sois===548###eois===563###lif===8###soif===331###eoif===346###isc===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)") && (mask & (1 << i)))) {
          AKA_mark("lis===21###sois===578###eois===619###lif===9###soif===361###eoif===402###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");pair<int, int> cur = dp[mask ^ (1 << i)];
          if (AKA_mark("lis===22###sois===635###eois===670###lif===10###soif===418###eoif===453###ifc===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)") && (AKA_mark("lis===22###sois===635###eois===670###lif===10###soif===418###eoif===453###isc===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)") && (cur.second + tasks[i] > sessionTime))) {
            AKA_mark("lis===23###sois===687###eois===719###lif===11###soif===470###eoif===502###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");cur = {cur.first + 1, tasks[i]};
          } else
            {
AKA_mark("lis===25###sois===751###eois===774###lif===13###soif===534###eoif===557###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");cur.second += tasks[i];
}

          AKA_mark("lis===26###sois===786###eois===808###lif===14###soif===569###eoif===591###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");best = min(best, cur);
        }
else {
AKA_mark("lis===-20-###sois===-548-###eois===-54815-###lif===-8-###soif===-###eoif===-346-###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");
}
      }
      AKA_mark("lis===29###sois===836###eois===852###lif===17###soif===619###eoif===635###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");dp[mask] = best;
    }
    AKA_mark("lis===31###sois===865###eois===895###lif===19###soif===648###eoif===678###ins===true###function===.\\p10\\1986.cpp\\Solution\\minSessions(vector<int>&,int)");return dp[(1 << N) - 1].first;
  }
};

#endif
