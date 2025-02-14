/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1056_CONFUSING_NUMBER_1056_CONFUSING_NUMBER_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1056_CONFUSING_NUMBER_1056_CONFUSING_NUMBER_CPP
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
  
    /** Instrumented function confusingNumber(int) */
bool confusingNumber(int num) /* << Aka begin of function bool confusingNumber(int num) >> */
{AKA_mark("Calling: .\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===271###eois===297###lif===2###soif===47###eoif===73###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");string s = to_string(num);
        
        AKA_mark("lis===18###sois===317###eois===336###lif===4###soif===93###eoif===112###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");int n = s.length();
        AKA_mark("lis===19###sois===346###eois===361###lif===5###soif===122###eoif===137###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");string res = s;
        
        int AKA_BLOCK_LOOP_381 = 0;
    AKA_mark("lis===21###sois===385###eois===393###lif===7###soif===161###eoif===169###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");
for(int i=0; AKA_mark("lis===21###sois===394###eois===397###lif===7###soif===170###eoif===173###ifc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (AKA_mark("lis===21###sois===394###eois===397###lif===7###soif===170###eoif===173###isc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (i<n)); ({AKA_mark("lis===21###sois===399###eois===402###lif===7###soif===175###eoif===178###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");i++;})) {
        AKA_BLOCK_LOOP_381++;
        if (AKA_BLOCK_LOOP_381 > 1000) {
            //break;
        }
           
            if(AKA_mark("lis===23###sois===435###eois===446###lif===9###soif===211###eoif===222###ifc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (AKA_mark("lis===23###sois===435###eois===446###lif===9###soif===211###eoif===222###isc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (s[i] == '6')))                                         {
AKA_mark("lis===23###sois===488###eois===499###lif===9###soif===264###eoif===275###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");s[i] = '9';
}

            else {
if(AKA_mark("lis===24###sois===521###eois===532###lif===10###soif===297###eoif===308###ifc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (AKA_mark("lis===24###sois===521###eois===532###lif===10###soif===297###eoif===308###isc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (s[i] == '9')))                                    {
AKA_mark("lis===24###sois===569###eois===580###lif===10###soif===345###eoif===356###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");s[i] = '6';
}

            else {
if(AKA_mark("lis===25###sois===602###eois===643###lif===11###soif===378###eoif===419###ifc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (((AKA_mark("lis===25###sois===602###eois===613###lif===11###soif===378###eoif===389###isc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (s[i] == '0')) || (AKA_mark("lis===25###sois===617###eois===628###lif===11###soif===393###eoif===404###isc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (s[i] == '8'))) || (AKA_mark("lis===25###sois===632###eois===643###lif===11###soif===408###eoif===419###isc===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)") && (s[i] == '1'))))      {
AKA_mark("lis===25###sois===650###eois===659###lif===11###soif===426###eoif===435###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");continue;
}

            else                                                    {
AKA_mark("lis===26###sois===729###eois===742###lif===12###soif===505###eoif===518###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");return false;
}

}

}

        }
        
        AKA_mark("lis===29###sois===773###eois===805###lif===15###soif===549###eoif===581###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");reverse(res.begin(), res.end());
        AKA_mark("lis===30###sois===815###eois===833###lif===16###soif===591###eoif===609###ins===true###function===.\\p12\\1056-confusing-number\\1056-confusing-number.cpp\\Solution\\confusingNumber(int)");return (res != s);
    }
    
};
#endif
