/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_338_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_338_CPP
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
// Approach: Used Brian Kernighan’s Algorithm for this question.
// Example-   n =  10 (1010)
//    count = 0

//    Since 10 > 0, subtract by 1 and do bitwise & with (9-1)
//    n = 10&9  (1010 & 1001)
//    n = 8
//    count  = 1

//    Since 8 > 0, subtract by 1 and do bitwise & with (8-1)
//    n = 8&7  (1000 & 0111)
//    n = 0
//    count = 2

//    Since n = 0, return count which is 2 now

#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
public:
  /** Instrumented function countthesetbits(int) */
int countthesetbits(int n) /* << Aka begin of function int countthesetbits(int n) >> */
{AKA_mark("Calling: .\\p5\\338.cpp\\Solution\\countthesetbits(int)");AKA_fCall++;
    AKA_mark("lis===29###sois===667###eois===677###lif===1###soif===34###eoif===44###ins===true###function===.\\p5\\338.cpp\\Solution\\countthesetbits(int)");int c = 0;
    int AKA_BLOCK_LOOP_683 = 0;
    while (AKA_mark("lis===30###sois===690###eois===691###lif===2###soif===57###eoif===58###ifc===true###function===.\\p5\\338.cpp\\Solution\\countthesetbits(int)") && (AKA_mark("lis===30###sois===690###eois===691###lif===2###soif===57###eoif===58###isc===true###function===.\\p5\\338.cpp\\Solution\\countthesetbits(int)") && (n))) {
        AKA_BLOCK_LOOP_683++;
        if (AKA_BLOCK_LOOP_683 > 1000) {
            //break;
        }
      AKA_mark("lis===31###sois===702###eois===718###lif===3###soif===69###eoif===85###ins===true###function===.\\p5\\338.cpp\\Solution\\countthesetbits(int)");n = n & (n - 1);
      AKA_mark("lis===32###sois===726###eois===730###lif===4###soif===93###eoif===97###ins===true###function===.\\p5\\338.cpp\\Solution\\countthesetbits(int)");c++;
    }
    AKA_mark("lis===34###sois===743###eois===752###lif===6###soif===110###eoif===119###ins===true###function===.\\p5\\338.cpp\\Solution\\countthesetbits(int)");return c;
  }
  /** Instrumented function countBits(int) */
vector<int> countBits(int n) /* << Aka begin of function vector<int> countBits(int n) >> */
{AKA_mark("Calling: .\\p5\\338.cpp\\Solution\\countBits(int)");AKA_fCall++;
    AKA_mark("lis===37###sois===797###eois===816###lif===1###soif===36###eoif===55###ins===true###function===.\\p5\\338.cpp\\Solution\\countBits(int)");vector<int> result;
    int AKA_BLOCK_LOOP_822 = 0;
    AKA_mark("lis===38###sois===827###eois===837###lif===2###soif===66###eoif===76###ins===true###function===.\\p5\\338.cpp\\Solution\\countBits(int)");
for (int i = 0; AKA_mark("lis===38###sois===838###eois===844###lif===2###soif===77###eoif===83###ifc===true###function===.\\p5\\338.cpp\\Solution\\countBits(int)") && (AKA_mark("lis===38###sois===838###eois===844###lif===2###soif===77###eoif===83###isc===true###function===.\\p5\\338.cpp\\Solution\\countBits(int)") && (i <= n)); ({AKA_mark("lis===38###sois===846###eois===849###lif===2###soif===85###eoif===88###ins===true###function===.\\p5\\338.cpp\\Solution\\countBits(int)");i++;})) {
        AKA_BLOCK_LOOP_822++;
        if (AKA_BLOCK_LOOP_822 > 1000) {
            //break;
        }
      AKA_mark("lis===39###sois===860###eois===897###lif===3###soif===99###eoif===136###ins===true###function===.\\p5\\338.cpp\\Solution\\countBits(int)");result.push_back(countthesetbits(i));
    }

    AKA_mark("lis===42###sois===912###eois===926###lif===6###soif===151###eoif===165###ins===true###function===.\\p5\\338.cpp\\Solution\\countBits(int)");return result;
  }
};
#endif
