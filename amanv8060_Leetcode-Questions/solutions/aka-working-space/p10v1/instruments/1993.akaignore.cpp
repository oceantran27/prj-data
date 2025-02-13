/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1993_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P10_1993_CPP
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

class LockingTree {
  public:
vector<vector<int>> relations;
  // first value will the parent, remaining values will be children.
  vector<int> locked;

 public:
  /** Instrumented function LockingTree(vector<int>&) */
LockingTree(vector<int>& parent) /* << Aka begin of function  LockingTree(vector<int>& parent) >> */
{AKA_mark("Calling: .\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===18###sois===391###eois===436###lif===1###soif===40###eoif===85###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");vector<vector<int>> relations(parent.size());

    int AKA_BLOCK_LOOP_444 = 0;
    AKA_mark("lis===20###sois===449###eois===459###lif===3###soif===98###eoif===108###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");
for (int i = 0; AKA_mark("lis===20###sois===460###eois===477###lif===3###soif===109###eoif===126###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)") && (AKA_mark("lis===20###sois===460###eois===477###lif===3###soif===109###eoif===126###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)") && (i < parent.size())); ({AKA_mark("lis===20###sois===479###eois===482###lif===3###soif===128###eoif===131###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_444++;
        if (AKA_BLOCK_LOOP_444 > 1000) {
            //break;
        }
      AKA_mark("lis===21###sois===493###eois===527###lif===4###soif===142###eoif===176###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");relations[i].push_back(parent[i]);
    }

    int AKA_BLOCK_LOOP_542 = 0;
    AKA_mark("lis===24###sois===547###eois===557###lif===7###soif===196###eoif===206###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");
for (int i = 0; AKA_mark("lis===24###sois===558###eois===575###lif===7###soif===207###eoif===224###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)") && (AKA_mark("lis===24###sois===558###eois===575###lif===7###soif===207###eoif===224###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)") && (i < parent.size())); ({AKA_mark("lis===24###sois===577###eois===580###lif===7###soif===226###eoif===229###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_542++;
        if (AKA_BLOCK_LOOP_542 > 1000) {
            //break;
        }
      if (AKA_mark("lis===25###sois===595###eois===610###lif===8###soif===244###eoif===259###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)") && (AKA_mark("lis===25###sois===595###eois===610###lif===8###soif===244###eoif===259###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)") && (parent[i] != -1))) {
AKA_mark("lis===25###sois===612###eois===646###lif===8###soif===261###eoif===295###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");relations[parent[i]].push_back(i);
}

else {
AKA_mark("lis===-25-###sois===-595-###eois===-59515-###lif===-8-###soif===-###eoif===-259-###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");
}
    }

    AKA_mark("lis===28###sois===661###eois===689###lif===11###soif===310###eoif===338###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");this->relations = relations;
    AKA_mark("lis===29###sois===695###eois===730###lif===12###soif===344###eoif===379###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");vector<int> temp(parent.size(), 0);
    AKA_mark("lis===30###sois===736###eois===750###lif===13###soif===385###eoif===399###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\LockingTree(vector<int>&)");locked = temp;
  }

  /** Instrumented function lock(int,int) */
bool lock(int num, int user) /* << Aka begin of function bool lock(int num, int user) >> */
{AKA_mark("Calling: .\\p10\\1993.cpp\\LockingTree\\lock(int,int)");AKA_fCall++;
    if (AKA_mark("lis===34###sois===801###eois===817###lif===1###soif===40###eoif===56###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\lock(int,int)") && (AKA_mark("lis===34###sois===801###eois===817###lif===1###soif===40###eoif===56###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\lock(int,int)") && (locked[num] != 0))) {
AKA_mark("lis===34###sois===819###eois===832###lif===1###soif===58###eoif===71###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\lock(int,int)");return false;
}

else {
AKA_mark("lis===-34-###sois===-801-###eois===-80116-###lif===-1-###soif===-###eoif===-56-###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\lock(int,int)");
}

    AKA_mark("lis===36###sois===840###eois===859###lif===3###soif===79###eoif===98###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\lock(int,int)");locked[num] = user;
    AKA_mark("lis===37###sois===865###eois===877###lif===4###soif===104###eoif===116###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\lock(int,int)");return true;
  }

  /** Instrumented function unlock(int,int) */
bool unlock(int num, int user) /* << Aka begin of function bool unlock(int num, int user) >> */
{AKA_mark("Calling: .\\p10\\1993.cpp\\LockingTree\\unlock(int,int)");AKA_fCall++;
    if (AKA_mark("lis===41###sois===930###eois===949###lif===1###soif===42###eoif===61###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\unlock(int,int)") && (AKA_mark("lis===41###sois===930###eois===949###lif===1###soif===42###eoif===61###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\unlock(int,int)") && (locked[num] != user))) {
AKA_mark("lis===41###sois===951###eois===964###lif===1###soif===63###eoif===76###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\unlock(int,int)");return false;
}

else {
AKA_mark("lis===-41-###sois===-930-###eois===-93019-###lif===-1-###soif===-###eoif===-61-###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\unlock(int,int)");
}

    AKA_mark("lis===43###sois===972###eois===988###lif===3###soif===84###eoif===100###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\unlock(int,int)");locked[num] = 0;
    AKA_mark("lis===44###sois===994###eois===1006###lif===4###soif===106###eoif===118###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\unlock(int,int)");return true;
  }

  /** Instrumented function upgrade(int const,int) */
bool upgrade(const int NUM, int user) /* << Aka begin of function bool upgrade(const int NUM, int user) >> */
{AKA_mark("Calling: .\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");AKA_fCall++;
    AKA_mark("lis===48###sois===1062###eois===1076###lif===1###soif===45###eoif===59###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");int num = NUM;

    int AKA_BLOCK_LOOP_1084 = 0;
    while (AKA_mark("lis===50###sois===1091###eois===1099###lif===3###soif===74###eoif===82###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (AKA_mark("lis===50###sois===1091###eois===1099###lif===3###soif===74###eoif===82###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (num >= 0))) {
        AKA_BLOCK_LOOP_1084++;
        if (AKA_BLOCK_LOOP_1084 > 1000) {
            //break;
        }
      if (AKA_mark("lis===51###sois===1114###eois===1130###lif===4###soif===97###eoif===113###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (AKA_mark("lis===51###sois===1114###eois===1130###lif===4###soif===97###eoif===113###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (locked[num] != 0))) {
AKA_mark("lis===51###sois===1132###eois===1145###lif===4###soif===115###eoif===128###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");return false;
}

else {
AKA_mark("lis===-51-###sois===-1114-###eois===-111416-###lif===-4-###soif===-###eoif===-113-###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");
}
      AKA_mark("lis===52###sois===1153###eois===1177###lif===5###soif===136###eoif===160###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");num = relations[num][0];
    }

    AKA_mark("lis===55###sois===1192###eois===1202###lif===8###soif===175###eoif===185###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");num = NUM;

    // finding out all descendants.
    AKA_mark("lis===58###sois===1247###eois===1264###lif===11###soif===230###eoif===247###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");vector<int> desc;
    AKA_mark("lis===59###sois===1270###eois===1283###lif===12###soif===253###eoif===266###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");queue<int> q;
    AKA_mark("lis===60###sois===1289###eois===1301###lif===13###soif===272###eoif===284###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");q.push(num);
    AKA_mark("lis===61###sois===1307###eois===1321###lif===14###soif===290###eoif===304###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");int count = 0;

    int AKA_BLOCK_LOOP_1329 = 0;
    while (AKA_mark("lis===63###sois===1336###eois===1344###lif===16###soif===319###eoif===327###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (AKA_mark("lis===63###sois===1336###eois===1344###lif===16###soif===319###eoif===327###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (q.size()))) {
        AKA_BLOCK_LOOP_1329++;
        if (AKA_BLOCK_LOOP_1329 > 1000) {
            //break;
        }
      AKA_mark("lis===64###sois===1355###eois===1375###lif===17###soif===338###eoif===358###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");int cur = q.front();
      AKA_mark("lis===65###sois===1383###eois===1391###lif===18###soif===366###eoif===374###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");q.pop();
      if (AKA_mark("lis===66###sois===1403###eois===1419###lif===19###soif===386###eoif===402###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (AKA_mark("lis===66###sois===1403###eois===1419###lif===19###soif===386###eoif===402###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (locked[cur] != 0))) {
AKA_mark("lis===66###sois===1421###eois===1429###lif===19###soif===404###eoif===412###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");count++;
}

else {
AKA_mark("lis===-66-###sois===-1403-###eois===-140316-###lif===-19-###soif===-###eoif===-402-###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");
}

      int AKA_BLOCK_LOOP_1439 = 0;
    AKA_mark("lis===68###sois===1444###eois===1454###lif===21###soif===427###eoif===437###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");
for (int i = 1; AKA_mark("lis===68###sois===1455###eois===1480###lif===21###soif===438###eoif===463###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (AKA_mark("lis===68###sois===1455###eois===1480###lif===21###soif===438###eoif===463###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (i < relations[cur].size())); ({AKA_mark("lis===68###sois===1482###eois===1485###lif===21###soif===465###eoif===468###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");i++;})) {
        AKA_BLOCK_LOOP_1439++;
        if (AKA_BLOCK_LOOP_1439 > 1000) {
            //break;
        }
        AKA_mark("lis===69###sois===1498###eois===1525###lif===22###soif===481###eoif===508###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");int nx = relations[cur][i];
        AKA_mark("lis===70###sois===1535###eois===1546###lif===23###soif===518###eoif===529###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");q.push(nx);
      }

      AKA_mark("lis===73###sois===1565###eois===1585###lif===26###soif===548###eoif===568###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");desc.push_back(cur);
    }

    // atleast one descendant should have been locked.
    if (AKA_mark("lis===77###sois===1660###eois===1670###lif===30###soif===643###eoif===653###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (AKA_mark("lis===77###sois===1660###eois===1670###lif===30###soif===643###eoif===653###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (count == 0))) {
AKA_mark("lis===77###sois===1672###eois===1685###lif===30###soif===655###eoif===668###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");return false;
}

else {
AKA_mark("lis===-77-###sois===-1660-###eois===-166010-###lif===-30-###soif===-###eoif===-653-###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");
}

    // all conditions met, unlock all the descendants:
    int AKA_BLOCK_LOOP_1749 = 0;
    AKA_mark("lis===80###sois===1754###eois===1764###lif===33###soif===737###eoif===747###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");
for (int i = 0; AKA_mark("lis===80###sois===1765###eois===1780###lif===33###soif===748###eoif===763###ifc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (AKA_mark("lis===80###sois===1765###eois===1780###lif===33###soif===748###eoif===763###isc===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)") && (i < desc.size())); ({AKA_mark("lis===80###sois===1782###eois===1785###lif===33###soif===765###eoif===768###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");i++;})) {
        AKA_BLOCK_LOOP_1749++;
        if (AKA_BLOCK_LOOP_1749 > 1000) {
            //break;
        }
      AKA_mark("lis===81###sois===1796###eois===1816###lif===34###soif===779###eoif===799###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");locked[desc[i]] = 0;
    }

    AKA_mark("lis===84###sois===1831###eois===1850###lif===37###soif===814###eoif===833###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");locked[num] = user;
    AKA_mark("lis===85###sois===1856###eois===1868###lif===38###soif===839###eoif===851###ins===true###function===.\\p10\\1993.cpp\\LockingTree\\upgrade(int const,int)");return true;
  }
};

#endif
