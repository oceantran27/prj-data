/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_342_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_342_CPP
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
  /** Instrumented function isPowerOfFour(int) */
bool isPowerOfFour(int n) /* << Aka begin of function bool isPowerOfFour(int n) >> */
{AKA_mark("Calling: .\\p5\\342.cpp\\Solution\\isPowerOfFour(int)");AKA_fCall++;
    if (AKA_mark("lis===14###sois===256###eois===262###lif===1###soif===37###eoif===43###ifc===true###function===.\\p5\\342.cpp\\Solution\\isPowerOfFour(int)") && (AKA_mark("lis===14###sois===256###eois===262###lif===1###soif===37###eoif===43###isc===true###function===.\\p5\\342.cpp\\Solution\\isPowerOfFour(int)") && (n <= 0))) {
AKA_mark("lis===14###sois===264###eois===277###lif===1###soif===45###eoif===58###ins===true###function===.\\p5\\342.cpp\\Solution\\isPowerOfFour(int)");return false;
}

else {
AKA_mark("lis===-14-###sois===-256-###eois===-2566-###lif===-1-###soif===-###eoif===-43-###ins===true###function===.\\p5\\342.cpp\\Solution\\isPowerOfFour(int)");
}
    AKA_mark("lis===15###sois===283###eois===294###lif===2###soif===64###eoif===75###ins===true###function===.\\p5\\342.cpp\\Solution\\isPowerOfFour(int)");n = abs(n);
    int AKA_BLOCK_LOOP_300 = 0;
    while (AKA_mark("lis===16###sois===307###eois===317###lif===3###soif===88###eoif===98###ifc===true###function===.\\p5\\342.cpp\\Solution\\isPowerOfFour(int)") && (AKA_mark("lis===16###sois===307###eois===317###lif===3###soif===88###eoif===98###isc===true###function===.\\p5\\342.cpp\\Solution\\isPowerOfFour(int)") && (n % 4 == 0))) {
AKA_mark("lis===16###sois===319###eois===329###lif===3###soif===100###eoif===110###ins===true###function===.\\p5\\342.cpp\\Solution\\isPowerOfFour(int)");n = n / 4;
}

    AKA_mark("lis===17###sois===335###eois===349###lif===4###soif===116###eoif===130###ins===true###function===.\\p5\\342.cpp\\Solution\\isPowerOfFour(int)");return n == 1;
  }
};
#endif
