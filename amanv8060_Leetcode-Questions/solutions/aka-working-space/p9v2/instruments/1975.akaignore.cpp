/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1975_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P9_1975_CPP
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
  /** Instrumented function maxMatrixSum(vector<vector<int>>&) */
long long maxMatrixSum(vector<vector<int>>& matrix) /* << Aka begin of function long long maxMatrixSum(vector<vector<int>>& matrix) >> */
{AKA_mark("Calling: .\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===278###eois===322###lif===1###soif===59###eoif===103###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");int r = matrix.size(), c = matrix[0].size();

    // we need to find the min number in the matrix and also count of negative
    // numbers in the matrix
    AKA_mark("lis===18###sois===440###eois===471###lif===5###soif===221###eoif===252###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");int small = INT_MAX, count = 0;
    AKA_mark("lis===19###sois===477###eois===499###lif===6###soif===258###eoif===280###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");long long int sum = 0;

    int AKA_BLOCK_LOOP_507 = 0;
    AKA_mark("lis===21###sois===512###eois===522###lif===8###soif===293###eoif===303###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");
for (int i = 0; AKA_mark("lis===21###sois===523###eois===528###lif===8###soif===304###eoif===309###ifc===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)") && (AKA_mark("lis===21###sois===523###eois===528###lif===8###soif===304###eoif===309###isc===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)") && (i < r)); ({AKA_mark("lis===21###sois===530###eois===533###lif===8###soif===311###eoif===314###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");i++;})) {
        AKA_BLOCK_LOOP_507++;
        if (AKA_BLOCK_LOOP_507 > 1000) {
            //break;
        }
      int AKA_BLOCK_LOOP_544 = 0;
    AKA_mark("lis===22###sois===549###eois===559###lif===9###soif===330###eoif===340###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");
for (int j = 0; AKA_mark("lis===22###sois===560###eois===565###lif===9###soif===341###eoif===346###ifc===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)") && (AKA_mark("lis===22###sois===560###eois===565###lif===9###soif===341###eoif===346###isc===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)") && (j < c)); ({AKA_mark("lis===22###sois===567###eois===570###lif===9###soif===348###eoif===351###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");j++;})) {
        AKA_BLOCK_LOOP_544++;
        if (AKA_BLOCK_LOOP_544 > 1000) {
            //break;
        }
        AKA_mark("lis===23###sois===583###eois===606###lif===10###soif===364###eoif===387###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");int val = matrix[i][j];
        // finding the smallest absolute value in the matrix
        AKA_mark("lis===25###sois===678###eois===707###lif===12###soif===459###eoif===488###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");small = min(small, abs(val));
        // counting the negative numbers
        if (AKA_mark("lis===27###sois===763###eois===770###lif===14###soif===544###eoif===551###ifc===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)") && (AKA_mark("lis===27###sois===763###eois===770###lif===14###soif===544###eoif===551###isc===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)") && (val < 0))) {
AKA_mark("lis===27###sois===772###eois===780###lif===14###soif===553###eoif===561###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");count++;
}

else {
AKA_mark("lis===-27-###sois===-763-###eois===-7637-###lif===-14-###soif===-###eoif===-551-###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");
}
        // finding the sum of all the values
        AKA_mark("lis===29###sois===836###eois===852###lif===16###soif===617###eoif===633###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");sum += abs(val);
      }
    }
    // if even number of negatives, then just return sum
    if (AKA_mark("lis===33###sois===936###eois===950###lif===20###soif===717###eoif===731###ifc===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)") && (AKA_mark("lis===33###sois===936###eois===950###lif===20###soif===717###eoif===731###isc===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)") && (count % 2 == 0)))
      {
AKA_mark("lis===34###sois===959###eois===970###lif===21###soif===740###eoif===751###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");return sum;
}

    else
      // subtract the value of the min absolute element
      {
AKA_mark("lis===37###sois===1045###eois===1068###lif===24###soif===826###eoif===849###ins===true###function===.\\p9\\1975.cpp\\Solution\\maxMatrixSum(vector<vector<int>>&)");return sum - 2 * small;
}

  }
};

#endif
