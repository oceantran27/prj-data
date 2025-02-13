/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_1998_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_1998_CPP
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
class DSU {
  public:
vector<int> par, rank;
  int n;

 public:
  /** Instrumented function DSU(int) */
DSU(int n) /* << Aka begin of function  DSU(int n) >> */
{AKA_mark("Calling: .\\p11\\1998.cpp\\DSU\\DSU(int)");AKA_fCall++;
    AKA_mark("lis===16###sois===268###eois===288###lif===1###soif===18###eoif===38###ins===true###function===.\\p11\\1998.cpp\\DSU\\DSU(int)");this->par.resize(n);
    AKA_mark("lis===17###sois===294###eois===315###lif===2###soif===44###eoif===65###ins===true###function===.\\p11\\1998.cpp\\DSU\\DSU(int)");this->rank.resize(n);
    AKA_mark("lis===18###sois===321###eois===333###lif===3###soif===71###eoif===83###ins===true###function===.\\p11\\1998.cpp\\DSU\\DSU(int)");this->n = n;
    int AKA_BLOCK_LOOP_339 = 0;
    AKA_mark("lis===19###sois===344###eois===354###lif===4###soif===94###eoif===104###ins===true###function===.\\p11\\1998.cpp\\DSU\\DSU(int)");
for (int i = 0; AKA_mark("lis===19###sois===355###eois===360###lif===4###soif===105###eoif===110###ifc===true###function===.\\p11\\1998.cpp\\DSU\\DSU(int)") && (AKA_mark("lis===19###sois===355###eois===360###lif===4###soif===105###eoif===110###isc===true###function===.\\p11\\1998.cpp\\DSU\\DSU(int)") && (i < n)); ({AKA_mark("lis===19###sois===362###eois===365###lif===4###soif===112###eoif===115###ins===true###function===.\\p11\\1998.cpp\\DSU\\DSU(int)");i++;})) {
AKA_mark("lis===19###sois===367###eois===378###lif===4###soif===117###eoif===128###ins===true###function===.\\p11\\1998.cpp\\DSU\\DSU(int)");par[i] = i;
}

  }
};

class Solution {
 public:
public:
  vector<int> spf;
  /** Instrumented function getAllFactors(int) */
vector<int> getAllFactors(int x) /* << Aka begin of function vector<int> getAllFactors(int x) >> */
{AKA_mark("Calling: .\\p11\\1998.cpp\\Solution\\getAllFactors(int)");AKA_fCall++;
    AKA_mark("lis===27###sois===481###eois===501###lif===1###soif===40###eoif===60###ins===true###function===.\\p11\\1998.cpp\\Solution\\getAllFactors(int)");vector<int> factors;
    int AKA_BLOCK_LOOP_507 = 0;
    while (AKA_mark("lis===28###sois===514###eois===519###lif===2###soif===73###eoif===78###ifc===true###function===.\\p11\\1998.cpp\\Solution\\getAllFactors(int)") && (AKA_mark("lis===28###sois===514###eois===519###lif===2###soif===73###eoif===78###isc===true###function===.\\p11\\1998.cpp\\Solution\\getAllFactors(int)") && (x > 1))) {
        AKA_BLOCK_LOOP_507++;
        if (AKA_BLOCK_LOOP_507 > 1000) {
            //break;
        }
      AKA_mark("lis===29###sois===530###eois===556###lif===3###soif===89###eoif===115###ins===true###function===.\\p11\\1998.cpp\\Solution\\getAllFactors(int)");factors.push_back(spf[x]);
      AKA_mark("lis===30###sois===564###eois===576###lif===4###soif===123###eoif===135###ins===true###function===.\\p11\\1998.cpp\\Solution\\getAllFactors(int)");x /= spf[x];
    }
    AKA_mark("lis===32###sois===589###eois===604###lif===6###soif===148###eoif===163###ins===true###function===.\\p11\\1998.cpp\\Solution\\getAllFactors(int)");return factors;
  }
  /** Instrumented function sieve(int) */
void sieve(int n) /* << Aka begin of function void sieve(int n) >> */
{AKA_mark("Calling: .\\p11\\1998.cpp\\Solution\\sieve(int)");AKA_fCall++;
    AKA_mark("lis===35###sois===638###eois===652###lif===1###soif===25###eoif===39###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");spf.resize(n);
    int AKA_BLOCK_LOOP_658 = 0;
    AKA_mark("lis===36###sois===663###eois===673###lif===2###soif===50###eoif===60###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");
for (int i = 2; AKA_mark("lis===36###sois===674###eois===679###lif===2###soif===61###eoif===66###ifc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (AKA_mark("lis===36###sois===674###eois===679###lif===2###soif===61###eoif===66###isc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (i < n)); ({AKA_mark("lis===36###sois===681###eois===684###lif===2###soif===68###eoif===71###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");i++;})) {
AKA_mark("lis===36###sois===686###eois===697###lif===2###soif===73###eoif===84###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");spf[i] = i;
}

    int AKA_BLOCK_LOOP_703 = 0;
    AKA_mark("lis===37###sois===708###eois===718###lif===3###soif===95###eoif===105###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");
for (int i = 2; AKA_mark("lis===37###sois===719###eois===728###lif===3###soif===106###eoif===115###ifc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (AKA_mark("lis===37###sois===719###eois===728###lif===3###soif===106###eoif===115###isc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (i * i < n)); ({AKA_mark("lis===37###sois===730###eois===733###lif===3###soif===117###eoif===120###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");i++;})) {
        AKA_BLOCK_LOOP_703++;
        if (AKA_BLOCK_LOOP_703 > 1000) {
            //break;
        }
      if (AKA_mark("lis===38###sois===748###eois===759###lif===4###soif===135###eoif===146###ifc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (AKA_mark("lis===38###sois===748###eois===759###lif===4###soif===135###eoif===146###isc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (spf[i] == i))) {
        int AKA_BLOCK_LOOP_772 = 0;
    AKA_mark("lis===39###sois===777###eois===791###lif===5###soif===164###eoif===178###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");
for (int j = i * i; AKA_mark("lis===39###sois===792###eois===797###lif===5###soif===179###eoif===184###ifc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (AKA_mark("lis===39###sois===792###eois===797###lif===5###soif===179###eoif===184###isc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (j < n)); ({AKA_mark("lis===39###sois===799###eois===805###lif===5###soif===186###eoif===192###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");j += i;})) {
        AKA_BLOCK_LOOP_772++;
        if (AKA_BLOCK_LOOP_772 > 1000) {
            //break;
        }
          if (AKA_mark("lis===40###sois===824###eois===834###lif===6###soif===211###eoif===221###ifc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (AKA_mark("lis===40###sois===824###eois===834###lif===6###soif===211###eoif===221###isc===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)") && (spf[j] > i))) {
AKA_mark("lis===40###sois===836###eois===847###lif===6###soif===223###eoif===234###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");spf[j] = i;
}

else {
AKA_mark("lis===-40-###sois===-824-###eois===-82410-###lif===-6-###soif===-###eoif===-221-###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");
}
        }
      }
else {
AKA_mark("lis===-38-###sois===-748-###eois===-74811-###lif===-4-###soif===-###eoif===-146-###ins===true###function===.\\p11\\1998.cpp\\Solution\\sieve(int)");
}
    }
  }
};

#endif
