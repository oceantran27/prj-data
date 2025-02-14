/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1009_COMPLEMENT_OF_BASE_10_INTEGER_1009_COMPLEMENT_OF_BASE_10_INTEGER_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1009_COMPLEMENT_OF_BASE_10_INTEGER_1009_COMPLEMENT_OF_BASE_10_INTEGER_CPP
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
    
    /** Instrumented function bitwiseComplement(int) */
int bitwiseComplement(int n) /* << Aka begin of function int bitwiseComplement(int n) >> */
{AKA_mark("Calling: .\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===272###eois===293###lif===2###soif===46###eoif===67###ins===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");int res = 0, mul = 1;
        
        if(AKA_mark("lis===18###sois===316###eois===322###lif===4###soif===90###eoif===96###ifc===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)") && (AKA_mark("lis===18###sois===316###eois===322###lif===4###soif===90###eoif===96###isc===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)") && (n == 0)))                                                      {
AKA_mark("lis===18###sois===377###eois===386###lif===4###soif===151###eoif===160###ins===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");return 1;
}

else {
AKA_mark("lis===-18-###sois===-316-###eois===-3166-###lif===-4-###soif===-###eoif===-96-###ins===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");
}
        
        int AKA_BLOCK_LOOP_406 = 0;
    while(AKA_mark("lis===20###sois===412###eois===417###lif===6###soif===186###eoif===191###ifc===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)") && (AKA_mark("lis===20###sois===412###eois===417###lif===6###soif===186###eoif===191###isc===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)") && (n > 0))) {
        AKA_BLOCK_LOOP_406++;
        if (AKA_BLOCK_LOOP_406 > 1000) {
            //break;
        }
            
            AKA_mark("lis===22###sois===448###eois===464###lif===8###soif===222###eoif===238###ins===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");int rem = n % 2;
            AKA_mark("lis===23###sois===478###eois===487###lif===9###soif===252###eoif===261###ins===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");rem ^= 1;
            
            AKA_mark("lis===25###sois===515###eois===532###lif===11###soif===289###eoif===306###ins===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");res += rem * mul;
            AKA_mark("lis===26###sois===546###eois===555###lif===12###soif===320###eoif===329###ins===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");mul *= 2;
            
            AKA_mark("lis===28###sois===583###eois===593###lif===14###soif===357###eoif===367###ins===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");n = n / 2;
        }
        
        AKA_mark("lis===31###sois===624###eois===635###lif===17###soif===398###eoif===409###ins===true###function===.\\p10\\1009-complement-of-base-10-integer\\1009-complement-of-base-10-integer.cpp\\Solution\\bitwiseComplement(int)");return res;
    }
    
};
#endif
