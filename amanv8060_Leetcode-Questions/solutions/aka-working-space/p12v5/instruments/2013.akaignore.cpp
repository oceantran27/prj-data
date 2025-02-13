/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2013_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2013_CPP
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
class DetectSquares {
 public:
public:
  int arr[1002][1002];
  /** Instrumented function DetectSquares() */
DetectSquares() /* << Aka begin of function  DetectSquares() >> */
{AKA_mark("Calling: .\\p12\\2013.cpp\\DetectSquares\\DetectSquares()");AKA_fCall++;
    int AKA_BLOCK_LOOP_269 = 0;
    AKA_mark("lis===14###sois===274###eois===284###lif===1###soif===28###eoif===38###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\DetectSquares()");
for (int i = 0; AKA_mark("lis===14###sois===285###eois===293###lif===1###soif===39###eoif===47###ifc===true###function===.\\p12\\2013.cpp\\DetectSquares\\DetectSquares()") && (AKA_mark("lis===14###sois===285###eois===293###lif===1###soif===39###eoif===47###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\DetectSquares()") && (i < 1002)); ({AKA_mark("lis===14###sois===295###eois===298###lif===1###soif===49###eoif===52###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\DetectSquares()");i++;})) {
        AKA_BLOCK_LOOP_269++;
        if (AKA_BLOCK_LOOP_269 > 1000) {
            //break;
        }
      int AKA_BLOCK_LOOP_309 = 0;
    AKA_mark("lis===15###sois===314###eois===324###lif===2###soif===68###eoif===78###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\DetectSquares()");
for (int j = 0; AKA_mark("lis===15###sois===325###eois===333###lif===2###soif===79###eoif===87###ifc===true###function===.\\p12\\2013.cpp\\DetectSquares\\DetectSquares()") && (AKA_mark("lis===15###sois===325###eois===333###lif===2###soif===79###eoif===87###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\DetectSquares()") && (j < 1002)); ({AKA_mark("lis===15###sois===335###eois===338###lif===2###soif===89###eoif===92###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\DetectSquares()");j++;})) {
        AKA_BLOCK_LOOP_309++;
        if (AKA_BLOCK_LOOP_309 > 1000) {
            //break;
        }
        AKA_mark("lis===16###sois===351###eois===365###lif===3###soif===105###eoif===119###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\DetectSquares()");arr[i][j] = 0;
      }
    }
  }

  /** Instrumented function add(vector<int>) */
void add(vector<int> point) /* << Aka begin of function void add(vector<int> point) >> */
{AKA_mark("Calling: .\\p12\\2013.cpp\\DetectSquares\\add(vector<int>)");AKA_fCall++; AKA_mark("lis===21###sois===422###eois===448###lif===0###soif===30###eoif===56###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\add(vector<int>)");arr[point[0]][point[1]]++; }

  /** Instrumented function count(vector<int>) */
int count(vector<int> point) /* << Aka begin of function int count(vector<int> point) >> */
{AKA_mark("Calling: .\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");AKA_fCall++;
    AKA_mark("lis===24###sois===492###eois===509###lif===1###soif===36###eoif===53###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");int p = point[0];
    AKA_mark("lis===25###sois===515###eois===532###lif===2###soif===59###eoif===76###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");int q = point[1];
    AKA_mark("lis===26###sois===538###eois===550###lif===3###soif===82###eoif===94###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");int ans = 0;
    int AKA_BLOCK_LOOP_556 = 0;
    AKA_mark("lis===27###sois===561###eois===571###lif===4###soif===105###eoif===115###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");
for (int x = 1; AKA_mark("lis===27###sois===572###eois===580###lif===4###soif===116###eoif===124###ifc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (AKA_mark("lis===27###sois===572###eois===580###lif===4###soif===116###eoif===124###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (x < 1002)); ({AKA_mark("lis===27###sois===582###eois===585###lif===4###soif===126###eoif===129###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");x++;})) {
        AKA_BLOCK_LOOP_556++;
        if (AKA_BLOCK_LOOP_556 > 1000) {
            //break;
        }
      AKA_mark("lis===28###sois===596###eois===608###lif===5###soif===140###eoif===152###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");int cnt = 0;
      if (AKA_mark("lis===29###sois===620###eois===646###lif===6###soif===164###eoif===190###ifc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && ((AKA_mark("lis===29###sois===620###eois===632###lif===6###soif===164###eoif===176###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (p + x < 1002)) && (AKA_mark("lis===29###sois===636###eois===646###lif===6###soif===180###eoif===190###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (q - x >= 0)))) {
        AKA_mark("lis===30###sois===659###eois===715###lif===7###soif===203###eoif===259###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");cnt = arr[p + x][q] * arr[p + x][q - x] * arr[p][q - x];
        AKA_mark("lis===31###sois===725###eois===736###lif===8###soif===269###eoif===280###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");ans += cnt;
      }
else {
AKA_mark("lis===-29-###sois===-620-###eois===-62026-###lif===-6-###soif===-###eoif===-190-###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");
}
      if (AKA_mark("lis===33###sois===757###eois===781###lif===10###soif===301###eoif===325###ifc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && ((AKA_mark("lis===33###sois===757###eois===767###lif===10###soif===301###eoif===311###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (p - x >= 0)) && (AKA_mark("lis===33###sois===771###eois===781###lif===10###soif===315###eoif===325###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (q - x >= 0)))) {
        AKA_mark("lis===34###sois===794###eois===850###lif===11###soif===338###eoif===394###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");cnt = arr[p - x][q] * arr[p - x][q - x] * arr[p][q - x];
        AKA_mark("lis===35###sois===860###eois===871###lif===12###soif===404###eoif===415###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");ans += cnt;
      }
else {
AKA_mark("lis===-33-###sois===-757-###eois===-75724-###lif===-10-###soif===-###eoif===-325-###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");
}
      if (AKA_mark("lis===37###sois===892###eois===918###lif===14###soif===436###eoif===462###ifc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && ((AKA_mark("lis===37###sois===892###eois===902###lif===14###soif===436###eoif===446###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (p - x >= 0)) && (AKA_mark("lis===37###sois===906###eois===918###lif===14###soif===450###eoif===462###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (q + x < 1002)))) {
        AKA_mark("lis===38###sois===931###eois===987###lif===15###soif===475###eoif===531###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");cnt = arr[p - x][q] * arr[p - x][q + x] * arr[p][q + x];
        AKA_mark("lis===39###sois===997###eois===1008###lif===16###soif===541###eoif===552###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");ans += cnt;
      }
else {
AKA_mark("lis===-37-###sois===-892-###eois===-89226-###lif===-14-###soif===-###eoif===-462-###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");
}
      if (AKA_mark("lis===41###sois===1029###eois===1057###lif===18###soif===573###eoif===601###ifc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && ((AKA_mark("lis===41###sois===1029###eois===1041###lif===18###soif===573###eoif===585###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (p + x < 1002)) && (AKA_mark("lis===41###sois===1045###eois===1057###lif===18###soif===589###eoif===601###isc===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)") && (q + x < 1002)))) {
        AKA_mark("lis===42###sois===1070###eois===1126###lif===19###soif===614###eoif===670###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");cnt = arr[p + x][q] * arr[p + x][q + x] * arr[p][q + x];
        AKA_mark("lis===43###sois===1136###eois===1147###lif===20###soif===680###eoif===691###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");ans += cnt;
      }
else {
AKA_mark("lis===-41-###sois===-1029-###eois===-102928-###lif===-18-###soif===-###eoif===-601-###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");
}
    }
    AKA_mark("lis===46###sois===1169###eois===1180###lif===23###soif===713###eoif===724###ins===true###function===.\\p12\\2013.cpp\\DetectSquares\\count(vector<int>)");return ans;
  }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */

#endif
