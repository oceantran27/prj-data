/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1825_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P7_1825_CPP
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

class MKAverage {
 public:
public:
  set<pair<int, int>> mini, midi, maxi;
  queue<pair<int, int>> q;
  int id, k, n, m, lim, sum;

  /** Instrumented function MKAverage(int,int) */
MKAverage(int m, int k) /* << Aka begin of function  MKAverage(int m, int k) >> */
{AKA_mark("Calling: .\\p7\\1825.cpp\\MKAverage\\MKAverage(int,int)");AKA_fCall++;
    AKA_mark("lis===18###sois===352###eois===419###lif===1###soif===31###eoif===98###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\MKAverage(int,int)");sum = id = 0, this->k = k, this->m = m, n = m - k - k, lim = m + 1;
  }

  /** Instrumented function addElement(int) */
void addElement(int num) /* << Aka begin of function void addElement(int num) >> */
{AKA_mark("Calling: .\\p7\\1825.cpp\\MKAverage\\addElement(int)");AKA_fCall++;
    AKA_mark("lis===22###sois===462###eois===482###lif===1###soif===32###eoif===52###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");q.push({num, ++id});

    if (AKA_mark("lis===24###sois===494###eois===509###lif===3###soif===64###eoif===79###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===24###sois===494###eois===509###lif===3###soif===64###eoif===79###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (q.size() == lim))) {
      AKA_mark("lis===25###sois===520###eois===539###lif===4###soif===90###eoif===109###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");auto p = q.front();
      AKA_mark("lis===26###sois===547###eois===555###lif===5###soif===117###eoif===125###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");q.pop();

      if (AKA_mark("lis===28###sois===569###eois===582###lif===7###soif===139###eoif===152###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===28###sois===569###eois===582###lif===7###soif===139###eoif===152###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (mini.count(p))))
        {
AKA_mark("lis===29###sois===593###eois===607###lif===8###soif===163###eoif===177###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");mini.erase(p);
}
  // delete old
      else {
if (AKA_mark("lis===30###sois===639###eois===652###lif===9###soif===209###eoif===222###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===30###sois===639###eois===652###lif===9###soif===209###eoif===222###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (maxi.count(p))))
        {
AKA_mark("lis===31###sois===663###eois===677###lif===10###soif===233###eoif===247###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");maxi.erase(p);
}

      else
        {
AKA_mark("lis===33###sois===699###eois===729###lif===12###soif===269###eoif===299###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");midi.erase(p), sum -= p.first;
}

}


      if (AKA_mark("lis===35###sois===743###eois===759###lif===14###soif===313###eoif===329###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===35###sois===743###eois===759###lif===14###soif===313###eoif===329###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (mini.size() != k))) {  // replace
        AKA_mark("lis===36###sois===784###eois===839###lif===15###soif===354###eoif===409###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");mini.insert(*midi.begin()), sum -= midi.begin()->first;
        AKA_mark("lis===37###sois===849###eois===875###lif===16###soif===419###eoif===445###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");midi.erase(*midi.begin());
      } else {
if (AKA_mark("lis===38###sois===894###eois===910###lif===17###soif===464###eoif===480###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===38###sois===894###eois===910###lif===17###soif===464###eoif===480###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (maxi.size() != k))) {
        AKA_mark("lis===39###sois===923###eois===980###lif===18###soif===493###eoif===550###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");maxi.insert(*midi.rbegin()), sum -= midi.rbegin()->first;
        AKA_mark("lis===40###sois===990###eois===1017###lif===19###soif===560###eoif===587###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");midi.erase(*midi.rbegin());
      }
else {
AKA_mark("lis===-38-###sois===-894-###eois===-89416-###lif===-17-###soif===-###eoif===-480-###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");
}
}


      if (AKA_mark("lis===43###sois===1040###eois===1097###lif===22###soif===610###eoif===667###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && ((AKA_mark("lis===43###sois===1040###eois===1067###lif===22###soif===610###eoif===637###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (num >= mini.rbegin()->first)) && (AKA_mark("lis===43###sois===1071###eois===1097###lif===22###soif===641###eoif===667###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (num <= maxi.begin()->first))))
        {
AKA_mark("lis===44###sois===1108###eois===1143###lif===23###soif===678###eoif===713###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");midi.insert({num, id}), sum += num;
}
  // insert new
      else {
if (AKA_mark("lis===45###sois===1175###eois===1201###lif===24###soif===745###eoif===771###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===45###sois===1175###eois===1201###lif===24###soif===745###eoif===771###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (num < mini.rbegin()->first))) {
        AKA_mark("lis===46###sois===1214###eois===1242###lif===25###soif===784###eoif===812###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");sum += mini.rbegin()->first;
        AKA_mark("lis===47###sois===1252###eois===1280###lif===26###soif===822###eoif===850###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");midi.insert(*mini.rbegin());
        AKA_mark("lis===48###sois===1290###eois===1317###lif===27###soif===860###eoif===887###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");mini.erase(*mini.rbegin());
        AKA_mark("lis===49###sois===1327###eois===1350###lif===28###soif===897###eoif===920###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");mini.insert({num, id});
      } else {
        AKA_mark("lis===51###sois===1376###eois===1403###lif===30###soif===946###eoif===973###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");sum += maxi.begin()->first;
        AKA_mark("lis===52###sois===1413###eois===1440###lif===31###soif===983###eoif===1010###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");midi.insert(*maxi.begin());
        AKA_mark("lis===53###sois===1450###eois===1476###lif===32###soif===1020###eoif===1046###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");maxi.erase(*maxi.begin());
        AKA_mark("lis===54###sois===1486###eois===1509###lif===33###soif===1056###eoif===1079###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");maxi.insert({num, id});
      }
}

    } else {
if (AKA_mark("lis===56###sois===1535###eois===1548###lif===35###soif===1105###eoif===1118###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===56###sois===1535###eois===1548###lif===35###soif===1105###eoif===1118###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (q.size() == m))) {
      AKA_mark("lis===57###sois===1559###eois===1587###lif===36###soif===1129###eoif===1157###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");vector<pair<int, int>> v(m);

      int AKA_BLOCK_LOOP_1597 = 0;
    AKA_mark("lis===59###sois===1602###eois===1612###lif===38###soif===1172###eoif===1182###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");
for (int i = 0; AKA_mark("lis===59###sois===1613###eois===1619###lif===38###soif===1183###eoif===1189###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===59###sois===1613###eois===1619###lif===38###soif===1183###eoif===1189###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (i != m)); ({AKA_mark("lis===59###sois===1621###eois===1624###lif===38###soif===1191###eoif===1194###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");i++;})) {
        AKA_BLOCK_LOOP_1597++;
        if (AKA_BLOCK_LOOP_1597 > 1000) {
            //break;
        }
        AKA_mark("lis===60###sois===1637###eois===1662###lif===39###soif===1207###eoif===1232###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");q.push(v[i] = q.front());
        AKA_mark("lis===61###sois===1672###eois===1680###lif===40###soif===1242###eoif===1250###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");q.pop();
      }

      AKA_mark("lis===64###sois===1699###eois===1724###lif===43###soif===1269###eoif===1294###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");sort(v.begin(), v.end());
      AKA_mark("lis===65###sois===1732###eois===1742###lif===44###soif===1302###eoif===1312###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");int i = 0;
      int AKA_BLOCK_LOOP_1750 = 0;
    while (AKA_mark("lis===66###sois===1757###eois===1763###lif===45###soif===1327###eoif===1333###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===66###sois===1757###eois===1763###lif===45###soif===1327###eoif===1333###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (i != k))) {
AKA_mark("lis===66###sois===1765###eois===1785###lif===45###soif===1335###eoif===1355###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");mini.insert(v[i++]);
}

      int AKA_BLOCK_LOOP_1793 = 0;
    AKA_mark("lis===67###sois===1798###eois===1812###lif===46###soif===1368###eoif===1382###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");
for (int l = k + n; AKA_mark("lis===67###sois===1813###eois===1819###lif===46###soif===1383###eoif===1389###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===67###sois===1813###eois===1819###lif===46###soif===1383###eoif===1389###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (i != l)); ({AKA_mark("lis===67###sois===1821###eois===1824###lif===46###soif===1391###eoif===1394###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");i++;})) {
AKA_mark("lis===67###sois===1826###eois===1863###lif===46###soif===1396###eoif===1433###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");midi.insert(v[i]), sum += v[i].first;
}

      int AKA_BLOCK_LOOP_1871 = 0;
    while (AKA_mark("lis===68###sois===1878###eois===1884###lif===47###soif===1448###eoif===1454###ifc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (AKA_mark("lis===68###sois===1878###eois===1884###lif===47###soif===1448###eoif===1454###isc===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)") && (i != m))) {
AKA_mark("lis===68###sois===1886###eois===1906###lif===47###soif===1456###eoif===1476###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");maxi.insert(v[i++]);
}

    }
else {
AKA_mark("lis===-56-###sois===-1535-###eois===-153513-###lif===-35-###soif===-###eoif===-1118-###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\addElement(int)");
}
}

  }

  /** Instrumented function calculateMKAverage() */
int calculateMKAverage() /* << Aka begin of function int calculateMKAverage() >> */
{AKA_mark("Calling: .\\p7\\1825.cpp\\MKAverage\\calculateMKAverage()");AKA_fCall++; AKA_mark("lis===72###sois===1951###eois===1987###lif===0###soif===27###eoif===63###ins===true###function===.\\p7\\1825.cpp\\MKAverage\\calculateMKAverage()");return q.size() == m ? sum / n : -1; }
};

#endif
