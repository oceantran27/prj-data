/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1030_MATRIX_CELLS_IN_DISTANCE_ORDER_1030_MATRIX_CELLS_IN_DISTANCE_ORDER_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1030_MATRIX_CELLS_IN_DISTANCE_ORDER_1030_MATRIX_CELLS_IN_DISTANCE_ORDER_CPP
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
    
    /** Instrumented function allCellsDistOrder(int,int,int,int) */
vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) /* << Aka begin of function vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) >> */
{AKA_mark("Calling: .\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===327###eois===351###lif===2###soif===101###eoif===125###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");vector<vector<int>> res;
        
        AKA_mark("lis===18###sois===371###eois===407###lif===4###soif===145###eoif===181###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");vector<pair<int, pair<int, int>>> v;            // 1st dist - Dist, 2nd arg - co-ordinate
        
        int AKA_BLOCK_LOOP_480 = 0;
    AKA_mark("lis===20###sois===484###eois===492###lif===6###soif===258###eoif===266###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");
for(int i=0; AKA_mark("lis===20###sois===493###eois===499###lif===6###soif===267###eoif===273###ifc===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)") && (AKA_mark("lis===20###sois===493###eois===499###lif===6###soif===267###eoif===273###isc===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)") && (i<rows)); ({AKA_mark("lis===20###sois===501###eois===504###lif===6###soif===275###eoif===278###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");i++;})) {
        AKA_BLOCK_LOOP_480++;
        if (AKA_BLOCK_LOOP_480 > 1000) {
            //break;
        }
            int AKA_BLOCK_LOOP_521 = 0;
    AKA_mark("lis===21###sois===525###eois===533###lif===7###soif===299###eoif===307###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");
for(int j=0; AKA_mark("lis===21###sois===534###eois===540###lif===7###soif===308###eoif===314###ifc===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)") && (AKA_mark("lis===21###sois===534###eois===540###lif===7###soif===308###eoif===314###isc===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)") && (j<cols)); ({AKA_mark("lis===21###sois===542###eois===545###lif===7###soif===316###eoif===319###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");j++;})) {
        AKA_BLOCK_LOOP_521++;
        if (AKA_BLOCK_LOOP_521 > 1000) {
            //break;
        }
                
                AKA_mark("lis===23###sois===584###eois===630###lif===9###soif===358###eoif===404###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");int dist = abs(i -rCenter) + abs(j - cCenter);
                AKA_mark("lis===24###sois===648###eois===676###lif===10###soif===422###eoif===450###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");v.push_back({dist, {i, j}});
            }
        }
        
        AKA_mark("lis===28###sois===722###eois===747###lif===14###soif===496###eoif===521###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");sort(v.begin(), v.end());
        
        AKA_mark("lis===30###sois===767###eois===784###lif===16###soif===541###eoif===558###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");vector<int> temp;
        
        for(auto &x : v) {
AKA_mark("lis===32###sois===808###eois===815###lif===18###soif===582###eoif===589###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");
{
        
            AKA_mark("lis===34###sois===846###eois===877###lif===20###soif===620###eoif===651###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");temp.push_back(x.second.first);
            AKA_mark("lis===35###sois===891###eois===923###lif===21###soif===665###eoif===697###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");temp.push_back(x.second.second);
            
            AKA_mark("lis===37###sois===951###eois===971###lif===23###soif===725###eoif===745###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");res.push_back(temp);
            AKA_mark("lis===38###sois===985###eois===998###lif===24###soif===759###eoif===772###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");temp.clear();
        }}
AKA_mark("lis===32###sois===808###eois===815###lif===18###soif===582###eoif===589###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");

        
        AKA_mark("lis===41###sois===1029###eois===1040###lif===27###soif===803###eoif===814###ins===true###function===.\\p11\\1030-matrix-cells-in-distance-order\\1030-matrix-cells-in-distance-order.cpp\\Solution\\allCellsDistOrder(int,int,int,int)");return res;
    }
    
};
#endif
