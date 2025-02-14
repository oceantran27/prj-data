/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1047_REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_1047_REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1047_REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_1047_REMOVE_ALL_ADJACENT_DUPLICATES_IN_STRING_CPP
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
    
    /** Instrumented function removeDuplicates(string) */
string removeDuplicates(string s) /* << Aka begin of function string removeDuplicates(string s) >> */
{AKA_mark("Calling: .\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===277###eois===293###lif===2###soif===51###eoif===67###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");string res = "";
        
        AKA_mark("lis===18###sois===313###eois===327###lif===4###soif===87###eoif===101###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");stack<char> w;
        
        int AKA_BLOCK_LOOP_347 = 0;
    AKA_mark("lis===20###sois===351###eois===359###lif===6###soif===125###eoif===133###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");
for(int i=0; AKA_mark("lis===20###sois===360###eois===372###lif===6###soif===134###eoif===146###ifc===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)") && (AKA_mark("lis===20###sois===360###eois===372###lif===6###soif===134###eoif===146###isc===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)") && (i<s.length())); ({AKA_mark("lis===20###sois===374###eois===377###lif===6###soif===148###eoif===151###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");i++;})) {
        AKA_BLOCK_LOOP_347++;
        if (AKA_BLOCK_LOOP_347 > 1000) {
            //break;
        }
            
            if(AKA_mark("lis===22###sois===411###eois===428###lif===8###soif===185###eoif===202###ifc===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)") && (AKA_mark("lis===22###sois===411###eois===428###lif===8###soif===185###eoif===202###isc===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)") && (w.empty() == true)))                           {
AKA_mark("lis===22###sois===456###eois===469###lif===8###soif===230###eoif===243###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");w.push(s[i]);
}

            else {
                
                AKA_mark("lis===25###sois===525###eois===544###lif===11###soif===299###eoif===318###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");char top = w.top();
                
                if(AKA_mark("lis===27###sois===583###eois===594###lif===13###soif===357###eoif===368###ifc===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)") && (AKA_mark("lis===27###sois===583###eois===594###lif===13###soif===357###eoif===368###isc===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)") && (top == s[i])))                             {
AKA_mark("lis===27###sois===624###eois===632###lif===13###soif===398###eoif===406###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");w.pop();
}
 
                else                                        {
AKA_mark("lis===28###sois===695###eois===708###lif===14###soif===469###eoif===482###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");w.push(s[i]);
}

            }
        }
        
        int AKA_BLOCK_LOOP_754 = 0;
    while(AKA_mark("lis===32###sois===760###eois===778###lif===18###soif===534###eoif===552###ifc===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)") && (AKA_mark("lis===32###sois===760###eois===778###lif===18###soif===534###eoif===552###isc===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)") && (w.empty() == false))) {
        AKA_BLOCK_LOOP_754++;
        if (AKA_BLOCK_LOOP_754 > 1000) {
            //break;
        }
            AKA_mark("lis===33###sois===795###eois===810###lif===19###soif===569###eoif===584###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");res += w.top();
            AKA_mark("lis===34###sois===824###eois===832###lif===20###soif===598###eoif===606###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");w.pop();
        }
        
        AKA_mark("lis===37###sois===863###eois===895###lif===23###soif===637###eoif===669###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");reverse(res.begin(), res.end());
        AKA_mark("lis===38###sois===905###eois===916###lif===24###soif===679###eoif===690###ins===true###function===.\\p12\\1047-remove-all-adjacent-duplicates-in-string\\1047-remove-all-adjacent-duplicates-in-string.cpp\\Solution\\removeDuplicates(string)");return res;
    }
    
};
#endif
