/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2008_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2008_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
public:
  /** Instrumented function solver(vector<vector<int>>&,int,int,vector<long long>&) */
long long solver(vector<vector<int>>& rides, int i, int n,
                   vector<long long>& dp) /* << Aka begin of function long long solver(vector<vector<int>>& rides, int i, int n,
                   vector<long long>& dp) >> */
{AKA_mark("Calling: .\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");AKA_fCall++;
    if (AKA_mark("lis===14###sois===330###eois===336###lif===2###soif===113###eoif===119###ifc===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)") && (AKA_mark("lis===14###sois===330###eois===336###lif===2###soif===113###eoif===119###isc===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)") && (i == n))) {
AKA_mark("lis===14###sois===338###eois===347###lif===2###soif===121###eoif===130###ins===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");return 0;
}

else {
AKA_mark("lis===-14-###sois===-330-###eois===-3306-###lif===-2-###soif===-###eoif===-119-###ins===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");
}

    AKA_mark("lis===16###sois===355###eois===373###lif===4###soif===138###eoif===156###ins===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");long long ans = 0;
    if (AKA_mark("lis===17###sois===383###eois===394###lif===5###soif===166###eoif===177###ifc===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)") && (AKA_mark("lis===17###sois===383###eois===394###lif===5###soif===166###eoif===177###isc===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)") && (dp[i] != -1))) {
AKA_mark("lis===17###sois===396###eois===409###lif===5###soif===179###eoif===192###ins===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");return dp[i];
}

else {
AKA_mark("lis===-17-###sois===-383-###eois===-38311-###lif===-5-###soif===-###eoif===-177-###ins===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");
}

    AKA_mark("lis===19###sois===417###eois===461###lif===7###soif===200###eoif===244###ins===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");ans = max(ans, solver(rides, i + 1, n, dp));

    AKA_mark("lis===21###sois===469###eois===708###lif===9###soif===252###eoif===491###ins===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");int j = lower_bound(rides.begin() + i + 1, rides.end(), rides[i][1],
                        [](const vector<int>& a, const int val) {
                          return a[0] < val;
                        }) -
            rides.begin();

    AKA_mark("lis===27###sois===716###eois===835###lif===15###soif===499###eoif===618###ins===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");ans = max(ans, solver(rides, j, n, dp) +
                       ((long long)rides[i][2] + rides[i][1] - rides[i][0]));

    AKA_mark("lis===30###sois===843###eois===862###lif===18###soif===626###eoif===645###ins===true###function===.\\p12\\2008.cpp\\Solution\\solver(vector<vector<int>>&,int,int,vector<long long>&)");return dp[i] = ans;
  }
  /** Instrumented function maxTaxiEarnings(int,vector<vector<int>>&) */
long long maxTaxiEarnings(int n, vector<vector<int>>& rides) /* << Aka begin of function long long maxTaxiEarnings(int n, vector<vector<int>>& rides) >> */
{AKA_mark("Calling: .\\p12\\2008.cpp\\Solution\\maxTaxiEarnings(int,vector<vector<int>>&)");AKA_fCall++;
    AKA_mark("lis===33###sois===939###eois===960###lif===1###soif===68###eoif===89###ins===true###function===.\\p12\\2008.cpp\\Solution\\maxTaxiEarnings(int,vector<vector<int>>&)");int l = rides.size();
    AKA_mark("lis===34###sois===966###eois===1090###lif===2###soif===95###eoif===219###ins===true###function===.\\p12\\2008.cpp\\Solution\\maxTaxiEarnings(int,vector<vector<int>>&)");sort(
        rides.begin(), rides.end(),
        [](const vector<int>& a, const vector<int>& b) { return a[0] < b[0]; });

    AKA_mark("lis===38###sois===1098###eois===1130###lif===6###soif===227###eoif===259###ins===true###function===.\\p12\\2008.cpp\\Solution\\maxTaxiEarnings(int,vector<vector<int>>&)");vector<long long> dp(l + 1, -1);

    AKA_mark("lis===40###sois===1138###eois===1169###lif===8###soif===267###eoif===298###ins===true###function===.\\p12\\2008.cpp\\Solution\\maxTaxiEarnings(int,vector<vector<int>>&)");return solver(rides, 0, l, dp);
  }
};

#endif
