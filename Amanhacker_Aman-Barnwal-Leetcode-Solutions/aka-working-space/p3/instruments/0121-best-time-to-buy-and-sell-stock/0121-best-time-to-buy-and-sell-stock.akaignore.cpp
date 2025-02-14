/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0121_BEST_TIME_TO_BUY_AND_SELL_STOCK_0121_BEST_TIME_TO_BUY_AND_SELL_STOCK_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0121_BEST_TIME_TO_BUY_AND_SELL_STOCK_0121_BEST_TIME_TO_BUY_AND_SELL_STOCK_CPP
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
    
    /** Instrumented function maxProfit(vector<int>&) */
int maxProfit(vector<int>& prices) /* << Aka begin of function int maxProfit(vector<int>& prices) >> */
{AKA_mark("Calling: .\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===278###eois===296###lif===2###soif===52###eoif===70###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");int res = INT_MIN;
        AKA_mark("lis===17###sois===306###eois===328###lif===3###soif===80###eoif===102###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");int n = prices.size();
        
        AKA_mark("lis===19###sois===348###eois===372###lif===5###soif===122###eoif===146###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");vector<int> maxPrice(n);
        AKA_mark("lis===20###sois===382###eois===401###lif===6###soif===156###eoif===175###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");int maxi = INT_MIN;
        
        int AKA_BLOCK_LOOP_421 = 0;
    AKA_mark("lis===22###sois===425###eois===442###lif===8###soif===199###eoif===216###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");
for(int i=n-1, k=n-1; AKA_mark("lis===22###sois===443###eois===447###lif===8###soif===217###eoif===221###ifc===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)") && (AKA_mark("lis===22###sois===443###eois===447###lif===8###soif===217###eoif===221###isc===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)") && (i>=0)); ({AKA_mark("lis===22###sois===449###eois===452###lif===8###soif===223###eoif===226###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");i--;})) {
        AKA_BLOCK_LOOP_421++;
        if (AKA_BLOCK_LOOP_421 > 1000) {
            //break;
        }
            AKA_mark("lis===23###sois===469###eois===497###lif===9###soif===243###eoif===271###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");maxi = max(maxi, prices[i]);
            AKA_mark("lis===24###sois===511###eois===532###lif===10###soif===285###eoif===306###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");maxPrice[k--] = maxi;
        }
        
        int AKA_BLOCK_LOOP_563 = 0;
    AKA_mark("lis===27###sois===567###eois===575###lif===13###soif===341###eoif===349###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");
for(int i=0; AKA_mark("lis===27###sois===576###eois===579###lif===13###soif===350###eoif===353###ifc===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)") && (AKA_mark("lis===27###sois===576###eois===579###lif===13###soif===350###eoif===353###isc===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)") && (i<n)); ({AKA_mark("lis===27###sois===581###eois===584###lif===13###soif===355###eoif===358###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_563++;
        if (AKA_BLOCK_LOOP_563 > 1000) {
            //break;
        }
            AKA_mark("lis===28###sois===601###eois===641###lif===14###soif===375###eoif===415###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");res = max(res, maxPrice[i] - prices[i]);
        }
        
        AKA_mark("lis===31###sois===672###eois===683###lif===17###soif===446###eoif===457###ins===true###function===.\\p3\\0121-best-time-to-buy-and-sell-stock\\0121-best-time-to-buy-and-sell-stock.cpp\\Solution\\maxProfit(vector<int>&)");return res;
    }
    
};
#endif
