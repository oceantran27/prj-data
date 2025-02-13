/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_204_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_204_CPP
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
  /** Instrumented function countPrimes(int) */
int countPrimes(int n) /* << Aka begin of function int countPrimes(int n) >> */
{AKA_mark("Calling: .\\p5\\204.cpp\\Solution\\countPrimes(int)");AKA_fCall++;
    if (AKA_mark("lis===13###sois===251###eois===256###lif===1###soif===34###eoif===39###ifc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (AKA_mark("lis===13###sois===251###eois===256###lif===1###soif===34###eoif===39###isc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (n < 2))) {
AKA_mark("lis===13###sois===258###eois===267###lif===1###soif===41###eoif===50###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");return 0;
}

else {
AKA_mark("lis===-13-###sois===-251-###eois===-2515-###lif===-1-###soif===-###eoif===-39-###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");
}
    AKA_mark("lis===14###sois===273###eois===305###lif===2###soif===56###eoif===88###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");vector<bool> Prime(n + 1, true);

    AKA_mark("lis===16###sois===313###eois===330###lif===4###soif===96###eoif===113###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");Prime[0] = false;
    AKA_mark("lis===17###sois===336###eois===353###lif===5###soif===119###eoif===136###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");Prime[1] = false;

    AKA_mark("lis===19###sois===361###eois===378###lif===7###soif===144###eoif===161###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");Prime[n] = false;

    int AKA_BLOCK_LOOP_386 = 0;
    AKA_mark("lis===21###sois===391###eois===401###lif===9###soif===174###eoif===184###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");
for (int p = 2; AKA_mark("lis===21###sois===402###eois===412###lif===9###soif===185###eoif===195###ifc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (AKA_mark("lis===21###sois===402###eois===412###lif===9###soif===185###eoif===195###isc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (p * p <= n)); ({AKA_mark("lis===21###sois===414###eois===417###lif===9###soif===197###eoif===200###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");p++;})) {
        AKA_BLOCK_LOOP_386++;
        if (AKA_BLOCK_LOOP_386 > 1000) {
            //break;
        }
      if (AKA_mark("lis===22###sois===432###eois===448###lif===10###soif===215###eoif===231###ifc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (AKA_mark("lis===22###sois===432###eois===448###lif===10###soif===215###eoif===231###isc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (Prime[p] == true))) {
        int AKA_BLOCK_LOOP_461 = 0;
    AKA_mark("lis===23###sois===466###eois===480###lif===11###soif===249###eoif===263###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");
for (int i = p * p; AKA_mark("lis===23###sois===481###eois===487###lif===11###soif===264###eoif===270###ifc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (AKA_mark("lis===23###sois===481###eois===487###lif===11###soif===264###eoif===270###isc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (i <= n)); ({AKA_mark("lis===23###sois===489###eois===495###lif===11###soif===272###eoif===278###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");i += p;})) {
        AKA_BLOCK_LOOP_461++;
        if (AKA_BLOCK_LOOP_461 > 1000) {
            //break;
        }
          AKA_mark("lis===24###sois===510###eois===527###lif===12###soif===293###eoif===310###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");Prime[i] = false;
        }
      }
else {
AKA_mark("lis===-22-###sois===-432-###eois===-43216-###lif===-10-###soif===-###eoif===-231-###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");
}
    }
    AKA_mark("lis===28###sois===560###eois===572###lif===16###soif===343###eoif===355###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");int ans = 0;
    for (auto element : Prime) {
AKA_mark("lis===29###sois===583###eois===595###lif===17###soif===366###eoif===378###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");
{
      if (AKA_mark("lis===30###sois===618###eois===625###lif===18###soif===401###eoif===408###ifc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (AKA_mark("lis===30###sois===618###eois===625###lif===18###soif===401###eoif===408###isc===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)") && (element))) {
        AKA_mark("lis===31###sois===638###eois===644###lif===19###soif===421###eoif===427###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");ans++;
      }
else {
AKA_mark("lis===-30-###sois===-618-###eois===-6187-###lif===-18-###soif===-###eoif===-408-###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");
}
    }}
AKA_mark("lis===29###sois===583###eois===595###lif===17###soif===366###eoif===378###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");

    AKA_mark("lis===34###sois===666###eois===677###lif===22###soif===449###eoif===460###ins===true###function===.\\p5\\204.cpp\\Solution\\countPrimes(int)");return ans;
  }
};

#endif
