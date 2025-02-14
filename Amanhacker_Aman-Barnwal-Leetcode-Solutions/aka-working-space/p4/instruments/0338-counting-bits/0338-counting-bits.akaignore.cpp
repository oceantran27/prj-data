/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0338_COUNTING_BITS_0338_COUNTING_BITS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0338_COUNTING_BITS_0338_COUNTING_BITS_CPP
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
    
    /** Instrumented function countBits(int) */
vector<int> countBits(int n) /* << Aka begin of function vector<int> countBits(int n) >> */
{AKA_mark("Calling: .\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===272###eois===288###lif===2###soif===46###eoif===62###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");vector<int> res;
        
        if(AKA_mark("lis===18###sois===311###eois===317###lif===4###soif===85###eoif===91###ifc===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)") && (AKA_mark("lis===18###sois===311###eois===317###lif===4###soif===85###eoif===91###isc===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)") && (n == 0)))                          {
AKA_mark("lis===18###sois===344###eois===355###lif===4###soif===118###eoif===129###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");return {0};
}

else {
AKA_mark("lis===-18-###sois===-311-###eois===-3116-###lif===-4-###soif===-###eoif===-91-###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");
}
        if(AKA_mark("lis===19###sois===368###eois===374###lif===5###soif===142###eoif===148###ifc===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)") && (AKA_mark("lis===19###sois===368###eois===374###lif===5###soif===142###eoif===148###isc===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)") && (n == 1)))                          {
AKA_mark("lis===19###sois===401###eois===415###lif===5###soif===175###eoif===189###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");return {0, 1};
}

else {
AKA_mark("lis===-19-###sois===-368-###eois===-3686-###lif===-5-###soif===-###eoif===-148-###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");
}
        
        AKA_mark("lis===21###sois===435###eois===452###lif===7###soif===209###eoif===226###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");res.push_back(0);
        AKA_mark("lis===22###sois===462###eois===479###lif===8###soif===236###eoif===253###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");res.push_back(1);
        
        int AKA_BLOCK_LOOP_499 = 0;
    AKA_mark("lis===24###sois===503###eois===511###lif===10###soif===277###eoif===285###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");
for(int i=2; AKA_mark("lis===24###sois===512###eois===516###lif===10###soif===286###eoif===290###ifc===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)") && (AKA_mark("lis===24###sois===512###eois===516###lif===10###soif===286###eoif===290###isc===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)") && (i<=n)); ({AKA_mark("lis===24###sois===518###eois===521###lif===10###soif===292###eoif===295###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");i++;})) {
        AKA_BLOCK_LOOP_499++;
        if (AKA_BLOCK_LOOP_499 > 1000) {
            //break;
        }
            
            // Binary Representation of number i
            // No.of 1's bits in number i
            
            AKA_mark("lis===29###sois===659###eois===682###lif===15###soif===433###eoif===456###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");int num = i, count = 0;
            
            int AKA_BLOCK_LOOP_710 = 0;
    while(AKA_mark("lis===31###sois===716###eois===723###lif===17###soif===490###eoif===497###ifc===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)") && (AKA_mark("lis===31###sois===716###eois===723###lif===17###soif===490###eoif===497###isc===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)") && (num > 0))) {
        AKA_BLOCK_LOOP_710++;
        if (AKA_BLOCK_LOOP_710 > 1000) {
            //break;
        }
                AKA_mark("lis===32###sois===744###eois===763###lif===18###soif===518###eoif===537###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");count += (num % 2);
                AKA_mark("lis===33###sois===781###eois===795###lif===19###soif===555###eoif===569###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");num = num / 2;
            }
            
            AKA_mark("lis===36###sois===838###eois===859###lif===22###soif===612###eoif===633###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");res.push_back(count);
        }
        
        AKA_mark("lis===39###sois===890###eois===901###lif===25###soif===664###eoif===675###ins===true###function===.\\p4\\0338-counting-bits\\0338-counting-bits.cpp\\Solution\\countBits(int)");return res;
    }
    
};
#endif
