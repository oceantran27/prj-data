/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1881_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1881_CPP
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
  /** Instrumented function maxValue(string,int) */
string maxValue(string n, int x) /* << Aka begin of function string maxValue(string n, int x) >> */
{AKA_mark("Calling: .\\p8\\1881.cpp\\Solution\\maxValue(string,int)");AKA_fCall++;
    if (AKA_mark("lis===14###sois===263###eois===274###lif===1###soif===44###eoif===55###ifc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (AKA_mark("lis===14###sois===263###eois===274###lif===1###soif===44###eoif===55###isc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (n[0] == '-'))) {
      AKA_mark("lis===15###sois===285###eois===301###lif===2###soif===66###eoif===82###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");bool gg = false;
      int AKA_BLOCK_LOOP_309 = 0;
    AKA_mark("lis===16###sois===314###eois===324###lif===3###soif===95###eoif===105###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");
for (int i = 1; AKA_mark("lis===16###sois===325###eois===337###lif===3###soif===106###eoif===118###ifc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (AKA_mark("lis===16###sois===325###eois===337###lif===3###soif===106###eoif===118###isc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (i < n.size())); ({AKA_mark("lis===16###sois===339###eois===342###lif===3###soif===120###eoif===123###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");i++;})) {
        AKA_BLOCK_LOOP_309++;
        if (AKA_BLOCK_LOOP_309 > 1000) {
            //break;
        }
        if (AKA_mark("lis===17###sois===359###eois===373###lif===4###soif===140###eoif===154###ifc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (AKA_mark("lis===17###sois===359###eois===373###lif===4###soif===140###eoif===154###isc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (n[i] > x + '0'))) {
          AKA_mark("lis===18###sois===388###eois===421###lif===5###soif===169###eoif===202###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");n.insert(n.begin() + i, x + '0');
          AKA_mark("lis===19###sois===433###eois===443###lif===6###soif===214###eoif===224###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");gg = true;
          AKA_mark("lis===20###sois===455###eois===461###lif===7###soif===236###eoif===242###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");break;
        }
else {
AKA_mark("lis===-17-###sois===-359-###eois===-35914-###lif===-4-###soif===-###eoif===-154-###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");
}
      }
      if (AKA_mark("lis===23###sois===493###eois===504###lif===10###soif===274###eoif===285###ifc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (AKA_mark("lis===23###sois===493###eois===504###lif===10###soif===274###eoif===285###isc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (gg == false))) {
        AKA_mark("lis===24###sois===517###eois===538###lif===11###soif===298###eoif===319###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");n.push_back(x + '0');
      }
else {
AKA_mark("lis===-23-###sois===-493-###eois===-49311-###lif===-10-###soif===-###eoif===-285-###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");
}
    } else {
      AKA_mark("lis===27###sois===569###eois===585###lif===14###soif===350###eoif===366###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");bool gg = false;
      int AKA_BLOCK_LOOP_593 = 0;
    AKA_mark("lis===28###sois===598###eois===608###lif===15###soif===379###eoif===389###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");
for (int i = 0; AKA_mark("lis===28###sois===609###eois===621###lif===15###soif===390###eoif===402###ifc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (AKA_mark("lis===28###sois===609###eois===621###lif===15###soif===390###eoif===402###isc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (i < n.size())); ({AKA_mark("lis===28###sois===623###eois===626###lif===15###soif===404###eoif===407###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");i++;})) {
        AKA_BLOCK_LOOP_593++;
        if (AKA_BLOCK_LOOP_593 > 1000) {
            //break;
        }
        if (AKA_mark("lis===29###sois===643###eois===657###lif===16###soif===424###eoif===438###ifc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (AKA_mark("lis===29###sois===643###eois===657###lif===16###soif===424###eoif===438###isc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (n[i] < x + '0'))) {
          AKA_mark("lis===30###sois===672###eois===705###lif===17###soif===453###eoif===486###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");n.insert(n.begin() + i, x + '0');
          AKA_mark("lis===31###sois===717###eois===727###lif===18###soif===498###eoif===508###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");gg = true;
          AKA_mark("lis===32###sois===739###eois===745###lif===19###soif===520###eoif===526###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");break;
        }
else {
AKA_mark("lis===-29-###sois===-643-###eois===-64314-###lif===-16-###soif===-###eoif===-438-###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");
}
      }
      if (AKA_mark("lis===35###sois===777###eois===788###lif===22###soif===558###eoif===569###ifc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (AKA_mark("lis===35###sois===777###eois===788###lif===22###soif===558###eoif===569###isc===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)") && (gg == false))) {
        AKA_mark("lis===36###sois===801###eois===822###lif===23###soif===582###eoif===603###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");n.push_back(x + '0');
      }
else {
AKA_mark("lis===-35-###sois===-777-###eois===-77711-###lif===-22-###soif===-###eoif===-569-###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");
}
    }
    AKA_mark("lis===39###sois===844###eois===853###lif===26###soif===625###eoif===634###ins===true###function===.\\p8\\1881.cpp\\Solution\\maxValue(string,int)");return n;
  }
};

#endif
