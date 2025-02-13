/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1942_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1942_CPP
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
  /** Instrumented function smallestChair(vector<vector<int>>&,int) */
int smallestChair(vector<vector<int>> &times, int targetFriend) /* << Aka begin of function int smallestChair(vector<vector<int>> &times, int targetFriend) >> */
{AKA_mark("Calling: .\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");AKA_fCall++;
    AKA_mark("lis===14###sois===290###eois===324###lif===1###soif===71###eoif===105###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");int time = times[targetFriend][0];
    AKA_mark("lis===15###sois===330###eois===364###lif===2###soif===111###eoif===145###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");vector<int> arrival(time + 1, -1);

    int AKA_BLOCK_LOOP_372 = 0;
    AKA_mark("lis===17###sois===377###eois===387###lif===4###soif===158###eoif===168###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");
for (int i = 0; AKA_mark("lis===17###sois===388###eois===404###lif===4###soif===169###eoif===185###ifc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (AKA_mark("lis===17###sois===388###eois===404###lif===4###soif===169###eoif===185###isc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (i < times.size())); ({AKA_mark("lis===17###sois===406###eois===409###lif===4###soif===187###eoif===190###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");i++;})) {
        AKA_BLOCK_LOOP_372++;
        if (AKA_BLOCK_LOOP_372 > 1000) {
            //break;
        }
      if (AKA_mark("lis===18###sois===424###eois===443###lif===5###soif===205###eoif===224###ifc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (AKA_mark("lis===18###sois===424###eois===443###lif===5###soif===205###eoif===224###isc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (times[i][0] <= time))) {
AKA_mark("lis===18###sois===445###eois===470###lif===5###soif===226###eoif===251###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");arrival[times[i][0]] = i;
}

else {
AKA_mark("lis===-18-###sois===-424-###eois===-42419-###lif===-5-###soif===-###eoif===-224-###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");
}
    }
    AKA_mark("lis===20###sois===483###eois===498###lif===7###soif===264###eoif===279###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");int chair = -1;
    int AKA_BLOCK_LOOP_504 = 0;
    AKA_mark("lis===21###sois===509###eois===519###lif===8###soif===290###eoif===300###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");
for (int i = 1; AKA_mark("lis===21###sois===520###eois===529###lif===8###soif===301###eoif===310###ifc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (AKA_mark("lis===21###sois===520###eois===529###lif===8###soif===301###eoif===310###isc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (i <= time)); ({AKA_mark("lis===21###sois===531###eois===534###lif===8###soif===312###eoif===315###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");i++;})) {
        AKA_BLOCK_LOOP_504++;
        if (AKA_BLOCK_LOOP_504 > 1000) {
            //break;
        }
      if (AKA_mark("lis===22###sois===549###eois===565###lif===9###soif===330###eoif===346###ifc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (AKA_mark("lis===22###sois===549###eois===565###lif===9###soif===330###eoif===346###isc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (arrival[i] != -1))) {
        AKA_mark("lis===23###sois===578###eois===586###lif===10###soif===359###eoif===367###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");chair++;
        AKA_mark("lis===24###sois===596###eois===606###lif===11###soif===377###eoif===387###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");int j = i;
        int AKA_BLOCK_LOOP_616 = 0;
    while (AKA_mark("lis===25###sois===623###eois===631###lif===12###soif===404###eoif===412###ifc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (AKA_mark("lis===25###sois===623###eois===631###lif===12###soif===404###eoif===412###isc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (j < time))) {
        AKA_BLOCK_LOOP_616++;
        if (AKA_BLOCK_LOOP_616 > 1000) {
            //break;
        }
          AKA_mark("lis===26###sois===646###eois===668###lif===13###soif===427###eoif===449###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");int next = arrival[j];
          if (AKA_mark("lis===27###sois===684###eois===694###lif===14###soif===465###eoif===475###ifc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (AKA_mark("lis===27###sois===684###eois===694###lif===14###soif===465###eoif===475###isc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (next != -1))) {
            AKA_mark("lis===28###sois===711###eois===727###lif===15###soif===492###eoif===508###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");arrival[j] = -1;
            AKA_mark("lis===29###sois===741###eois===760###lif===16###soif===522###eoif===541###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");j = times[next][1];
          } else
            {
AKA_mark("lis===31###sois===792###eois===796###lif===18###soif===573###eoif===577###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");j++;
}

        }
        if (AKA_mark("lis===33###sois===821###eois===830###lif===20###soif===602###eoif===611###ifc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (AKA_mark("lis===33###sois===821###eois===830###lif===20###soif===602###eoif===611###isc===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)") && (j == time))) {
AKA_mark("lis===33###sois===832###eois===838###lif===20###soif===613###eoif===619###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");break;
}

else {
AKA_mark("lis===-33-###sois===-821-###eois===-8219-###lif===-20-###soif===-###eoif===-611-###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");
}
      }
else {
AKA_mark("lis===-22-###sois===-549-###eois===-54916-###lif===-9-###soif===-###eoif===-346-###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");
}
    }
    AKA_mark("lis===36###sois===860###eois===873###lif===23###soif===641###eoif===654###ins===true###function===.\\p9\\1942.cpp\\Solution\\smallestChair(vector<vector<int>>&,int)");return chair;
  }
};

#endif
