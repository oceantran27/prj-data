/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1758_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1758_CPP
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
  /** Instrumented function minOperations(string) */
int minOperations(string s) /* << Aka begin of function int minOperations(string s) >> */
{AKA_mark("Calling: .\\p7\\1758.cpp\\Solution\\minOperations(string)");AKA_fCall++;
    AKA_mark("lis===14###sois===254###eois===268###lif===1###soif===35###eoif===49###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");int count = 0;
    AKA_mark("lis===15###sois===274###eois===293###lif===2###soif===55###eoif===74###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");int n = s.length();
    if (AKA_mark("lis===16###sois===303###eois===314###lif===3###soif===84###eoif===95###ifc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (AKA_mark("lis===16###sois===303###eois===314###lif===3###soif===84###eoif===95###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (s[0] == '0'))) {
      int AKA_BLOCK_LOOP_325 = 0;
    AKA_mark("lis===17###sois===330###eois===340###lif===4###soif===111###eoif===121###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");
for (int i = 1; AKA_mark("lis===17###sois===341###eois===347###lif===4###soif===122###eoif===128###ifc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (AKA_mark("lis===17###sois===341###eois===347###lif===4###soif===122###eoif===128###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (i <= n)); ({AKA_mark("lis===17###sois===349###eois===352###lif===4###soif===130###eoif===133###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");i++;})) {
        AKA_BLOCK_LOOP_325++;
        if (AKA_BLOCK_LOOP_325 > 1000) {
            //break;
        }
        if (AKA_mark("lis===18###sois===369###eois===398###lif===5###soif===150###eoif===179###ifc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && ((AKA_mark("lis===18###sois===369###eois===379###lif===5###soif===150###eoif===160###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (i % 2 == 0)) && (AKA_mark("lis===18###sois===383###eois===398###lif===5###soif===164###eoif===179###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (s[i - 1] == '1')))) {
          AKA_mark("lis===19###sois===413###eois===421###lif===6###soif===194###eoif===202###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");count++;
        } else {
if (AKA_mark("lis===20###sois===442###eois===471###lif===7###soif===223###eoif===252###ifc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && ((AKA_mark("lis===20###sois===442###eois===452###lif===7###soif===223###eoif===233###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (i % 2 == 1)) && (AKA_mark("lis===20###sois===456###eois===471###lif===7###soif===237###eoif===252###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (s[i - 1] == '0')))) {
          AKA_mark("lis===21###sois===486###eois===494###lif===8###soif===267###eoif===275###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");count++;
        }
else {
AKA_mark("lis===-20-###sois===-442-###eois===-44229-###lif===-7-###soif===-###eoif===-252-###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");
}
}

      }
    } else {
      int AKA_BLOCK_LOOP_536 = 0;
    AKA_mark("lis===25###sois===541###eois===551###lif===12###soif===322###eoif===332###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");
for (int i = 1; AKA_mark("lis===25###sois===552###eois===558###lif===12###soif===333###eoif===339###ifc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (AKA_mark("lis===25###sois===552###eois===558###lif===12###soif===333###eoif===339###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (i <= n)); ({AKA_mark("lis===25###sois===560###eois===563###lif===12###soif===341###eoif===344###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");i++;})) {
        AKA_BLOCK_LOOP_536++;
        if (AKA_BLOCK_LOOP_536 > 1000) {
            //break;
        }
        if (AKA_mark("lis===26###sois===580###eois===609###lif===13###soif===361###eoif===390###ifc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && ((AKA_mark("lis===26###sois===580###eois===590###lif===13###soif===361###eoif===371###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (i % 2 == 0)) && (AKA_mark("lis===26###sois===594###eois===609###lif===13###soif===375###eoif===390###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (s[i - 1] == '0')))) {
          AKA_mark("lis===27###sois===624###eois===632###lif===14###soif===405###eoif===413###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");count++;
        }
else {
AKA_mark("lis===-26-###sois===-580-###eois===-58029-###lif===-13-###soif===-###eoif===-390-###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");
}
        if (AKA_mark("lis===29###sois===657###eois===686###lif===16###soif===438###eoif===467###ifc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && ((AKA_mark("lis===29###sois===657###eois===667###lif===16###soif===438###eoif===448###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (i % 2 == 1)) && (AKA_mark("lis===29###sois===671###eois===686###lif===16###soif===452###eoif===467###isc===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)") && (s[i - 1] == '1')))) {
          AKA_mark("lis===30###sois===701###eois===709###lif===17###soif===482###eoif===490###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");count++;
        }
else {
AKA_mark("lis===-29-###sois===-657-###eois===-65729-###lif===-16-###soif===-###eoif===-467-###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");
}
      }
    }

    AKA_mark("lis===35###sois===744###eois===773###lif===22###soif===525###eoif===554###ins===true###function===.\\p7\\1758.cpp\\Solution\\minOperations(string)");return min(count, n - count);
  }
};

#endif
