/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0509_FIBONACCI_NUMBER_0509_FIBONACCI_NUMBER_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0509_FIBONACCI_NUMBER_0509_FIBONACCI_NUMBER_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <bits/stdc++.h>
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
    
    /** Instrumented function fib(int) */
int fib(int n) /* << Aka begin of function int fib(int n) >> */
{AKA_mark("Calling: .\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===258###eois===283###lif===2###soif===32###eoif===57###ins===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");vector<int> dp(n + 1, 0);
        
        if(AKA_mark("lis===18###sois===306###eois===312###lif===4###soif===80###eoif===86###ifc===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)") && (AKA_mark("lis===18###sois===306###eois===312###lif===4###soif===80###eoif===86###isc===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)") && (n <= 1)))                                  {
AKA_mark("lis===18###sois===347###eois===356###lif===4###soif===121###eoif===130###ins===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");return n;
}

else {
AKA_mark("lis===-18-###sois===-306-###eois===-3066-###lif===-4-###soif===-###eoif===-86-###ins===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");
}
        
        AKA_mark("lis===20###sois===376###eois===386###lif===6###soif===150###eoif===160###ins===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");dp[0] = 0;
        AKA_mark("lis===21###sois===396###eois===406###lif===7###soif===170###eoif===180###ins===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");dp[1] = 1;
        
        int AKA_BLOCK_LOOP_426 = 0;
    AKA_mark("lis===23###sois===430###eois===438###lif===9###soif===204###eoif===212###ins===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");
for(int i=2; AKA_mark("lis===23###sois===439###eois===443###lif===9###soif===213###eoif===217###ifc===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)") && (AKA_mark("lis===23###sois===439###eois===443###lif===9###soif===213###eoif===217###isc===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)") && (i<=n)); ({AKA_mark("lis===23###sois===445###eois===448###lif===9###soif===219###eoif===222###ins===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");i++;}))                     {
AKA_mark("lis===23###sois===470###eois===496###lif===9###soif===244###eoif===270###ins===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");dp[i] = dp[i-1] + dp[i-2];
}

        
        AKA_mark("lis===25###sois===516###eois===529###lif===11###soif===290###eoif===303###ins===true###function===.\\p6\\0509-fibonacci-number\\0509-fibonacci-number.cpp\\Solution\\fib(int)");return dp[n];
    }
    
};
#endif
