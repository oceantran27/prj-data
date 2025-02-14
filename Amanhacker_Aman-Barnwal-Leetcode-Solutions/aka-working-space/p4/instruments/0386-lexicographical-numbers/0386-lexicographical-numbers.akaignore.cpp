/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0386_LEXICOGRAPHICAL_NUMBERS_0386_LEXICOGRAPHICAL_NUMBERS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0386_LEXICOGRAPHICAL_NUMBERS_0386_LEXICOGRAPHICAL_NUMBERS_CPP
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
    
    /** Instrumented function dfs(int,int,vector<int>&) */
void dfs(int i, int n, vector<int> &res) /* << Aka begin of function void dfs(int i, int n, vector<int> &res) >> */
{AKA_mark("Calling: .\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)");AKA_fCall++;
        
        if(AKA_mark("lis===16###sois===291###eois===296###lif===2###soif===65###eoif===70###ifc===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)") && (AKA_mark("lis===16###sois===291###eois===296###lif===2###soif===65###eoif===70###isc===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)") && (i > n)))                       {
AKA_mark("lis===16###sois===320###eois===327###lif===2###soif===94###eoif===101###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)");return;
}

else {
AKA_mark("lis===-16-###sois===-291-###eois===-2915-###lif===-2-###soif===-###eoif===-70-###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)");
}
        
        AKA_mark("lis===18###sois===347###eois===364###lif===4###soif===121###eoif===138###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)");res.push_back(i);
        
        int AKA_BLOCK_LOOP_384 = 0;
    AKA_mark("lis===20###sois===388###eois===396###lif===6###soif===162###eoif===170###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)");
for(int j=0; AKA_mark("lis===20###sois===397###eois===401###lif===6###soif===171###eoif===175###ifc===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)") && (AKA_mark("lis===20###sois===397###eois===401###lif===6###soif===171###eoif===175###isc===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)") && (j<=9)); ({AKA_mark("lis===20###sois===403###eois===406###lif===6###soif===177###eoif===180###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)");j++;})) {
        AKA_BLOCK_LOOP_384++;
        if (AKA_BLOCK_LOOP_384 > 1000) {
            //break;
        }
            AKA_mark("lis===21###sois===423###eois===447###lif===7###soif===197###eoif===221###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)");dfs(10 * i + j, n, res);    
        }
        
        AKA_mark("lis===24###sois===482###eois===489###lif===10###soif===256###eoif===263###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\dfs(int,int,vector<int>&)");return;
    }
    
    /** Instrumented function lexicalOrder(int) */
vector<int> lexicalOrder(int n) /* << Aka begin of function vector<int> lexicalOrder(int n) >> */
{AKA_mark("Calling: .\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\lexicalOrder(int)");AKA_fCall++;
    
        AKA_mark("lis===29###sois===557###eois===573###lif===2###soif===49###eoif===65###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\lexicalOrder(int)");vector<int> res;

        int AKA_BLOCK_LOOP_585 = 0;
    AKA_mark("lis===31###sois===589###eois===597###lif===4###soif===81###eoif===89###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\lexicalOrder(int)");
for(int i=1; AKA_mark("lis===31###sois===598###eois===602###lif===4###soif===90###eoif===94###ifc===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\lexicalOrder(int)") && (AKA_mark("lis===31###sois===598###eois===602###lif===4###soif===90###eoif===94###isc===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\lexicalOrder(int)") && (i<=9)); ({AKA_mark("lis===31###sois===604###eois===607###lif===4###soif===96###eoif===99###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\lexicalOrder(int)");i++;})) {
        AKA_BLOCK_LOOP_585++;
        if (AKA_BLOCK_LOOP_585 > 1000) {
            //break;
        }
            AKA_mark("lis===32###sois===624###eois===639###lif===5###soif===116###eoif===131###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\lexicalOrder(int)");dfs(i, n, res);
        }
        
        AKA_mark("lis===35###sois===670###eois===681###lif===8###soif===162###eoif===173###ins===true###function===.\\p4\\0386-lexicographical-numbers\\0386-lexicographical-numbers.cpp\\Solution\\lexicalOrder(int)");return res;
    }
    
};
#endif
