/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0211_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_0211_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P4_0211_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_0211_DESIGN_ADD_AND_SEARCH_WORDS_DATA_STRUCTURE_CPP
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

class WordDictionary {
public:
public:
    
    vector<string> v;

    /** Instrumented function WordDictionary() */
WordDictionary() /* << Aka begin of function  WordDictionary() >> */
{AKA_mark("Calling: .\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\WordDictionary()");AKA_fCall++;
    
    }
    
    /** Instrumented function addWord(string) */
void addWord(string word) /* << Aka begin of function void addWord(string word) >> */
{AKA_mark("Calling: .\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\addWord(string)");AKA_fCall++;
        AKA_mark("lis===21###sois===337###eois===355###lif===1###soif===37###eoif===55###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\addWord(string)");v.push_back(word);
        AKA_mark("lis===22###sois===365###eois===372###lif===2###soif===65###eoif===72###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\addWord(string)");return;
    }
    
    /** Instrumented function search(string) */
bool search(string word) /* << Aka begin of function bool search(string word) >> */
{AKA_mark("Calling: .\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");AKA_fCall++;
       
        // Regex Expression
        
        AKA_mark("lis===29###sois===475###eois===499###lif===4###soif===84###eoif===108###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");int len = word.length();
        
        for(auto &str : v) {
AKA_mark("lis===31###sois===523###eois===532###lif===6###soif===132###eoif===141###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");
{
            
            if(AKA_mark("lis===33###sois===570###eois===589###lif===8###soif===179###eoif===198###ifc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (AKA_mark("lis===33###sois===570###eois===589###lif===8###soif===179###eoif===198###isc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (str.length() == len))) {
                
                AKA_mark("lis===35###sois===628###eois===645###lif===10###soif===237###eoif===254###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");bool flag = true;

                int AKA_BLOCK_LOOP_665 = 0;
    AKA_mark("lis===37###sois===669###eois===677###lif===12###soif===278###eoif===286###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");
for(int i=0; AKA_mark("lis===37###sois===678###eois===683###lif===12###soif===287###eoif===292###ifc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (AKA_mark("lis===37###sois===678###eois===683###lif===12###soif===287###eoif===292###isc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (i<len)); ({AKA_mark("lis===37###sois===685###eois===688###lif===12###soif===294###eoif===297###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");i++;})) {
        AKA_BLOCK_LOOP_665++;
        if (AKA_BLOCK_LOOP_665 > 1000) {
            //break;
        }
                
                    if(AKA_mark("lis===39###sois===734###eois===748###lif===14###soif===343###eoif===357###ifc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (AKA_mark("lis===39###sois===734###eois===748###lif===14###soif===343###eoif===357###isc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (word[i] != '.'))) {
                        
                        if(AKA_mark("lis===41###sois===806###eois===823###lif===16###soif===415###eoif===432###ifc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (AKA_mark("lis===41###sois===806###eois===823###lif===16###soif===415###eoif===432###isc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (str[i] != word[i]))) {
                            AKA_mark("lis===42###sois===856###eois===869###lif===17###soif===465###eoif===478###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");flag = false;
                            AKA_mark("lis===43###sois===899###eois===907###lif===18###soif===508###eoif===516###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");i = len;
                        }
else {
AKA_mark("lis===-41-###sois===-806-###eois===-80617-###lif===-16-###soif===-###eoif===-432-###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");
}
                    }
else {
AKA_mark("lis===-39-###sois===-734-###eois===-73414-###lif===-14-###soif===-###eoif===-357-###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");
}
                }
                
                if(AKA_mark("lis===48###sois===1015###eois===1027###lif===23###soif===624###eoif===636###ifc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (AKA_mark("lis===48###sois===1015###eois===1027###lif===23###soif===624###eoif===636###isc===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)") && (flag == true)))                        {
AKA_mark("lis===48###sois===1052###eois===1064###lif===23###soif===661###eoif===673###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");return true;
}

else {
AKA_mark("lis===-48-###sois===-1015-###eois===-101512-###lif===-23-###soif===-###eoif===-636-###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");
}
            }
else {
AKA_mark("lis===-33-###sois===-570-###eois===-57019-###lif===-8-###soif===-###eoif===-198-###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");
}
        }}
AKA_mark("lis===31###sois===523###eois===532###lif===6###soif===132###eoif===141###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");

        
        AKA_mark("lis===52###sois===1110###eois===1123###lif===27###soif===719###eoif===732###ins===true###function===.\\p4\\0211-design-add-and-search-words-data-structure\\0211-design-add-and-search-words-data-structure.cpp\\WordDictionary\\search(string)");return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
#endif
