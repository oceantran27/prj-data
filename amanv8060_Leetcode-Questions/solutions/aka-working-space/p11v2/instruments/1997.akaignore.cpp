/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_1997_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_1997_CPP
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
int Mod = 1000000007;
class Solution {
 public:
public:
  /** Instrumented function firstDayBeenInAllRooms(vector<int>&) */
int firstDayBeenInAllRooms(vector<int>& nextVisit) /* << Aka begin of function int firstDayBeenInAllRooms(vector<int>& nextVisit) >> */
{AKA_mark("Calling: .\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===298###eois===323###lif===1###soif===58###eoif===83###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");int n = nextVisit.size();
    AKA_mark("lis===15###sois===329###eois===358###lif===2###soif===89###eoif===118###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");vector<int> prefix(n + 1, 0);
    AKA_mark("lis===16###sois===364###eois===370###lif===3###soif===124###eoif===130###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");int j;
    int AKA_BLOCK_LOOP_376 = 0;
    AKA_mark("lis===17###sois===381###eois===391###lif===4###soif===141###eoif===151###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");
for (int i = 0; AKA_mark("lis===17###sois===392###eois===397###lif===4###soif===152###eoif===157###ifc===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)") && (AKA_mark("lis===17###sois===392###eois===397###lif===4###soif===152###eoif===157###isc===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)") && (i < n)); ({AKA_mark("lis===17###sois===399###eois===402###lif===4###soif===159###eoif===162###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_376++;
        if (AKA_BLOCK_LOOP_376 > 1000) {
            //break;
        }
      AKA_mark("lis===18###sois===413###eois===430###lif===5###soif===173###eoif===190###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");j = nextVisit[i];
      if (AKA_mark("lis===19###sois===442###eois===448###lif===6###soif===202###eoif===208###ifc===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)") && (AKA_mark("lis===19###sois===442###eois===448###lif===6###soif===202###eoif===208###isc===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)") && (j == i))) {
        AKA_mark("lis===20###sois===461###eois===507###lif===7###soif===221###eoif===267###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");prefix[i + 1] = ((prefix[i]) % Mod + 2) % Mod;
      } else {
        AKA_mark("lis===22###sois===533###eois===589###lif===9###soif===293###eoif===349###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");int k = ((prefix[i] - prefix[j] + Mod) % Mod + 2) % Mod;
        AKA_mark("lis===23###sois===599###eois===653###lif===10###soif===359###eoif===413###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");prefix[i + 1] = ((prefix[i]) % Mod + (k) % Mod) % Mod;
      }
    }
    AKA_mark("lis===26###sois===675###eois===705###lif===13###soif===435###eoif===465###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");int ans = prefix[n - 1] % Mod;
    AKA_mark("lis===27###sois===711###eois===733###lif===14###soif===471###eoif===493###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");cout << prefix[n - 1];
    AKA_mark("lis===28###sois===739###eois===750###lif===15###soif===499###eoif===510###ins===true###function===.\\p11\\1997.cpp\\Solution\\firstDayBeenInAllRooms(vector<int>&)");return ans;
  }
};

#endif
