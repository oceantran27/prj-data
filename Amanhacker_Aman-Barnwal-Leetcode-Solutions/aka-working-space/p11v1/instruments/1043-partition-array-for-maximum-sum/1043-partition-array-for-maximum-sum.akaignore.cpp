/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1043_PARTITION_ARRAY_FOR_MAXIMUM_SUM_1043_PARTITION_ARRAY_FOR_MAXIMUM_SUM_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1043_PARTITION_ARRAY_FOR_MAXIMUM_SUM_1043_PARTITION_ARRAY_FOR_MAXIMUM_SUM_CPP
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
  
    /** Instrumented function helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&) */
int helperMaxSum(vector<int> &a, int n, int k, int pos, int &res, vector<int> &dp) /* << Aka begin of function int helperMaxSum(vector<int> &a, int n, int k, int pos, int &res, vector<int> &dp) >> */
{AKA_mark("Calling: .\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");AKA_fCall++;
        
        // Base Condition
        if(AKA_mark("lis===17###sois===358###eois===366###lif===3###soif===134###eoif===142###ifc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)") && (AKA_mark("lis===17###sois===358###eois===366###lif===3###soif===134###eoif===142###isc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)") && (pos >= n)))                                    {
AKA_mark("lis===17###sois===403###eois===412###lif===3###soif===179###eoif===188###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");return 0;
}

else {
AKA_mark("lis===-17-###sois===-358-###eois===-3588-###lif===-3-###soif===-###eoif===-142-###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");
}
        if(AKA_mark("lis===18###sois===425###eois===449###lif===4###soif===201###eoif===225###ifc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)") && ((AKA_mark("lis===18###sois===425###eois===432###lif===4###soif===201###eoif===208###isc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)") && (pos < n)) && (AKA_mark("lis===18###sois===436###eois===449###lif===4###soif===212###eoif===225###isc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)") && (dp[pos] != -1))))                    {
AKA_mark("lis===18###sois===470###eois===485###lif===4###soif===246###eoif===261###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");return dp[pos];
}

else {
AKA_mark("lis===-18-###sois===-425-###eois===-42524-###lif===-4-###soif===-###eoif===-225-###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");
}
        
        AKA_mark("lis===20###sois===505###eois===520###lif===6###soif===281###eoif===296###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");int maxEle = 0;
        
        // For each position pos, increase your subarray size i from 0 to k - 1, tracking the max value maxEle so far. 
        // The sum of the subarray is maxEle * (i + 1).

        int AKA_BLOCK_LOOP_720 = 0;
    AKA_mark("lis===25###sois===724###eois===734###lif===11###soif===500###eoif===510###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");
for(int i = 0; AKA_mark("lis===25###sois===735###eois===755###lif===11###soif===511###eoif===531###ifc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)") && ((AKA_mark("lis===25###sois===735###eois===740###lif===11###soif===511###eoif===516###isc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)") && (i < k)) && (AKA_mark("lis===25###sois===744###eois===755###lif===11###soif===520###eoif===531###isc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)") && (pos + i < n))); ({AKA_mark("lis===25###sois===757###eois===760###lif===11###soif===533###eoif===536###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_720++;
        if (AKA_BLOCK_LOOP_720 > 1000) {
            //break;
        }
           
            AKA_mark("lis===27###sois===790###eois===823###lif===13###soif===566###eoif===599###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");maxEle = max(maxEle, a[pos + i]);
            
            AKA_mark("lis===29###sois===851###eois===929###lif===15###soif===627###eoif===705###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");int temp = ( maxEle * (i + 1) ) + helperMaxSum(a, n, k, pos + i + 1, res, dp);
            AKA_mark("lis===30###sois===943###eois===964###lif===16###soif===719###eoif===740###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");res = max(res, temp);
        }
        
        // Use memoisation to track the maximum sum for the position (dp).
        AKA_mark("lis===34###sois===1071###eois===1085###lif===20###soif===847###eoif===861###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");dp[pos] = res;
        AKA_mark("lis===35###sois===1095###eois===1106###lif===21###soif===871###eoif===882###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\helperMaxSum(vector<int>&,int,int,int,int&,vector<int>&)");return res;
    }
    
    /** Instrumented function maxSumAfterPartitioning(vector<int>&,int) */
int maxSumAfterPartitioning(vector<int>& a, int k) /* << Aka begin of function int maxSumAfterPartitioning(vector<int>& a, int k) >> */
{AKA_mark("Calling: .\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\maxSumAfterPartitioning(vector<int>&,int)");AKA_fCall++;
    
        AKA_mark("lis===40###sois===1193###eois===1210###lif===2###soif===68###eoif===85###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\maxSumAfterPartitioning(vector<int>&,int)");int n = a.size();
        if(AKA_mark("lis===41###sois===1223###eois===1229###lif===3###soif===98###eoif===104###ifc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\maxSumAfterPartitioning(vector<int>&,int)") && (AKA_mark("lis===41###sois===1223###eois===1229###lif===3###soif===98###eoif===104###isc===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\maxSumAfterPartitioning(vector<int>&,int)") && (n == 0)))                                      {
AKA_mark("lis===41###sois===1268###eois===1277###lif===3###soif===143###eoif===152###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\maxSumAfterPartitioning(vector<int>&,int)");return 0;
}

else {
AKA_mark("lis===-41-###sois===-1223-###eois===-12236-###lif===-3-###soif===-###eoif===-104-###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\maxSumAfterPartitioning(vector<int>&,int)");
}
        
        AKA_mark("lis===43###sois===1297###eois===1318###lif===5###soif===172###eoif===193###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\maxSumAfterPartitioning(vector<int>&,int)");int pos = 0, res = 0;
        AKA_mark("lis===44###sois===1328###eois===1354###lif===6###soif===203###eoif===229###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\maxSumAfterPartitioning(vector<int>&,int)");vector<int> dp(n + 1, -1);
        
        AKA_mark("lis===46###sois===1374###eois===1417###lif===8###soif===249###eoif===292###ins===true###function===.\\p11\\1043-partition-array-for-maximum-sum\\1043-partition-array-for-maximum-sum.cpp\\Solution\\maxSumAfterPartitioning(vector<int>&,int)");return helperMaxSum(a, n, k, pos, res, dp);
    }
    
};
#endif
