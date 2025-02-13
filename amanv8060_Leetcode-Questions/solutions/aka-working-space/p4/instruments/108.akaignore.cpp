/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_108_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_108_CPP
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

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  /** Instrumented function TreeNode(int) */
TreeNode(int x) : val(x), left(NULL), right(NULL) /* << Aka begin of function  TreeNode(int x) >> */
{AKA_mark("Calling: .\\p4\\108.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
};

class Solution {
 public:
public:
  /** Instrumented function constructTree(vector<int>&,int,int) */
TreeNode* constructTree(vector<int>& nums, int start, int end) /* << Aka begin of function TreeNode * constructTree(vector<int>& nums, int start, int end) >> */
{AKA_mark("Calling: .\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)");AKA_fCall++;
    if (AKA_mark("lis===16###sois===322###eois===333###lif===1###soif===74###eoif===85###ifc===true###function===.\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)") && (AKA_mark("lis===16###sois===322###eois===333###lif===1###soif===74###eoif===85###isc===true###function===.\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)") && (start > end))) {
      AKA_mark("lis===17###sois===344###eois===356###lif===2###soif===96###eoif===108###ins===true###function===.\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)");return NULL;
    }
else {
AKA_mark("lis===-16-###sois===-322-###eois===-32211-###lif===-1-###soif===-###eoif===-85-###ins===true###function===.\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)");
}
    AKA_mark("lis===19###sois===369###eois===397###lif===4###soif===121###eoif===149###ins===true###function===.\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)");int mid = (start + end) / 2;
    AKA_mark("lis===20###sois===403###eois===444###lif===5###soif===155###eoif===196###ins===true###function===.\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)");TreeNode* root = new TreeNode(nums[mid]);
    AKA_mark("lis===21###sois===450###eois===499###lif===6###soif===202###eoif===251###ins===true###function===.\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)");root->left = constructTree(nums, start, mid - 1);
    AKA_mark("lis===22###sois===505###eois===553###lif===7###soif===257###eoif===305###ins===true###function===.\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)");root->right = constructTree(nums, mid + 1, end);
    AKA_mark("lis===23###sois===559###eois===571###lif===8###soif===311###eoif===323###ins===true###function===.\\p4\\108.cpp\\Solution\\constructTree(vector<int>&,int,int)");return root;
  }

  /** Instrumented function sortedArrayToBST(vector<int>&) */
TreeNode* sortedArrayToBST(vector<int>& nums) /* << Aka begin of function TreeNode * sortedArrayToBST(vector<int>& nums) >> */
{AKA_mark("Calling: .\\p4\\108.cpp\\Solution\\sortedArrayToBST(vector<int>&)");AKA_fCall++;
    AKA_mark("lis===27###sois===635###eois===682###lif===1###soif===53###eoif===100###ins===true###function===.\\p4\\108.cpp\\Solution\\sortedArrayToBST(vector<int>&)");return constructTree(nums, 0, nums.size() - 1);
  }
};

#endif
