/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_112_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANV8060_LEETCODE_QUESTIONS_SOLUTIONS_P4_112_CPP
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
{AKA_mark("Calling: .\\p4\\112.cpp\\TreeNode\\TreeNode(int)");AKA_fCall++;}
};

class Solution {
 public:
public:
  /** Instrumented function hasPathSum(TreeNode*,int) */
bool hasPathSum(TreeNode* root, int targetSum) /* << Aka begin of function bool hasPathSum(TreeNode* root, int targetSum) >> */
{AKA_mark("Calling: .\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)");AKA_fCall++;
    if (AKA_mark("lis===16###sois===306###eois===318###lif===1###soif===58###eoif===70###ifc===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)") && (AKA_mark("lis===16###sois===306###eois===318###lif===1###soif===58###eoif===70###isc===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)") && (root == NULL))) {
      AKA_mark("lis===17###sois===329###eois===342###lif===2###soif===81###eoif===94###ins===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)");return false;
    }
else {
AKA_mark("lis===-16-###sois===-306-###eois===-30612-###lif===-1-###soif===-###eoif===-70-###ins===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)");
}
    if (AKA_mark("lis===19###sois===359###eois===426###lif===4###soif===111###eoif===178###ifc===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)") && (((AKA_mark("lis===19###sois===359###eois===381###lif===4###soif===111###eoif===133###isc===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)") && (root->val == targetSum)) && (AKA_mark("lis===19###sois===385###eois===404###lif===4###soif===137###eoif===156###isc===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)") && (root->right == NULL))) && (AKA_mark("lis===19###sois===408###eois===426###lif===4###soif===160###eoif===178###isc===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)") && (root->left == NULL)))) {
      AKA_mark("lis===20###sois===437###eois===449###lif===5###soif===189###eoif===201###ins===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)");return true;
    }
else {
AKA_mark("lis===-19-###sois===-359-###eois===-35967-###lif===-4-###soif===-###eoif===-178-###ins===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)");
}
    AKA_mark("lis===22###sois===462###eois===577###lif===7###soif===214###eoif===329###ins===true###function===.\\p4\\112.cpp\\Solution\\hasPathSum(TreeNode*,int)");return hasPathSum(root->left, targetSum - root->val) ||
           hasPathSum(root->right, targetSum - root->val);
  }
};

#endif
