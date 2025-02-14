/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1046_LAST_STONE_WEIGHT_1046_LAST_STONE_WEIGHT_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1046_LAST_STONE_WEIGHT_1046_LAST_STONE_WEIGHT_CPP
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
    
    /** Instrumented function lastStoneWeight(vector<int>&) */
int lastStoneWeight(vector<int>& v) /* << Aka begin of function int lastStoneWeight(vector<int>& v) >> */
{AKA_mark("Calling: .\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");AKA_fCall++;
    
        // Form Max Heap
        AKA_mark("lis===17###sois===305###eois===328###lif===3###soif===79###eoif===102###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");priority_queue<int> pq;
        AKA_mark("lis===18###sois===338###eois===355###lif===4###soif===112###eoif===129###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");int n = v.size();
        
        for(auto &x : v)                            AKA_mark("lis===20###sois===379###eois===386###lif===6###soif===153###eoif===160###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");
{
AKA_mark("lis===20###sois===419###eois===430###lif===6###soif===193###eoif===204###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");pq.push(x);
}

AKA_mark("lis===20###sois===379###eois===386###lif===6###soif===153###eoif===160###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");

        
        int AKA_BLOCK_LOOP_450 = 0;
    while(AKA_mark("lis===22###sois===456###eois===475###lif===8###soif===230###eoif===249###ifc===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)") && (AKA_mark("lis===22###sois===456###eois===475###lif===8###soif===230###eoif===249###isc===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)") && (pq.empty() == false))) {
        AKA_BLOCK_LOOP_450++;
        if (AKA_BLOCK_LOOP_450 > 1000) {
            //break;
        }
            
            if(AKA_mark("lis===24###sois===509###eois===523###lif===10###soif===283###eoif===297###ifc===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)") && (AKA_mark("lis===24###sois===509###eois===523###lif===10###soif===283###eoif===297###isc===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)") && (pq.size() == 1)))                      {
AKA_mark("lis===24###sois===546###eois===562###lif===10###soif===320###eoif===336###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");return pq.top();
}

else {
AKA_mark("lis===-24-###sois===-509-###eois===-50914-###lif===-10-###soif===-###eoif===-297-###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");
}
            
            AKA_mark("lis===26###sois===590###eois===608###lif===12###soif===364###eoif===382###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");int t1 = pq.top();
            AKA_mark("lis===27###sois===622###eois===631###lif===13###soif===396###eoif===405###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");pq.pop();
            
            AKA_mark("lis===29###sois===659###eois===677###lif===15###soif===433###eoif===451###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");int t2 = pq.top();
            AKA_mark("lis===30###sois===691###eois===700###lif===16###soif===465###eoif===474###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");pq.pop();
            
            if(AKA_mark("lis===32###sois===731###eois===739###lif===18###soif===505###eoif===513###ifc===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)") && (AKA_mark("lis===32###sois===731###eois===739###lif===18###soif===505###eoif===513###isc===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)") && (t1 != t2)))                            {
AKA_mark("lis===32###sois===768###eois===790###lif===18###soif===542###eoif===564###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");pq.push(abs(t1 - t2));
}

else {
AKA_mark("lis===-32-###sois===-731-###eois===-7318-###lif===-18-###soif===-###eoif===-513-###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");
}
        }
        
        AKA_mark("lis===35###sois===821###eois===830###lif===21###soif===595###eoif===604###ins===true###function===.\\p12\\1046-last-stone-weight\\1046-last-stone-weight.cpp\\Solution\\lastStoneWeight(vector<int>&)");return 0;
    }
    
};
#endif
