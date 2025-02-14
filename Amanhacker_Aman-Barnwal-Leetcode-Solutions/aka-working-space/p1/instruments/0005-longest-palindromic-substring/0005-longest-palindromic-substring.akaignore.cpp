/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0005_LONGEST_PALINDROMIC_SUBSTRING_0005_LONGEST_PALINDROMIC_SUBSTRING_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P1_0005_LONGEST_PALINDROMIC_SUBSTRING_0005_LONGEST_PALINDROMIC_SUBSTRING_CPP
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
    
    /** Instrumented function longestPalindrome(string) */
string longestPalindrome(string s) /* << Aka begin of function string longestPalindrome(string s) >> */
{AKA_mark("Calling: .\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");AKA_fCall++;
    
        AKA_mark("lis===16###sois===278###eois===294###lif===2###soif===52###eoif===68###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");string res = "";
        AKA_mark("lis===17###sois===304###eois===323###lif===3###soif===78###eoif===97###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");int n = s.length();
        
        AKA_mark("lis===19###sois===343###eois===356###lif===5###soif===117###eoif===130###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");int maxi = 0;
        
        AKA_mark("lis===21###sois===376###eois===422###lif===7###soif===150###eoif===196###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");vector<vector<int>> dp(n, vector<int>(n, -1));
        
        // row - startIndex, column - endIndex
        
        // 1-length string
        int AKA_BLOCK_LOOP_528 = 0;
    AKA_mark("lis===26###sois===532###eois===540###lif===12###soif===306###eoif===314###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");
for(int i=0; AKA_mark("lis===26###sois===541###eois===544###lif===12###soif===315###eoif===318###ifc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (AKA_mark("lis===26###sois===541###eois===544###lif===12###soif===315###eoif===318###isc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (i<n)); ({AKA_mark("lis===26###sois===546###eois===549###lif===12###soif===320###eoif===323###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");i++;}))                      {
AKA_mark("lis===26###sois===572###eois===585###lif===12###soif===346###eoif===359###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");dp[i][i] = 1;
}

        
        AKA_mark("lis===28###sois===605###eois===616###lif===14###soif===379###eoif===390###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");res = s[0];
        
        int AKA_BLOCK_LOOP_636 = 0;
    AKA_mark("lis===30###sois===640###eois===650###lif===16###soif===414###eoif===424###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");
for(int i=n-1; AKA_mark("lis===30###sois===651###eois===655###lif===16###soif===425###eoif===429###ifc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (AKA_mark("lis===30###sois===651###eois===655###lif===16###soif===425###eoif===429###isc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (i>=0)); ({AKA_mark("lis===30###sois===657###eois===660###lif===16###soif===431###eoif===434###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");i--;})) {
        AKA_BLOCK_LOOP_636++;
        if (AKA_BLOCK_LOOP_636 > 1000) {
            //break;
        }
            int AKA_BLOCK_LOOP_677 = 0;
    AKA_mark("lis===31###sois===681###eois===691###lif===17###soif===455###eoif===465###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");
for(int j=i+1; AKA_mark("lis===31###sois===692###eois===695###lif===17###soif===466###eoif===469###ifc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (AKA_mark("lis===31###sois===692###eois===695###lif===17###soif===466###eoif===469###isc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (j<n)); ({AKA_mark("lis===31###sois===697###eois===700###lif===17###soif===471###eoif===474###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");j++;})) {
        AKA_BLOCK_LOOP_677++;
        if (AKA_BLOCK_LOOP_677 > 1000) {
            //break;
        }
                
                // String from index [i, j]
                if(AKA_mark("lis===34###sois===787###eois===799###lif===20###soif===561###eoif===573###ifc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (AKA_mark("lis===34###sois===787###eois===799###lif===20###soif===561###eoif===573###isc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (s[i] == s[j]))) {
                    
                    if(AKA_mark("lis===36###sois===849###eois===888###lif===22###soif===623###eoif===662###ifc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && ((AKA_mark("lis===36###sois===849###eois===863###lif===22###soif===623###eoif===637###isc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (j - i + 1 == 2)) || (AKA_mark("lis===36###sois===867###eois===888###lif===22###soif===641###eoif===662###isc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (dp[i + 1][j - 1] == 1)))) {

                        // If substring from [i+1, j-1] is a palindrome and if s[i] == s[j], then substring from [i, j] is also a palindrome

                        AKA_mark("lis===40###sois===1063###eois===1076###lif===26###soif===837###eoif===850###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");dp[i][j] = 1;
                        AKA_mark("lis===41###sois===1102###eois===1122###lif===27###soif===876###eoif===896###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");int len = j - i + 1;

                        if(AKA_mark("lis===43###sois===1153###eois===1163###lif===29###soif===927###eoif===937###ifc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (AKA_mark("lis===43###sois===1153###eois===1163###lif===29###soif===927###eoif===937###isc===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)") && (len > maxi))) {
                            AKA_mark("lis===44###sois===1196###eois===1207###lif===30###soif===970###eoif===981###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");maxi = len;
                            AKA_mark("lis===45###sois===1237###eois===1260###lif===31###soif===1011###eoif===1034###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");res = s.substr(i, len);
                        }
else {
AKA_mark("lis===-43-###sois===-1153-###eois===-115310-###lif===-29-###soif===-###eoif===-937-###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");
}
                    }
else {
AKA_mark("lis===-36-###sois===-849-###eois===-84939-###lif===-22-###soif===-###eoif===-662-###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");
}
                }
else {
AKA_mark("lis===-34-###sois===-787-###eois===-78712-###lif===-20-###soif===-###eoif===-573-###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");
}
            }
        }
        
        AKA_mark("lis===52###sois===1375###eois===1386###lif===38###soif===1149###eoif===1160###ins===true###function===.\\p1\\0005-longest-palindromic-substring\\0005-longest-palindromic-substring.cpp\\Solution\\longestPalindrome(string)");return res;
    }
    
};
#endif
