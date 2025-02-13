/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1941_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P8_1941_CPP
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
  /** Instrumented function areOccurrencesEqual(string) */
bool areOccurrencesEqual(string s) /* << Aka begin of function bool areOccurrencesEqual(string s) >> */
{AKA_mark("Calling: .\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");AKA_fCall++;
    AKA_mark("lis===14###sois===261###eois===275###lif===1###soif===42###eoif===56###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");int character;
    AKA_mark("lis===15###sois===281###eois===298###lif===2###soif===62###eoif===79###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");int arr[26] = {};
    int AKA_BLOCK_LOOP_304 = 0;
    AKA_mark("lis===16###sois===309###eois===319###lif===3###soif===90###eoif===100###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");
for (int i = 0; AKA_mark("lis===16###sois===320###eois===334###lif===3###soif===101###eoif===115###ifc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && (AKA_mark("lis===16###sois===320###eois===334###lif===3###soif===101###eoif===115###isc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && (i < s.length())); ({AKA_mark("lis===16###sois===336###eois===339###lif===3###soif===117###eoif===120###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");i++;})) {
        AKA_BLOCK_LOOP_304++;
        if (AKA_BLOCK_LOOP_304 > 1000) {
            //break;
        }
      AKA_mark("lis===17###sois===350###eois===367###lif===4###soif===131###eoif===148###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");character = s[i];
      AKA_mark("lis===18###sois===375###eois===397###lif===5###soif===156###eoif===178###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");arr[character - 97]++;
    }

    int AKA_BLOCK_LOOP_412 = 0;
    AKA_mark("lis===21###sois===417###eois===427###lif===8###soif===198###eoif===208###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");
for (int i = 0; AKA_mark("lis===21###sois===428###eois===434###lif===8###soif===209###eoif===215###ifc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && (AKA_mark("lis===21###sois===428###eois===434###lif===8###soif===209###eoif===215###isc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && (i < 26)); ({AKA_mark("lis===21###sois===436###eois===439###lif===8###soif===217###eoif===220###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");i++;})) {
        AKA_BLOCK_LOOP_412++;
        if (AKA_BLOCK_LOOP_412 > 1000) {
            //break;
        }
      if (AKA_mark("lis===22###sois===454###eois===506###lif===9###soif===235###eoif===287###ifc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && ((AKA_mark("lis===22###sois===454###eois===491###lif===9###soif===235###eoif===272###isc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && (arr[i] == *max_element(arr, arr + 26))) || (AKA_mark("lis===22###sois===495###eois===506###lif===9###soif===276###eoif===287###isc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && (arr[i] == 0)))) {
AKA_mark("lis===22###sois===508###eois===517###lif===9###soif===289###eoif===298###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");continue;
}

else {
AKA_mark("lis===-22-###sois===-454-###eois===-45452-###lif===-9-###soif===-###eoif===-287-###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");
}

      if (AKA_mark("lis===24###sois===531###eois===618###lif===11###soif===312###eoif===399###ifc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && ((AKA_mark("lis===24###sois===531###eois===567###lif===11###soif===312###eoif===348###isc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && (arr[i] < *max_element(arr, arr + 26))) ||
          (AKA_mark("lis===25###sois===582###eois===618###lif===12###soif===363###eoif===399###isc===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)") && (arr[i] > *max_element(arr, arr + 26)))))
        {
AKA_mark("lis===26###sois===629###eois===642###lif===13###soif===410###eoif===423###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");return false;
}

else {
AKA_mark("lis===-24-###sois===-531-###eois===-53187-###lif===-11-###soif===-###eoif===-399-###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");
}
    }
    AKA_mark("lis===28###sois===655###eois===667###lif===15###soif===436###eoif===448###ins===true###function===.\\p8\\1941.cpp\\Solution\\areOccurrencesEqual(string)");return true;
  }
};

#endif
