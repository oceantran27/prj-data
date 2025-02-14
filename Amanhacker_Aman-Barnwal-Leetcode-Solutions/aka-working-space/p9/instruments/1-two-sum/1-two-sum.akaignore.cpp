/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P9_1_TWO_SUM_1_TWO_SUM_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P9_1_TWO_SUM_1_TWO_SUM_CPP
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
    
    /** Instrumented function twoSum(vector<int>&,int) */
vector<int> twoSum(vector<int>& v, int tar) /* << Aka begin of function vector<int> twoSum(vector<int>& v, int tar) >> */
{AKA_mark("Calling: .\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===287###eois===303###lif===2###soif===61###eoif===77###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");vector<int> res;
        AKA_mark("lis===17###sois===313###eois===330###lif===3###soif===87###eoif===104###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");int n = v.size();
        
        int AKA_BLOCK_LOOP_350 = 0;
    AKA_mark("lis===19###sois===354###eois===362###lif===5###soif===128###eoif===136###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");
for(int i=0; AKA_mark("lis===19###sois===363###eois===368###lif===5###soif===137###eoif===142###ifc===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)") && (AKA_mark("lis===19###sois===363###eois===368###lif===5###soif===137###eoif===142###isc===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)") && (i<n-1)); ({AKA_mark("lis===19###sois===370###eois===373###lif===5###soif===144###eoif===147###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");i++;})) {
        AKA_BLOCK_LOOP_350++;
        if (AKA_BLOCK_LOOP_350 > 1000) {
            //break;
        }
            
            AKA_mark("lis===21###sois===404###eois===455###lif===7###soif===178###eoif===229###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");auto it = find(v.begin()+i+1, v.end(), tar - v[i]);
            
            if(AKA_mark("lis===23###sois===486###eois===499###lif===9###soif===260###eoif===273###ifc===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)") && (AKA_mark("lis===23###sois===486###eois===499###lif===9###soif===260###eoif===273###isc===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)") && (it != v.end()))) {
                
                AKA_mark("lis===25###sois===538###eois===563###lif===11###soif===312###eoif===337###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");int ind = it - v.begin();
                
                AKA_mark("lis===27###sois===599###eois===618###lif===13###soif===373###eoif===392###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");res.push_back(ind);
                AKA_mark("lis===28###sois===636###eois===653###lif===14###soif===410###eoif===427###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");res.push_back(i);
                
                AKA_mark("lis===30###sois===689###eois===700###lif===16###soif===463###eoif===474###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");return res;
            }
else {
AKA_mark("lis===-23-###sois===-486-###eois===-48613-###lif===-9-###soif===-###eoif===-273-###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");
}
        }
        
        AKA_mark("lis===34###sois===746###eois===757###lif===20###soif===520###eoif===531###ins===true###function===.\\p9\\1-two-sum\\1-two-sum.cpp\\Solution\\twoSum(vector<int>&,int)");return res;
    }
    
};
#endif
