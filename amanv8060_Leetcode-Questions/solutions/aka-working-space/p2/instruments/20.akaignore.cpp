/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_20_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P2_20_CPP
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
  /** Instrumented function isValid(string) */
bool isValid(string s) /* << Aka begin of function bool isValid(string s) >> */
{AKA_mark("Calling: .\\p2\\20.cpp\\Solution\\isValid(string)");AKA_fCall++;
    AKA_mark("lis===14###sois===249###eois===264###lif===1###soif===30###eoif===45###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");stack<char> st;
    int AKA_BLOCK_LOOP_270 = 0;
    AKA_mark("lis===15###sois===275###eois===285###lif===2###soif===56###eoif===66###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");
for (int i = 0; AKA_mark("lis===15###sois===286###eois===298###lif===2###soif===67###eoif===79###ifc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (AKA_mark("lis===15###sois===286###eois===298###lif===2###soif===67###eoif===79###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (i < s.size())); ({AKA_mark("lis===15###sois===300###eois===303###lif===2###soif===81###eoif===84###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");i++;})) {
        AKA_BLOCK_LOOP_270++;
        if (AKA_BLOCK_LOOP_270 > 1000) {
            //break;
        }
      if (AKA_mark("lis===16###sois===318###eois===359###lif===3###soif===99###eoif===140###ifc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (((AKA_mark("lis===16###sois===318###eois===329###lif===3###soif===99###eoif===110###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (s[i] == '(')) || (AKA_mark("lis===16###sois===333###eois===344###lif===3###soif===114###eoif===125###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (s[i] == '['))) || (AKA_mark("lis===16###sois===348###eois===359###lif===3###soif===129###eoif===140###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (s[i] == '{'))))
        {
AKA_mark("lis===17###sois===370###eois===384###lif===4###soif===151###eoif===165###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");st.push(s[i]);
}

      else {
if (AKA_mark("lis===18###sois===401###eois===412###lif===5###soif===182###eoif===193###ifc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (AKA_mark("lis===18###sois===401###eois===412###lif===5###soif===182###eoif===193###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (s[i] == ')'))) {
        if (AKA_mark("lis===19###sois===429###eois===459###lif===6###soif===210###eoif===240###ifc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && ((AKA_mark("lis===19###sois===429###eois===440###lif===6###soif===210###eoif===221###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (!st.empty())) && (AKA_mark("lis===19###sois===444###eois===459###lif===6###soif===225###eoif===240###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (st.top() == '('))))
          {
AKA_mark("lis===20###sois===472###eois===481###lif===7###soif===253###eoif===262###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");st.pop();
}

        else
          {
AKA_mark("lis===22###sois===507###eois===520###lif===9###soif===288###eoif===301###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");return false;
}

      } else {
if (AKA_mark("lis===23###sois===539###eois===550###lif===10###soif===320###eoif===331###ifc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (AKA_mark("lis===23###sois===539###eois===550###lif===10###soif===320###eoif===331###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (s[i] == ']'))) {
        if (AKA_mark("lis===24###sois===567###eois===597###lif===11###soif===348###eoif===378###ifc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && ((AKA_mark("lis===24###sois===567###eois===578###lif===11###soif===348###eoif===359###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (!st.empty())) && (AKA_mark("lis===24###sois===582###eois===597###lif===11###soif===363###eoif===378###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (st.top() == '['))))
          {
AKA_mark("lis===25###sois===610###eois===619###lif===12###soif===391###eoif===400###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");st.pop();
}

        else
          {
AKA_mark("lis===27###sois===645###eois===658###lif===14###soif===426###eoif===439###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");return false;
}

      } else {
if (AKA_mark("lis===28###sois===677###eois===688###lif===15###soif===458###eoif===469###ifc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (AKA_mark("lis===28###sois===677###eois===688###lif===15###soif===458###eoif===469###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (s[i] == '}'))) {
        if (AKA_mark("lis===29###sois===705###eois===735###lif===16###soif===486###eoif===516###ifc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && ((AKA_mark("lis===29###sois===705###eois===716###lif===16###soif===486###eoif===497###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (!st.empty())) && (AKA_mark("lis===29###sois===720###eois===735###lif===16###soif===501###eoif===516###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (st.top() == '{'))))
          {
AKA_mark("lis===30###sois===748###eois===757###lif===17###soif===529###eoif===538###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");st.pop();
}

        else
          {
AKA_mark("lis===32###sois===783###eois===796###lif===19###soif===564###eoif===577###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");return false;
}

      } else
        {
AKA_mark("lis===34###sois===820###eois===833###lif===21###soif===601###eoif===614###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");return false;
}

}

}

}

    }
    if (AKA_mark("lis===36###sois===850###eois===861###lif===23###soif===631###eoif===642###ifc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (AKA_mark("lis===36###sois===850###eois===861###lif===23###soif===631###eoif===642###isc===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)") && (!st.empty()))) {
AKA_mark("lis===36###sois===863###eois===876###lif===23###soif===644###eoif===657###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");return false;
}

else {
AKA_mark("lis===-36-###sois===-850-###eois===-85011-###lif===-23-###soif===-###eoif===-642-###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");
}
    AKA_mark("lis===37###sois===882###eois===894###lif===24###soif===663###eoif===675###ins===true###function===.\\p2\\20.cpp\\Solution\\isValid(string)");return true;
  }
};
#endif
