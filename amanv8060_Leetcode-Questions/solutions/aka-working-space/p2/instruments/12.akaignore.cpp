/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_12_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_12_CPP
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
using namespace std;

class Solution {
 public:
public:
  /** Instrumented function intToRoman(int) */
string intToRoman(int num) /* << Aka begin of function string intToRoman(int num) >> */
{AKA_mark("Calling: .\\p2\\12.cpp\\Solution\\intToRoman(int)");AKA_fCall++;
    // 1000, 2000, 3000
    AKA_mark("lis===14###sois===252###eois===288###lif===2###soif===59###eoif===95###ins===true###function===.\\p2\\12.cpp\\Solution\\intToRoman(int)");string M[] = {"", "M", "MM", "MMM"};
    // 100, 200, 300, .. 900
    AKA_mark("lis===16###sois===324###eois===398###lif===4###soif===131###eoif===205###ins===true###function===.\\p2\\12.cpp\\Solution\\intToRoman(int)");string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    // 10, 20, ... 90
    AKA_mark("lis===18###sois===427###eois===501###lif===6###soif===234###eoif===308###ins===true###function===.\\p2\\12.cpp\\Solution\\intToRoman(int)");string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    // 1, 2, ... 9
    AKA_mark("lis===20###sois===527###eois===601###lif===8###soif===334###eoif===408###ins===true###function===.\\p2\\12.cpp\\Solution\\intToRoman(int)");string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    AKA_mark("lis===21###sois===607###eois===700###lif===9###soif===414###eoif===507###ins===true###function===.\\p2\\12.cpp\\Solution\\intToRoman(int)");return M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] +
           I[num % 10];
  }
};

#endif
