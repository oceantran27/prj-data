/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_121_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_121_CPP
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
  /** Instrumented function maxProfit(vector<int>&) */
int maxProfit(vector<int>& prices) /* << Aka begin of function int maxProfit(vector<int>& prices) >> */
{AKA_mark("Calling: .\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===13###sois===259###eois===291###lif===1###soif===42###eoif===74###ins===true###function===.\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)");int profit = 0, price = INT_MAX;
    int AKA_BLOCK_LOOP_297 = 0;
    AKA_mark("lis===14###sois===302###eois===312###lif===2###soif===85###eoif===95###ins===true###function===.\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)");
for (int i = 0; AKA_mark("lis===14###sois===313###eois===330###lif===2###soif===96###eoif===113###ifc===true###function===.\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)") && (AKA_mark("lis===14###sois===313###eois===330###lif===2###soif===96###eoif===113###isc===true###function===.\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)") && (i < prices.size())); ({AKA_mark("lis===14###sois===332###eois===335###lif===2###soif===115###eoif===118###ins===true###function===.\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_297++;
        if (AKA_BLOCK_LOOP_297 > 1000) {
            //break;
        }
      AKA_mark("lis===15###sois===346###eois===376###lif===3###soif===129###eoif===159###ins===true###function===.\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)");price = min(price, prices[i]);
      AKA_mark("lis===16###sois===384###eois===423###lif===4###soif===167###eoif===206###ins===true###function===.\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)");int present_profit = prices[i] - price;
      AKA_mark("lis===17###sois===431###eois===468###lif===5###soif===214###eoif===251###ins===true###function===.\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)");profit = max(present_profit, profit);
    }
    AKA_mark("lis===19###sois===481###eois===495###lif===7###soif===264###eoif===278###ins===true###function===.\\p4\\121.cpp\\Solution\\maxProfit(vector<int>&)");return profit;
  }
};

#endif
