/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_189_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P5_189_CPP
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
#include <algorithm>
using namespace std;

/** Instrumented function gcd(int,int) */
int gcd(int a, int b) /* << Aka begin of function int gcd(int a, int b) >> */
{AKA_mark("Calling: .\\p5\\189.cpp\\gcd(int,int)");AKA_fCall++;
  AKA_mark("lis===7###sois===113###eois===147###lif===1###soif===27###eoif===61###ins===true###function===.\\p5\\189.cpp\\gcd(int,int)");return b == 0 ? a : gcd(b, a % b);
}

class Solution {
 public:
public:
  /** Instrumented function rotate(vector<int>&,int) */
void rotate(vector<int> &nums, int k) /* << Aka begin of function void rotate(vector<int> &nums, int k) >> */
{AKA_mark("Calling: .\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)");AKA_fCall++;
    AKA_mark("lis===13###sois===229###eois===249###lif===1###soif===45###eoif===65###ins===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)");int n = nums.size();
    int AKA_BLOCK_LOOP_255 = 0;
    AKA_mark("lis===14###sois===260###eois===270###lif===2###soif===76###eoif===86###ins===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)");
for (int i = 0; AKA_mark("lis===14###sois===271###eois===284###lif===2###soif===87###eoif===100###ifc===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)") && (AKA_mark("lis===14###sois===271###eois===284###lif===2###soif===87###eoif===100###isc===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)") && (i < gcd(n, k))); ({AKA_mark("lis===14###sois===286###eois===289###lif===2###soif===102###eoif===105###ins===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)");++i;})) {
        AKA_BLOCK_LOOP_255++;
        if (AKA_BLOCK_LOOP_255 > 1000) {
            //break;
        }
      int AKA_BLOCK_LOOP_300 = 0;
    AKA_mark("lis===15###sois===305###eois===326###lif===3###soif===121###eoif===142###ins===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)");
for (int ii = (i + k) % n; AKA_mark("lis===15###sois===327###eois===334###lif===3###soif===143###eoif===150###ifc===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)") && (AKA_mark("lis===15###sois===327###eois===334###lif===3###soif===143###eoif===150###isc===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)") && (i != ii)); ({AKA_mark("lis===15###sois===336###eois===353###lif===3###soif===152###eoif===169###ins===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)");ii = (ii + k) % n;})) {
        AKA_BLOCK_LOOP_300++;
        if (AKA_BLOCK_LOOP_300 > 1000) {
            //break;
        }
        AKA_mark("lis===16###sois===366###eois===390###lif===4###soif===182###eoif===206###ins===true###function===.\\p5\\189.cpp\\Solution\\rotate(vector<int>&,int)");swap(nums[i], nums[ii]);
      }
    }
  }
};

#endif
