/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2014_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2014_CPP
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
  int n;
  string s;
  string ans;
  vector<int> cnt;
  string prefix;
  int k;

  /** Instrumented function valid() */
bool valid() /* << Aka begin of function bool valid() >> */
{AKA_mark("Calling: .\\p12\\2014.cpp\\Solution\\valid()");AKA_fCall++;
    if (AKA_mark("lis===20###sois===329###eois===343###lif===1###soif===24###eoif===38###ifc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (AKA_mark("lis===20###sois===329###eois===343###lif===1###soif===24###eoif===38###isc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (prefix.empty()))) {
AKA_mark("lis===20###sois===345###eois===357###lif===1###soif===40###eoif===52###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");return true;
}

else {
AKA_mark("lis===-20-###sois===-329-###eois===-32914-###lif===-1-###soif===-###eoif===-38-###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");
}
    if (AKA_mark("lis===21###sois===367###eois===390###lif===2###soif===62###eoif===85###ifc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (AKA_mark("lis===21###sois===367###eois===390###lif===2###soif===62###eoif===85###isc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (prefix.size() > (n / k)))) {
AKA_mark("lis===21###sois===392###eois===405###lif===2###soif===87###eoif===100###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");return false;
}

else {
AKA_mark("lis===-21-###sois===-367-###eois===-36723-###lif===-2-###soif===-###eoif===-85-###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");
}

    AKA_mark("lis===23###sois===413###eois===424###lif===4###soif===108###eoif===119###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");int k1 = 0;
    AKA_mark("lis===24###sois===430###eois===440###lif===5###soif===125###eoif===135###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");int j = 0;

    int AKA_BLOCK_LOOP_448 = 0;
    AKA_mark("lis===26###sois===453###eois===463###lif===7###soif===148###eoif===158###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");
for (int i = 0; AKA_mark("lis===26###sois===464###eois===469###lif===7###soif===159###eoif===164###ifc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (AKA_mark("lis===26###sois===464###eois===469###lif===7###soif===159###eoif===164###isc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (i < n)); ({AKA_mark("lis===26###sois===471###eois===474###lif===7###soif===166###eoif===169###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");i++;})) {
        AKA_BLOCK_LOOP_448++;
        if (AKA_BLOCK_LOOP_448 > 1000) {
            //break;
        }
      if (AKA_mark("lis===27###sois===489###eois===506###lif===8###soif===184###eoif===201###ifc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (AKA_mark("lis===27###sois===489###eois===506###lif===8###soif===184###eoif===201###isc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (prefix[j] == s[i]))) {
        AKA_mark("lis===28###sois===519###eois===523###lif===9###soif===214###eoif===218###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");j++;
        if (AKA_mark("lis===29###sois===537###eois===555###lif===10###soif===232###eoif===250###ifc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (AKA_mark("lis===29###sois===537###eois===555###lif===10###soif===232###eoif===250###isc===true###function===.\\p12\\2014.cpp\\Solution\\valid()") && (j == prefix.size()))) {
          AKA_mark("lis===30###sois===570###eois===575###lif===11###soif===265###eoif===270###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");k1++;
          AKA_mark("lis===31###sois===587###eois===593###lif===12###soif===282###eoif===288###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");j = 0;
        }
else {
AKA_mark("lis===-29-###sois===-537-###eois===-53718-###lif===-10-###soif===-###eoif===-250-###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");
}
      }
else {
AKA_mark("lis===-27-###sois===-489-###eois===-48917-###lif===-8-###soif===-###eoif===-201-###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");
}
    }

    AKA_mark("lis===36###sois===628###eois===643###lif===17###soif===323###eoif===338###ins===true###function===.\\p12\\2014.cpp\\Solution\\valid()");return k1 >= k;
  }

  /** Instrumented function dfs() */
void dfs() /* << Aka begin of function void dfs() >> */
{AKA_mark("Calling: .\\p12\\2014.cpp\\Solution\\dfs()");AKA_fCall++;
    if (AKA_mark("lis===40###sois===676###eois===692###lif===1###soif===22###eoif===38###ifc===true###function===.\\p12\\2014.cpp\\Solution\\dfs()") && (AKA_mark("lis===40###sois===676###eois===692###lif===1###soif===22###eoif===38###isc===true###function===.\\p12\\2014.cpp\\Solution\\dfs()") && (valid() == false))) {
AKA_mark("lis===40###sois===694###eois===701###lif===1###soif===40###eoif===47###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");return;
}

else {
AKA_mark("lis===-40-###sois===-676-###eois===-67616-###lif===-1-###soif===-###eoif===-38-###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");
}
    if (AKA_mark("lis===41###sois===711###eois===737###lif===2###soif===57###eoif===83###ifc===true###function===.\\p12\\2014.cpp\\Solution\\dfs()") && (AKA_mark("lis===41###sois===711###eois===737###lif===2###soif===57###eoif===83###isc===true###function===.\\p12\\2014.cpp\\Solution\\dfs()") && (ans.size() < prefix.size()))) {
AKA_mark("lis===41###sois===739###eois===752###lif===2###soif===85###eoif===98###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");ans = prefix;
}

else {
AKA_mark("lis===-41-###sois===-711-###eois===-71126-###lif===-2-###soif===-###eoif===-83-###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");
}

    int AKA_BLOCK_LOOP_760 = 0;
    AKA_mark("lis===43###sois===765###eois===778###lif===4###soif===111###eoif===124###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");
for (char c = 'z'; AKA_mark("lis===43###sois===779###eois===787###lif===4###soif===125###eoif===133###ifc===true###function===.\\p12\\2014.cpp\\Solution\\dfs()") && (AKA_mark("lis===43###sois===779###eois===787###lif===4###soif===125###eoif===133###isc===true###function===.\\p12\\2014.cpp\\Solution\\dfs()") && (c >= 'a')); ({AKA_mark("lis===43###sois===789###eois===792###lif===4###soif===135###eoif===138###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");c--;})) {
        AKA_BLOCK_LOOP_760++;
        if (AKA_BLOCK_LOOP_760 > 1000) {
            //break;
        }
      AKA_mark("lis===44###sois===803###eois===825###lif===5###soif===149###eoif===171###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");int& d = cnt[c - 'a'];
      if (AKA_mark("lis===45###sois===837###eois===842###lif===6###soif===183###eoif===188###ifc===true###function===.\\p12\\2014.cpp\\Solution\\dfs()") && (AKA_mark("lis===45###sois===837###eois===842###lif===6###soif===183###eoif===188###isc===true###function===.\\p12\\2014.cpp\\Solution\\dfs()") && (d < k))) {
AKA_mark("lis===45###sois===844###eois===853###lif===6###soif===190###eoif===199###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");continue;
}

else {
AKA_mark("lis===-45-###sois===-837-###eois===-8375-###lif===-6-###soif===-###eoif===-188-###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");
}
      AKA_mark("lis===46###sois===861###eois===868###lif===7###soif===207###eoif===214###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");d -= k;
      AKA_mark("lis===47###sois===876###eois===896###lif===8###soif===222###eoif===242###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");prefix.push_back(c);
      AKA_mark("lis===48###sois===904###eois===910###lif===9###soif===250###eoif===256###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");dfs();
      AKA_mark("lis===49###sois===918###eois===936###lif===10###soif===264###eoif===282###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");prefix.pop_back();
      AKA_mark("lis===50###sois===944###eois===951###lif===11###soif===290###eoif===297###ins===true###function===.\\p12\\2014.cpp\\Solution\\dfs()");d += k;
    }
  }

  /** Instrumented function longestSubsequenceRepeatedK(string,int) */
string longestSubsequenceRepeatedK(string str, int k1) /* << Aka begin of function string longestSubsequenceRepeatedK(string str, int k1) >> */
{AKA_mark("Calling: .\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");AKA_fCall++;
    AKA_mark("lis===55###sois===1031###eois===1046###lif===1###soif===62###eoif===77###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");n = str.size();
    AKA_mark("lis===56###sois===1052###eois===1059###lif===2###soif===83###eoif===90###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");k = k1;
    AKA_mark("lis===57###sois===1065###eois===1090###lif===3###soif===96###eoif===121###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");cnt = vector<int>(27, 0);

    for (auto c : str) {
AKA_mark("lis===59###sois===1103###eois===1109###lif===5###soif===134###eoif===140###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");
{
      AKA_mark("lis===60###sois===1126###eois===1141###lif===6###soif===157###eoif===172###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");cnt[c - 'a']++;
    }}
AKA_mark("lis===59###sois===1103###eois===1109###lif===5###soif===134###eoif===140###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");


    for (auto c : str) {
AKA_mark("lis===63###sois===1161###eois===1167###lif===9###soif===192###eoif===198###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");
{
      if (AKA_mark("lis===64###sois===1188###eois===1204###lif===10###soif===219###eoif===235###ifc===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)") && (AKA_mark("lis===64###sois===1188###eois===1204###lif===10###soif===219###eoif===235###isc===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)") && (cnt[c - 'a'] < k))) {
AKA_mark("lis===64###sois===1206###eois===1215###lif===10###soif===237###eoif===246###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");continue;
}

else {
AKA_mark("lis===-64-###sois===-1188-###eois===-118816-###lif===-10-###soif===-###eoif===-235-###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");
}
      AKA_mark("lis===65###sois===1223###eois===1238###lif===11###soif===254###eoif===269###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");s.push_back(c);
    }}
AKA_mark("lis===63###sois===1161###eois===1167###lif===9###soif===192###eoif===198###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");

    AKA_mark("lis===67###sois===1251###eois===1264###lif===13###soif===282###eoif===295###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");n = s.size();
    AKA_mark("lis===68###sois===1270###eois===1288###lif===14###soif===301###eoif===319###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");prefix.reserve(8);
    AKA_mark("lis===69###sois===1294###eois===1300###lif===15###soif===325###eoif===331###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");dfs();
    AKA_mark("lis===70###sois===1306###eois===1317###lif===16###soif===337###eoif===348###ins===true###function===.\\p12\\2014.cpp\\Solution\\longestSubsequenceRepeatedK(string,int)");return ans;
  }
};

#endif
