/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0096_UNIQUE_BINARY_SEARCH_TREES_0096_UNIQUE_BINARY_SEARCH_TREES_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0096_UNIQUE_BINARY_SEARCH_TREES_0096_UNIQUE_BINARY_SEARCH_TREES_CPP
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
    
    /** Instrumented function numTrees(int) */
int numTrees(int n) /* << Aka begin of function int numTrees(int n) >> */
{AKA_mark("Calling: .\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");AKA_fCall++;
    
        // We have to find the no of structurally unique BSTs which has exactly n nodes of unique values from [1, n]
        
        // For each i in [1, n], consider each i as root node
        
        // Let's say, the left child of root node i will give us total c1 unique BST, 
        // and right child gives c2 unique BST.
        
        // So, the total no of unique BSTs considering node i as root is c1 * c2
        
        // If n = 4 i.e [1, 2, 3, 4]
        // No of unique BSTs = c0 * c3 + c1 * c2 + c2 * c1 + c3 * c0
        
        // I.e We just need to calculate catalan number
        // Cn = for i in [0, n]         C(i) * C(n - i - 1)
        
        AKA_mark("lis===31###sois===949###eois===975###lif===17###soif===723###eoif===749###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");vector<int> cat(n + 1, 0);
        
        AKA_mark("lis===33###sois===995###eois===1006###lif===19###soif===769###eoif===780###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");cat[0] = 1;
        AKA_mark("lis===34###sois===1016###eois===1027###lif===20###soif===790###eoif===801###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");cat[1] = 1;
        
        if(AKA_mark("lis===36###sois===1050###eois===1056###lif===22###soif===824###eoif===830###ifc===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)") && (AKA_mark("lis===36###sois===1050###eois===1056###lif===22###soif===824###eoif===830###isc===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)") && (n <= 1)))                      {
AKA_mark("lis===36###sois===1079###eois===1093###lif===22###soif===853###eoif===867###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");return cat[n];
}

else {
AKA_mark("lis===-36-###sois===-1050-###eois===-10506-###lif===-22-###soif===-###eoif===-830-###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");
}
        
        int AKA_BLOCK_LOOP_1113 = 0;
    AKA_mark("lis===38###sois===1117###eois===1125###lif===24###soif===891###eoif===899###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");
for(int i=2; AKA_mark("lis===38###sois===1126###eois===1130###lif===24###soif===900###eoif===904###ifc===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)") && (AKA_mark("lis===38###sois===1126###eois===1130###lif===24###soif===900###eoif===904###isc===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)") && (i<=n)); ({AKA_mark("lis===38###sois===1132###eois===1135###lif===24###soif===906###eoif===909###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");i++;})) {
        AKA_BLOCK_LOOP_1113++;
        if (AKA_BLOCK_LOOP_1113 > 1000) {
            //break;
        }
            
            AKA_mark("lis===40###sois===1166###eois===1177###lif===26###soif===940###eoif===951###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");cat[i] = 0;             
            
            int AKA_BLOCK_LOOP_1218 = 0;
    AKA_mark("lis===42###sois===1222###eois===1230###lif===28###soif===996###eoif===1004###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");
for(int j=0; AKA_mark("lis===42###sois===1231###eois===1234###lif===28###soif===1005###eoif===1008###ifc===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)") && (AKA_mark("lis===42###sois===1231###eois===1234###lif===28###soif===1005###eoif===1008###isc===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)") && (j<i)); ({AKA_mark("lis===42###sois===1236###eois===1239###lif===28###soif===1010###eoif===1013###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");j++;}))      {
AKA_mark("lis===42###sois===1246###eois===1280###lif===28###soif===1020###eoif===1054###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");cat[i] += cat[j] * cat[i - j - 1];
}

        }
        
        AKA_mark("lis===45###sois===1311###eois===1325###lif===31###soif===1085###eoif===1099###ins===true###function===.\\p2\\0096-unique-binary-search-trees\\0096-unique-binary-search-trees.cpp\\Solution\\numTrees(int)");return cat[n];
    }
    
};
#endif
