/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_4_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P1_4_CPP
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
  /** Instrumented function findMedianSortedArrays(vector<int>&,vector<int>&) */
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) /* << Aka begin of function double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) >> */
{AKA_mark("Calling: .\\p1\\4.cpp\\Solution\\findMedianSortedArrays(vector<int>&,vector<int>&)");AKA_fCall++;
    AKA_mark("lis===14###sois===296###eois===332###lif===1###soif===77###eoif===113###ins===true###function===.\\p1\\4.cpp\\Solution\\findMedianSortedArrays(vector<int>&,vector<int>&)");int n = nums1.size() + nums2.size();

    AKA_mark("lis===16###sois===340###eois===394###lif===3###soif===121###eoif===175###ins===true###function===.\\p1\\4.cpp\\Solution\\findMedianSortedArrays(vector<int>&,vector<int>&)");nums1.insert(nums1.end(), nums2.begin(), nums2.end());

    AKA_mark("lis===18###sois===402###eois===435###lif===5###soif===183###eoif===216###ins===true###function===.\\p1\\4.cpp\\Solution\\findMedianSortedArrays(vector<int>&,vector<int>&)");sort(nums1.begin(), nums1.end());

    if (AKA_mark("lis===20###sois===447###eois===457###lif===7###soif===228###eoif===238###ifc===true###function===.\\p1\\4.cpp\\Solution\\findMedianSortedArrays(vector<int>&,vector<int>&)") && (AKA_mark("lis===20###sois===447###eois===457###lif===7###soif===228###eoif===238###isc===true###function===.\\p1\\4.cpp\\Solution\\findMedianSortedArrays(vector<int>&,vector<int>&)") && (n % 2 == 0))) {
      AKA_mark("lis===21###sois===468###eois===515###lif===8###soif===249###eoif===296###ins===true###function===.\\p1\\4.cpp\\Solution\\findMedianSortedArrays(vector<int>&,vector<int>&)");return (nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
    } else {
      AKA_mark("lis===23###sois===537###eois===557###lif===10###soif===318###eoif===338###ins===true###function===.\\p1\\4.cpp\\Solution\\findMedianSortedArrays(vector<int>&,vector<int>&)");return nums1[n / 2];
    }
  }
};

#endif
