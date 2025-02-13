/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_44_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_44_CPP
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
  /** Instrumented function isMatch(string,string) */
bool isMatch(string str, string pattern) /* << Aka begin of function bool isMatch(string str, string pattern) >> */
{AKA_mark("Calling: .\\p4\\44.cpp\\Solution\\isMatch(string,string)");AKA_fCall++;
    AKA_mark("lis===13###sois===265###eois===288###lif===1###soif===48###eoif===71###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");int m = pattern.size();
    AKA_mark("lis===14###sois===294###eois===313###lif===2###soif===77###eoif===96###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");int n = str.size();

    AKA_mark("lis===16###sois===321###eois===343###lif===4###soif===104###eoif===126###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");bool dp[n + 1][m + 1];
    int AKA_BLOCK_LOOP_349 = 0;
    AKA_mark("lis===17###sois===354###eois===364###lif===5###soif===137###eoif===147###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");
for (int i = 0; AKA_mark("lis===17###sois===365###eois===374###lif===5###soif===148###eoif===157###ifc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (AKA_mark("lis===17###sois===365###eois===374###lif===5###soif===148###eoif===157###isc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (i < n + 1)); ({AKA_mark("lis===17###sois===376###eois===379###lif===5###soif===159###eoif===162###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");i++;})) {
        AKA_BLOCK_LOOP_349++;
        if (AKA_BLOCK_LOOP_349 > 1000) {
            //break;
        }
      int AKA_BLOCK_LOOP_390 = 0;
    AKA_mark("lis===18###sois===395###eois===405###lif===6###soif===178###eoif===188###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");
for (int j = 0; AKA_mark("lis===18###sois===406###eois===415###lif===6###soif===189###eoif===198###ifc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (AKA_mark("lis===18###sois===406###eois===415###lif===6###soif===189###eoif===198###isc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (j < m + 1)); ({AKA_mark("lis===18###sois===417###eois===420###lif===6###soif===200###eoif===203###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");j++;})) {
        AKA_BLOCK_LOOP_390++;
        if (AKA_BLOCK_LOOP_390 > 1000) {
            //break;
        }
        AKA_mark("lis===19###sois===433###eois===450###lif===7###soif===216###eoif===233###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");dp[i][j] = false;
      }
    }
    AKA_mark("lis===22###sois===472###eois===488###lif===10###soif===255###eoif===271###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");dp[0][0] = true;

    int AKA_BLOCK_LOOP_496 = 0;
    AKA_mark("lis===24###sois===501###eois===511###lif===12###soif===284###eoif===294###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");
for (int i = 1; AKA_mark("lis===24###sois===512###eois===518###lif===12###soif===295###eoif===301###ifc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (AKA_mark("lis===24###sois===512###eois===518###lif===12###soif===295###eoif===301###isc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (i <= m)); ({AKA_mark("lis===24###sois===520###eois===523###lif===12###soif===303###eoif===306###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");i++;})) {
        AKA_BLOCK_LOOP_496++;
        if (AKA_BLOCK_LOOP_496 > 1000) {
            //break;
        }
      if (AKA_mark("lis===25###sois===538###eois===559###lif===13###soif===321###eoif===342###ifc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (AKA_mark("lis===25###sois===538###eois===559###lif===13###soif===321###eoif===342###isc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (pattern[i - 1] == '*'))) {
AKA_mark("lis===25###sois===561###eois===585###lif===13###soif===344###eoif===368###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");dp[0][i] = dp[0][i - 1];
}

else {
AKA_mark("lis===-25-###sois===-538-###eois===-53821-###lif===-13-###soif===-###eoif===-342-###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");
}
    }
    int AKA_BLOCK_LOOP_598 = 0;
    AKA_mark("lis===27###sois===603###eois===613###lif===15###soif===386###eoif===396###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");
for (int i = 1; AKA_mark("lis===27###sois===614###eois===623###lif===15###soif===397###eoif===406###ifc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (AKA_mark("lis===27###sois===614###eois===623###lif===15###soif===397###eoif===406###isc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (i < n + 1)); ({AKA_mark("lis===27###sois===625###eois===628###lif===15###soif===408###eoif===411###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");i++;})) {
        AKA_BLOCK_LOOP_598++;
        if (AKA_BLOCK_LOOP_598 > 1000) {
            //break;
        }
      int AKA_BLOCK_LOOP_639 = 0;
    AKA_mark("lis===28###sois===644###eois===654###lif===16###soif===427###eoif===437###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");
for (int j = 1; AKA_mark("lis===28###sois===655###eois===664###lif===16###soif===438###eoif===447###ifc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (AKA_mark("lis===28###sois===655###eois===664###lif===16###soif===438###eoif===447###isc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (j < m + 1)); ({AKA_mark("lis===28###sois===666###eois===669###lif===16###soif===449###eoif===452###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");j++;})) {
        AKA_BLOCK_LOOP_639++;
        if (AKA_BLOCK_LOOP_639 > 1000) {
            //break;
        }
        if (AKA_mark("lis===29###sois===686###eois===739###lif===17###soif===469###eoif===522###ifc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && ((AKA_mark("lis===29###sois===686###eois===714###lif===17###soif===469###eoif===497###isc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (str[i - 1] == pattern[j - 1])) || (AKA_mark("lis===29###sois===718###eois===739###lif===17###soif===501###eoif===522###isc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (pattern[j - 1] == '?'))))
          {
AKA_mark("lis===30###sois===752###eois===780###lif===18###soif===535###eoif===563###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");dp[i][j] = dp[i - 1][j - 1];
}

        else {
if (AKA_mark("lis===31###sois===799###eois===820###lif===19###soif===582###eoif===603###ifc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (AKA_mark("lis===31###sois===799###eois===820###lif===19###soif===582###eoif===603###isc===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)") && (pattern[j - 1] == '*')))
          {
AKA_mark("lis===32###sois===833###eois===873###lif===20###soif===616###eoif===656###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
}

else {
AKA_mark("lis===-31-###sois===-799-###eois===-79921-###lif===-19-###soif===-###eoif===-603-###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");
}
}

      }
    }
    AKA_mark("lis===35###sois===895###eois===911###lif===23###soif===678###eoif===694###ins===true###function===.\\p4\\44.cpp\\Solution\\isMatch(string,string)");return dp[n][m];
  }
};

#endif
