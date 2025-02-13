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
  TreeNode(int x) : val(x), left(NULL), right(NULL) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
};

class Solution {
 public:
public:
  TreeNode* constructTree(vector<int>& nums, int start, int end) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    if (start > end) {
      return NULL;
    }
    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = constructTree(nums, start, mid - 1);
    root->right = constructTree(nums, mid + 1, end);
    return root;
  }

  TreeNode* sortedArrayToBST(vector<int>& nums) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    return constructTree(nums, 0, nums.size() - 1);
  }
};

#endif
