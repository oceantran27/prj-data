/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_2000_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P11_2000_CPP
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
  /** Instrumented function reversePrefix(string,char) */
string reversePrefix(string word, char ch) /* << Aka begin of function string reversePrefix(string word, char ch) >> */
{AKA_mark("Calling: .\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");AKA_fCall++;
    AKA_mark("lis===13###sois===267###eois===284###lif===1###soif===50###eoif===67###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");string s1 = word;
    AKA_mark("lis===14###sois===290###eois===302###lif===2###soif===73###eoif===85###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");int pos = 0;
    int AKA_BLOCK_LOOP_308 = 0;
    AKA_mark("lis===15###sois===313###eois===323###lif===3###soif===96###eoif===106###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");
for (int i = 0; AKA_mark("lis===15###sois===324###eois===339###lif===3###soif===107###eoif===122###ifc===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)") && (AKA_mark("lis===15###sois===324###eois===339###lif===3###soif===107###eoif===122###isc===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)") && (i < word.size())); ({AKA_mark("lis===15###sois===341###eois===344###lif===3###soif===124###eoif===127###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");i++;})) {
        AKA_BLOCK_LOOP_308++;
        if (AKA_BLOCK_LOOP_308 > 1000) {
            //break;
        }
      if (AKA_mark("lis===16###sois===359###eois===372###lif===4###soif===142###eoif===155###ifc===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)") && (AKA_mark("lis===16###sois===359###eois===372###lif===4###soif===142###eoif===155###isc===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)") && (word[i] == ch))) {
        AKA_mark("lis===17###sois===385###eois===393###lif===5###soif===168###eoif===176###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");pos = i;
        AKA_mark("lis===18###sois===403###eois===409###lif===6###soif===186###eoif===192###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");break;
      }
else {
AKA_mark("lis===-16-###sois===-359-###eois===-35913-###lif===-4-###soif===-###eoif===-155-###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");
}
    }
    if (AKA_mark("lis===21###sois===435###eois===443###lif===9###soif===218###eoif===226###ifc===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)") && (AKA_mark("lis===21###sois===435###eois===443###lif===9###soif===218###eoif===226###isc===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)") && (pos != 0))) {
AKA_mark("lis===21###sois===445###eois===491###lif===9###soif===228###eoif===274###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");reverse(word.begin(), word.begin() + pos + 1);
}

else {
AKA_mark("lis===-21-###sois===-435-###eois===-4358-###lif===-9-###soif===-###eoif===-226-###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");
}
    AKA_mark("lis===22###sois===497###eois===509###lif===10###soif===280###eoif===292###ins===true###function===.\\p11\\2000.cpp\\Solution\\reversePrefix(string,char)");return word;
  }
};
#endif
