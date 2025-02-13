/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2012_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P12_2012_CPP
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
  /** Instrumented function sumOfBeauties(vector<int>&) */
int sumOfBeauties(vector<int>& nums) /* << Aka begin of function int sumOfBeauties(vector<int>& nums) >> */
{AKA_mark("Calling: .\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");AKA_fCall++;
    if (AKA_mark("lis===13###sois===265###eois===281###lif===1###soif===48###eoif===64###ifc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (AKA_mark("lis===13###sois===265###eois===281###lif===1###soif===48###eoif===64###isc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (nums.size() == 0))) {
AKA_mark("lis===13###sois===283###eois===292###lif===1###soif===66###eoif===75###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");return 0;
}

else {
AKA_mark("lis===-13-###sois===-265-###eois===-26516-###lif===-1-###soif===-###eoif===-64-###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");
}

    AKA_mark("lis===15###sois===300###eois===312###lif===3###soif===83###eoif===95###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");int sum = 0;

    AKA_mark("lis===17###sois===320###eois===339###lif===5###soif===103###eoif===122###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");int left = nums[0];
    AKA_mark("lis===18###sois===345###eois===369###lif===6###soif===128###eoif===152###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");vector<int> temp = nums;
    AKA_mark("lis===19###sois===375###eois===410###lif===7###soif===158###eoif===193###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");sort(temp.begin() + 2, temp.end());
    AKA_mark("lis===20###sois===416###eois===436###lif===8###soif===199###eoif===219###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");int right = temp[2];

    int AKA_BLOCK_LOOP_444 = 0;
    AKA_mark("lis===22###sois===449###eois===459###lif===10###soif===232###eoif===242###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");
for (int i = 1; AKA_mark("lis===22###sois===460###eois===480###lif===10###soif===243###eoif===263###ifc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (AKA_mark("lis===22###sois===460###eois===480###lif===10###soif===243###eoif===263###isc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (i <= nums.size() - 2)); ({AKA_mark("lis===22###sois===482###eois===485###lif===10###soif===265###eoif===268###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");i++;})) {
        AKA_BLOCK_LOOP_444++;
        if (AKA_BLOCK_LOOP_444 > 1000) {
            //break;
        }
      AKA_mark("lis===23###sois===496###eois===510###lif===11###soif===279###eoif===293###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");int maxim = 0;

      if (AKA_mark("lis===25###sois===524###eois===542###lif===13###soif===307###eoif===325###ifc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (AKA_mark("lis===25###sois===524###eois===542###lif===13###soif===307###eoif===325###isc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (nums[i - 1] > left))) {
AKA_mark("lis===25###sois===544###eois===563###lif===13###soif===327###eoif===346###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");left = nums[i - 1];
}

else {
AKA_mark("lis===-25-###sois===-524-###eois===-52418-###lif===-13-###soif===-###eoif===-325-###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");
}

      AKA_mark("lis===27###sois===573###eois===593###lif===15###soif===356###eoif===376###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");right = temp[i + 1];

      if (AKA_mark("lis===29###sois===607###eois===640###lif===17###soif===390###eoif===423###ifc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && ((AKA_mark("lis===29###sois===607###eois===621###lif===17###soif===390###eoif===404###isc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (nums[i] > left)) && (AKA_mark("lis===29###sois===625###eois===640###lif===17###soif===408###eoif===423###isc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (nums[i] < right))))
        {
AKA_mark("lis===30###sois===651###eois===673###lif===18###soif===434###eoif===456###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");maxim = max(maxim, 2);
}

      else {
if (AKA_mark("lis===31###sois===690###eois===736###lif===19###soif===473###eoif===519###ifc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && ((AKA_mark("lis===31###sois===690###eois===711###lif===19###soif===473###eoif===494###isc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (nums[i] > nums[i - 1])) && (AKA_mark("lis===31###sois===715###eois===736###lif===19###soif===498###eoif===519###isc===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)") && (nums[i] < nums[i + 1]))))
        {
AKA_mark("lis===32###sois===747###eois===769###lif===20###soif===530###eoif===552###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");maxim = max(maxim, 1);
}

else {
AKA_mark("lis===-31-###sois===-690-###eois===-69046-###lif===-19-###soif===-###eoif===-519-###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");
}
}

      AKA_mark("lis===33###sois===777###eois===790###lif===21###soif===560###eoif===573###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");sum += maxim;
    }
    AKA_mark("lis===35###sois===803###eois===814###lif===23###soif===586###eoif===597###ins===true###function===.\\p12\\2012.cpp\\Solution\\sumOfBeauties(vector<int>&)");return sum;
  }
};
#endif
