/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1054_DISTANT_BARCODES_1054_DISTANT_BARCODES_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_1054_DISTANT_BARCODES_1054_DISTANT_BARCODES_CPP
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
    
    /** Instrumented function rearrangeBarcodes(vector<int>&) */
vector<int> rearrangeBarcodes(vector<int>& v) /* << Aka begin of function vector<int> rearrangeBarcodes(vector<int>& v) >> */
{AKA_mark("Calling: .\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===289###eois===305###lif===2###soif===63###eoif===79###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");vector<int> res;
        
        AKA_mark("lis===18###sois===325###eois===342###lif===4###soif===99###eoif===116###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");int n = v.size();
        AKA_mark("lis===19###sois===352###eois===386###lif===5###soif===126###eoif===160###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");priority_queue<pair<int, int>> pq;          // 1st arg - Freq, 2nd arg - Element
        
        AKA_mark("lis===21###sois===452###eois===478###lif===7###soif===226###eoif===252###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");unordered_map<int, int> u;                  // 1st arg - Element, 2nd arg - Freq
        
        for(auto &x : v)                            AKA_mark("lis===23###sois===556###eois===563###lif===9###soif===330###eoif===337###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");
{
AKA_mark("lis===23###sois===596###eois===603###lif===9###soif===370###eoif===377###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");u[x]++;
}

AKA_mark("lis===23###sois===556###eois===563###lif===9###soif===330###eoif===337###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");

        for(auto &x : u)                            AKA_mark("lis===24###sois===617###eois===624###lif===10###soif===391###eoif===398###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");
{
AKA_mark("lis===24###sois===657###eois===686###lif===10###soif===431###eoif===460###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pq.push({x.second, x.first});
}

AKA_mark("lis===24###sois===617###eois===624###lif===10###soif===391###eoif===398###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");

        
        AKA_mark("lis===26###sois===706###eois===740###lif===12###soif===480###eoif===514###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pair<int, int> prevEle = pq.top();
        AKA_mark("lis===27###sois===750###eois===759###lif===13###soif===524###eoif===533###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pq.pop();
        
        AKA_mark("lis===29###sois===779###eois===805###lif===15###soif===553###eoif===579###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");int prev = prevEle.second;
        AKA_mark("lis===30###sois===815###eois===844###lif===16###soif===589###eoif===618###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");int prevFreq = prevEle.first;
        
        AKA_mark("lis===32###sois===864###eois===884###lif===18###soif===638###eoif===658###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");res.push_back(prev);

        if(AKA_mark("lis===34###sois===899###eois===912###lif===20###soif===673###eoif===686###ifc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (AKA_mark("lis===34###sois===899###eois===912###lif===20###soif===673###eoif===686###isc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (prevFreq >= 2)))                              {
AKA_mark("lis===34###sois===943###eois===973###lif===20###soif===717###eoif===747###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pq.push({prevFreq - 1, prev});
}

else {
AKA_mark("lis===-34-###sois===-899-###eois===-89913-###lif===-20-###soif===-###eoif===-686-###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");
}
        
        int AKA_BLOCK_LOOP_993 = 0;
    while(AKA_mark("lis===36###sois===999###eois===1018###lif===22###soif===773###eoif===792###ifc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (AKA_mark("lis===36###sois===999###eois===1018###lif===22###soif===773###eoif===792###isc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (pq.empty() == false))) {
        AKA_BLOCK_LOOP_993++;
        if (AKA_BLOCK_LOOP_993 > 1000) {
            //break;
        }
            
            AKA_mark("lis===38###sois===1049###eois===1080###lif===24###soif===823###eoif===854###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pair<int, int> temp = pq.top();
            AKA_mark("lis===39###sois===1094###eois===1103###lif===25###soif===868###eoif===877###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pq.pop();
            
            if(AKA_mark("lis===41###sois===1134###eois===1153###lif===27###soif===908###eoif===927###ifc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (AKA_mark("lis===41###sois===1134###eois===1153###lif===27###soif===908###eoif===927###isc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (prev != temp.second))) {
                
                AKA_mark("lis===43###sois===1192###eois===1219###lif===29###soif===966###eoif===993###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");res.push_back(temp.second);
            
                AKA_mark("lis===45###sois===1251###eois===1273###lif===31###soif===1025###eoif===1047###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");int freq = temp.first;
                if(AKA_mark("lis===46###sois===1294###eois===1303###lif===32###soif===1068###eoif===1077###ifc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (AKA_mark("lis===46###sois===1294###eois===1303###lif===32###soif===1068###eoif===1077###isc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (freq >= 2)))                           {
AKA_mark("lis===46###sois===1331###eois===1364###lif===32###soif===1105###eoif===1138###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pq.push({freq - 1, temp.second});
}

else {
AKA_mark("lis===-46-###sois===-1294-###eois===-12949-###lif===-32-###soif===-###eoif===-1077-###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");
}
                
                AKA_mark("lis===48###sois===1400###eois===1419###lif===34###soif===1174###eoif===1193###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");prev = temp.second;
            }
            
            else {
if(AKA_mark("lis===51###sois===1470###eois===1489###lif===37###soif===1244###eoif===1263###ifc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (AKA_mark("lis===51###sois===1470###eois===1489###lif===37###soif===1244###eoif===1263###isc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (prev == temp.second))){
                
                // Pop the first two max occuring element, and decrease the freq by 1 of 2nd most frequent element
                if(AKA_mark("lis===54###sois===1646###eois===1660###lif===40###soif===1420###eoif===1434###ifc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (AKA_mark("lis===54###sois===1646###eois===1660###lif===40###soif===1420###eoif===1434###isc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (pq.size() >= 1))) {
                    
                    AKA_mark("lis===56###sois===1707###eois===1744###lif===42###soif===1481###eoif===1518###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pair<int, int> tempSecond = pq.top();
                    AKA_mark("lis===57###sois===1766###eois===1775###lif===43###soif===1540###eoif===1549###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pq.pop();
                    
                    AKA_mark("lis===59###sois===1819###eois===1848###lif===45###soif===1593###eoif===1622###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");int freq2 = tempSecond.first;
                    AKA_mark("lis===60###sois===1870###eois===1898###lif===46###soif===1644###eoif===1672###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");int ele = tempSecond.second;
                    
                    AKA_mark("lis===62###sois===1942###eois===1961###lif===48###soif===1716###eoif===1735###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");res.push_back(ele);
                    AKA_mark("lis===63###sois===1983###eois===1994###lif===49###soif===1757###eoif===1768###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");prev = ele;
                    
                   if(AKA_mark("lis===65###sois===2040###eois===2050###lif===51###soif===1814###eoif===1824###ifc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (AKA_mark("lis===65###sois===2040###eois===2050###lif===51###soif===1814###eoif===1824###isc===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)") && (freq2 >= 2)))                           {
AKA_mark("lis===65###sois===2078###eois===2104###lif===51###soif===1852###eoif===1878###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pq.push({freq2 - 1, ele});
}

else {
AKA_mark("lis===-65-###sois===-2040-###eois===-204010-###lif===-51-###soif===-###eoif===-1824-###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");
}
                
                    // Also, push the 1st temp
                    AKA_mark("lis===68###sois===2192###eois===2206###lif===54###soif===1966###eoif===1980###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");pq.push(temp);
                }
else {
AKA_mark("lis===-54-###sois===-1646-###eois===-164614-###lif===-40-###soif===-###eoif===-1434-###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");
}
                
                
            }
else {
AKA_mark("lis===-51-###sois===-1470-###eois===-147019-###lif===-37-###soif===-###eoif===-1263-###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");
}
}

           
        }
        
        AKA_mark("lis===76###sois===2320###eois===2331###lif===62###soif===2094###eoif===2105###ins===true###function===.\\p12\\1054-distant-barcodes\\1054-distant-barcodes.cpp\\Solution\\rearrangeBarcodes(vector<int>&)");return res;
    }
    
};
#endif
