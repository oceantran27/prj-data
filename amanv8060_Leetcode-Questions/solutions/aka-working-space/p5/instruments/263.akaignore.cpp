/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_263_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_263_CPP
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
  /** Instrumented function isUgly(int) */
bool isUgly(int n) /* << Aka begin of function bool isUgly(int n) >> */
{AKA_mark("Calling: .\\p5\\263.cpp\\Solution\\isUgly(int)");AKA_fCall++;
    if (AKA_mark("lis===14###sois===249###eois===255###lif===1###soif===30###eoif===36###ifc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (AKA_mark("lis===14###sois===249###eois===255###lif===1###soif===30###eoif===36###isc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (n == 0))) {
      AKA_mark("lis===15###sois===266###eois===279###lif===2###soif===47###eoif===60###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");return false;
    }
else {
AKA_mark("lis===-14-###sois===-249-###eois===-2496-###lif===-1-###soif===-###eoif===-36-###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");
}
    if (AKA_mark("lis===17###sois===296###eois===302###lif===4###soif===77###eoif===83###ifc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (AKA_mark("lis===17###sois===296###eois===302###lif===4###soif===77###eoif===83###isc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (n == 1))) {
      AKA_mark("lis===18###sois===313###eois===325###lif===5###soif===94###eoif===106###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");return true;
    }
else {
AKA_mark("lis===-17-###sois===-296-###eois===-2966-###lif===-4-###soif===-###eoif===-83-###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");
}
    if (AKA_mark("lis===20###sois===342###eois===352###lif===7###soif===123###eoif===133###ifc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (AKA_mark("lis===20###sois===342###eois===352###lif===7###soif===123###eoif===133###isc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (n % 2 == 0))) {
      AKA_mark("lis===21###sois===363###eois===384###lif===8###soif===144###eoif===165###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");return isUgly(n / 2);
    }
else {
AKA_mark("lis===-20-###sois===-342-###eois===-34210-###lif===-7-###soif===-###eoif===-133-###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");
}
    if (AKA_mark("lis===23###sois===401###eois===411###lif===10###soif===182###eoif===192###ifc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (AKA_mark("lis===23###sois===401###eois===411###lif===10###soif===182###eoif===192###isc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (n % 3 == 0))) {
      AKA_mark("lis===24###sois===422###eois===443###lif===11###soif===203###eoif===224###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");return isUgly(n / 3);
    }
else {
AKA_mark("lis===-23-###sois===-401-###eois===-40110-###lif===-10-###soif===-###eoif===-192-###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");
}
    if (AKA_mark("lis===26###sois===460###eois===470###lif===13###soif===241###eoif===251###ifc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (AKA_mark("lis===26###sois===460###eois===470###lif===13###soif===241###eoif===251###isc===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)") && (n % 5 == 0))) {
      AKA_mark("lis===27###sois===481###eois===502###lif===14###soif===262###eoif===283###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");return isUgly(n / 5);
    }
else {
AKA_mark("lis===-26-###sois===-460-###eois===-46010-###lif===-13-###soif===-###eoif===-251-###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");
}
    AKA_mark("lis===29###sois===515###eois===528###lif===16###soif===296###eoif===309###ins===true###function===.\\p5\\263.cpp\\Solution\\isUgly(int)");return false;
  }
};

#endif
