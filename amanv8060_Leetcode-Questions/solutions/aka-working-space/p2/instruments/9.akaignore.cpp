/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_9_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_9_CPP
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
  /** Instrumented function isPalindrome(int) */
bool isPalindrome(int x) /* << Aka begin of function bool isPalindrome(int x) >> */
{AKA_mark("Calling: .\\p2\\9.cpp\\Solution\\isPalindrome(int)");AKA_fCall++;
    AKA_mark("lis===14###sois===251###eois===286###lif===1###soif===32###eoif===67###ins===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)");long int temp1 = x, temp2, rev = 0;

    if (AKA_mark("lis===16###sois===298###eois===303###lif===3###soif===79###eoif===84###ifc===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)") && (AKA_mark("lis===16###sois===298###eois===303###lif===3###soif===79###eoif===84###isc===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)") && (x < 0))) {
      AKA_mark("lis===17###sois===314###eois===327###lif===4###soif===95###eoif===108###ins===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)");return false;
    }

    else {
      int AKA_BLOCK_LOOP_356 = 0;
    while (AKA_mark("lis===21###sois===363###eois===372###lif===8###soif===144###eoif===153###ifc===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)") && (AKA_mark("lis===21###sois===363###eois===372###lif===8###soif===144###eoif===153###isc===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)") && (temp1 > 0))) {
        AKA_BLOCK_LOOP_356++;
        if (AKA_BLOCK_LOOP_356 > 1000) {
            //break;
        }
        AKA_mark("lis===22###sois===385###eois===404###lif===9###soif===166###eoif===185###ins===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)");temp2 = temp1 % 10;
        AKA_mark("lis===23###sois===414###eois===437###lif===10###soif===195###eoif===218###ins===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)");rev = rev * 10 + temp2;
        AKA_mark("lis===24###sois===447###eois===459###lif===11###soif===228###eoif===240###ins===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)");temp1 /= 10;
      }
    }
    if (AKA_mark("lis===27###sois===485###eois===493###lif===14###soif===266###eoif===274###ifc===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)") && (AKA_mark("lis===27###sois===485###eois===493###lif===14###soif===266###eoif===274###isc===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)") && (rev == x)))
      {
AKA_mark("lis===28###sois===502###eois===514###lif===15###soif===283###eoif===295###ins===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)");return true;
}

    else
      {
AKA_mark("lis===30###sois===532###eois===545###lif===17###soif===313###eoif===326###ins===true###function===.\\p2\\9.cpp\\Solution\\isPalindrome(int)");return false;
}

  }
};

#endif
