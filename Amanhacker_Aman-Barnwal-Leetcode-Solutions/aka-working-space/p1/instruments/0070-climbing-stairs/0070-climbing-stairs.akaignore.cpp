/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0070_CLIMBING_STAIRS_0070_CLIMBING_STAIRS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0070_CLIMBING_STAIRS_0070_CLIMBING_STAIRS_CPP
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
    
    /** Instrumented function climbStairs(int) */
int climbStairs(int n) /* << Aka begin of function int climbStairs(int n) >> */
{AKA_mark("Calling: .\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===266###eois===291###lif===2###soif===40###eoif===65###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");vector<int> dp(n + 1, 0);

        if(AKA_mark("lis===18###sois===306###eois===312###lif===4###soif===80###eoif===86###ifc===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)") && (AKA_mark("lis===18###sois===306###eois===312###lif===4###soif===80###eoif===86###isc===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)") && (n <= 2)))                      {
AKA_mark("lis===18###sois===335###eois===344###lif===4###soif===109###eoif===118###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");return n;
}

else {
AKA_mark("lis===-18-###sois===-306-###eois===-3066-###lif===-4-###soif===-###eoif===-86-###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");
}
        
        // Base Condition
        AKA_mark("lis===21###sois===391###eois===401###lif===7###soif===165###eoif===175###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");dp[0] = 0;
        AKA_mark("lis===22###sois===411###eois===421###lif===8###soif===185###eoif===195###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");dp[1] = 1;
        AKA_mark("lis===23###sois===431###eois===441###lif===9###soif===205###eoif===215###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");dp[2] = 2;
        

        
        int AKA_BLOCK_LOOP_473 = 0;
    AKA_mark("lis===27###sois===477###eois===485###lif===13###soif===251###eoif===259###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");
for(int i=3; AKA_mark("lis===27###sois===486###eois===490###lif===13###soif===260###eoif===264###ifc===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)") && (AKA_mark("lis===27###sois===486###eois===490###lif===13###soif===260###eoif===264###isc===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)") && (i<=n)); ({AKA_mark("lis===27###sois===492###eois===495###lif===13###soif===266###eoif===269###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");i++;})) {
        AKA_BLOCK_LOOP_473++;
        if (AKA_BLOCK_LOOP_473 > 1000) {
            //break;
        }
            AKA_mark("lis===28###sois===512###eois===538###lif===14###soif===286###eoif===312###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");dp[i] = dp[i-1] + dp[i-2];
        }
    
        AKA_mark("lis===31###sois===565###eois===578###lif===17###soif===339###eoif===352###ins===true###function===.\\p1\\0070-climbing-stairs\\0070-climbing-stairs.cpp\\Solution\\climbStairs(int)");return dp[n];
    }
    
};
#endif
