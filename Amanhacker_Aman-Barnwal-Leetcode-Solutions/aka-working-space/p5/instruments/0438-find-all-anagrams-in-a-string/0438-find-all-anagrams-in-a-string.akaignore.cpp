/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0438_FIND_ALL_ANAGRAMS_IN_A_STRING_0438_FIND_ALL_ANAGRAMS_IN_A_STRING_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0438_FIND_ALL_ANAGRAMS_IN_A_STRING_0438_FIND_ALL_ANAGRAMS_IN_A_STRING_CPP
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
    
    /** Instrumented function findAnagrams(string,string) */
vector<int> findAnagrams(string txt, string pat) /* << Aka begin of function vector<int> findAnagrams(string txt, string pat) >> */
{AKA_mark("Calling: .\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===292###eois===308###lif===2###soif===66###eoif===82###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");vector<int> res;
	    AKA_mark("lis===17###sois===315###eois===343###lif===3###soif===89###eoif===117###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");unordered_map<char, int> mp;
	    
	    for(auto &ch : pat)                     AKA_mark("lis===19###sois===361###eois===369###lif===5###soif===135###eoif===143###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");
{
AKA_mark("lis===19###sois===397###eois===406###lif===5###soif===171###eoif===180###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");mp[ch]++;
}

AKA_mark("lis===19###sois===361###eois===369###lif===5###soif===135###eoif===143###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");

	    AKA_mark("lis===20###sois===413###eois===435###lif===6###soif===187###eoif===209###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");int count = mp.size();              // Unique characters in pat
	    
	    AKA_mark("lis===22###sois===490###eois===507###lif===8###soif===264###eoif===281###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");int i = 0, j = 0;
	    
	    AKA_mark("lis===24###sois===521###eois===542###lif===10###soif===295###eoif===316###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");int k = pat.length();
	    AKA_mark("lis===25###sois===549###eois===570###lif===11###soif===323###eoif===344###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");int n = txt.length();
	    
	    int AKA_BLOCK_LOOP_584 = 0;
    while(AKA_mark("lis===27###sois===590###eois===595###lif===13###soif===364###eoif===369###ifc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (AKA_mark("lis===27###sois===590###eois===595###lif===13###soif===364###eoif===369###isc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (j < n))) {
        AKA_BLOCK_LOOP_584++;
        if (AKA_BLOCK_LOOP_584 > 1000) {
            //break;
        }
	        
	        if(AKA_mark("lis===29###sois===623###eois===650###lif===15###soif===397###eoif===424###ifc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (AKA_mark("lis===29###sois===623###eois===650###lif===15###soif===397###eoif===424###isc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (mp.find(txt[j]) != mp.end()))) {
	            
	            AKA_mark("lis===31###sois===683###eois===696###lif===17###soif===457###eoif===470###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");mp[txt[j]]--;
	            
	            if(AKA_mark("lis===33###sois===729###eois===744###lif===19###soif===503###eoif===518###ifc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (AKA_mark("lis===33###sois===729###eois===744###lif===19###soif===503###eoif===518###isc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (mp[txt[j]] == 0)))             {
AKA_mark("lis===33###sois===758###eois===766###lif===19###soif===532###eoif===540###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");count--;
}

else {
AKA_mark("lis===-33-###sois===-729-###eois===-72915-###lif===-19-###soif===-###eoif===-518-###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");
}
	        }
else {
AKA_mark("lis===-29-###sois===-623-###eois===-62327-###lif===-15-###soif===-###eoif===-424-###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");
}
	        
	        if(AKA_mark("lis===36###sois===803###eois===816###lif===22###soif===577###eoif===590###ifc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (AKA_mark("lis===36###sois===803###eois===816###lif===22###soif===577###eoif===590###isc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (j - i + 1 < k))) {
	            AKA_mark("lis===37###sois===834###eois===838###lif===23###soif===608###eoif===612###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");j++;
	        }
	        
	        else {
if(AKA_mark("lis===40###sois===880###eois===894###lif===26###soif===654###eoif===668###ifc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (AKA_mark("lis===40###sois===880###eois===894###lif===26###soif===654###eoif===668###isc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (j - i + 1 == k))) {
	            
	            if(AKA_mark("lis===42###sois===930###eois===940###lif===28###soif===704###eoif===714###ifc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (AKA_mark("lis===42###sois===930###eois===940###lif===28###soif===704###eoif===714###isc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (count == 0))) {
	                AKA_mark("lis===43###sois===962###eois===979###lif===29###soif===736###eoif===753###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");res.push_back(i);
	            }
else {
AKA_mark("lis===-42-###sois===-930-###eois===-93010-###lif===-28-###soif===-###eoif===-714-###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");
}
	            
	            // Remove ith index
	            if(AKA_mark("lis===47###sois===1062###eois===1089###lif===33###soif===836###eoif===863###ifc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (AKA_mark("lis===47###sois===1062###eois===1089###lif===33###soif===836###eoif===863###isc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (mp.find(txt[i]) != mp.end()))) {
	                
	                AKA_mark("lis===49###sois===1130###eois===1143###lif===35###soif===904###eoif===917###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");mp[txt[i]]++;
	                
	                if(AKA_mark("lis===51###sois===1184###eois===1199###lif===37###soif===958###eoif===973###ifc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (AKA_mark("lis===51###sois===1184###eois===1199###lif===37###soif===958###eoif===973###isc===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)") && (mp[txt[i]] == 1)))                          {
AKA_mark("lis===51###sois===1226###eois===1234###lif===37###soif===1000###eoif===1008###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");count++;
}

else {
AKA_mark("lis===-51-###sois===-1184-###eois===-118415-###lif===-37-###soif===-###eoif===-973-###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");
}
	            }
else {
AKA_mark("lis===-47-###sois===-1062-###eois===-106227-###lif===-33-###soif===-###eoif===-863-###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");
}
	            
	            AKA_mark("lis===54###sois===1280###eois===1284###lif===40###soif===1054###eoif===1058###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");i++;
	            AKA_mark("lis===55###sois===1299###eois===1303###lif===41###soif===1073###eoif===1077###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");j++;
	        }
else {
AKA_mark("lis===-40-###sois===-880-###eois===-88014-###lif===-26-###soif===-###eoif===-668-###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");
}
}

	    }
	    
	    AKA_mark("lis===59###sois===1337###eois===1348###lif===45###soif===1111###eoif===1122###ins===true###function===.\\p5\\0438-find-all-anagrams-in-a-string\\0438-find-all-anagrams-in-a-string.cpp\\Solution\\findAnagrams(string,string)");return res;
    }
    
};
#endif
