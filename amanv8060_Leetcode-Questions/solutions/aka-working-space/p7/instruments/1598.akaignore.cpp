/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1598_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1598_CPP
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
  /** Instrumented function minOperations(vector<string>&) */
int minOperations(vector<string>& logs) /* << Aka begin of function int minOperations(vector<string>& logs) >> */
{AKA_mark("Calling: .\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===266###eois===281###lif===1###soif===47###eoif===62###ins===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)");int result = 0;
    int AKA_BLOCK_LOOP_287 = 0;
    AKA_mark("lis===15###sois===292###eois===302###lif===2###soif===73###eoif===83###ins===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)");
for (int i = 0; AKA_mark("lis===15###sois===303###eois===318###lif===2###soif===84###eoif===99###ifc===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)") && (AKA_mark("lis===15###sois===303###eois===318###lif===2###soif===84###eoif===99###isc===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)") && (i < logs.size())); ({AKA_mark("lis===15###sois===320###eois===323###lif===2###soif===101###eoif===104###ins===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)");i++;})) {
        AKA_BLOCK_LOOP_287++;
        if (AKA_BLOCK_LOOP_287 > 1000) {
            //break;
        }
      if (AKA_mark("lis===16###sois===338###eois===354###lif===3###soif===119###eoif===135###ifc===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)") && (AKA_mark("lis===16###sois===338###eois===354###lif===3###soif===119###eoif===135###isc===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)") && (logs[i] == "../"))) {
        if (AKA_mark("lis===17###sois===371###eois===382###lif===4###soif===152###eoif===163###ifc===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)") && (AKA_mark("lis===17###sois===371###eois===382###lif===4###soif===152###eoif===163###isc===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)") && (result != 0))) {
          AKA_mark("lis===18###sois===397###eois===406###lif===5###soif===178###eoif===187###ins===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)");result--;
        }
else {
AKA_mark("lis===-17-###sois===-371-###eois===-37111-###lif===-4-###soif===-###eoif===-163-###ins===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)");
}
      } else {
if (AKA_mark("lis===20###sois===436###eois===451###lif===7###soif===217###eoif===232###ifc===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)") && (AKA_mark("lis===20###sois===436###eois===451###lif===7###soif===217###eoif===232###isc===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)") && (logs[i] != "./"))) {
        AKA_mark("lis===21###sois===464###eois===473###lif===8###soif===245###eoif===254###ins===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)");result++;
      }
else {
AKA_mark("lis===-20-###sois===-436-###eois===-43615-###lif===-7-###soif===-###eoif===-232-###ins===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)");
}
}

    }
    AKA_mark("lis===24###sois===495###eois===509###lif===11###soif===276###eoif===290###ins===true###function===.\\p7\\1598.cpp\\Solution\\minOperations(vector<string>&)");return result;
  }
};
#endif
