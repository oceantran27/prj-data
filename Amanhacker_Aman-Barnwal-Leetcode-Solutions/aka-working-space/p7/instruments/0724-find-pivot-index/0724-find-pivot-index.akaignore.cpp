/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0724_FIND_PIVOT_INDEX_0724_FIND_PIVOT_INDEX_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0724_FIND_PIVOT_INDEX_0724_FIND_PIVOT_INDEX_CPP
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
    
    /** Instrumented function pivotIndex(vector<int>&) */
int pivotIndex(vector<int>& a) /* << Aka begin of function int pivotIndex(vector<int>& a) >> */
{AKA_mark("Calling: .\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===274###eois===291###lif===2###soif===48###eoif===65###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");int n = a.size();
        
        AKA_mark("lis===18###sois===311###eois===350###lif===4###soif===85###eoif===124###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");int leftSum = 0, rightSum = 0, sum = 0;
        
        int AKA_BLOCK_LOOP_370 = 0;
    AKA_mark("lis===20###sois===374###eois===382###lif===6###soif===148###eoif===156###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");
for(int i=0; AKA_mark("lis===20###sois===383###eois===386###lif===6###soif===157###eoif===160###ifc===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)") && (AKA_mark("lis===20###sois===383###eois===386###lif===6###soif===157###eoif===160###isc===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)") && (i<n)); ({AKA_mark("lis===20###sois===388###eois===391###lif===6###soif===162###eoif===165###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");i++;}))              {
AKA_mark("lis===20###sois===406###eois===418###lif===6###soif===180###eoif===192###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");sum += a[i];
}

        
        int AKA_BLOCK_LOOP_438 = 0;
    AKA_mark("lis===22###sois===442###eois===450###lif===8###soif===216###eoif===224###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");
for(int i=0; AKA_mark("lis===22###sois===451###eois===454###lif===8###soif===225###eoif===228###ifc===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)") && (AKA_mark("lis===22###sois===451###eois===454###lif===8###soif===225###eoif===228###isc===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)") && (i<n)); ({AKA_mark("lis===22###sois===456###eois===459###lif===8###soif===230###eoif===233###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_438++;
        if (AKA_BLOCK_LOOP_438 > 1000) {
            //break;
        }
            
            AKA_mark("lis===24###sois===490###eois===522###lif===10###soif===264###eoif===296###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");rightSum = sum - leftSum - a[i];
            if(AKA_mark("lis===25###sois===539###eois===558###lif===11###soif===313###eoif===332###ifc===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)") && (AKA_mark("lis===25###sois===539###eois===558###lif===11###soif===313###eoif===332###isc===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)") && (leftSum == rightSum)))         {
AKA_mark("lis===25###sois===568###eois===577###lif===11###soif===342###eoif===351###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");return i;
}

else {
AKA_mark("lis===-25-###sois===-539-###eois===-53919-###lif===-11-###soif===-###eoif===-332-###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");
}
            
            AKA_mark("lis===27###sois===605###eois===621###lif===13###soif===379###eoif===395###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");leftSum += a[i];
        }
        
        AKA_mark("lis===30###sois===652###eois===662###lif===16###soif===426###eoif===436###ins===true###function===.\\p7\\0724-find-pivot-index\\0724-find-pivot-index.cpp\\Solution\\pivotIndex(vector<int>&)");return -1;
    }
    
};
#endif
