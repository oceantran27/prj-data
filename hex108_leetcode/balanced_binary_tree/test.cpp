#include <bits/stdc++.h>
#include <set>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#include "test.h"
#include "balanced_binary_tree.h"

using namespace std;

int main()
{
    Solution solution;
    
    //Test cases
    {
        // true
        TreeNode n1(1), n2(2), n3(3), n4(4), n5(5);
        n1.left = &n2;
        n1.right = &n3;
        n2.left = &n4;
        n2.right = &n5;

        cout << solution.isBalanced(&n1) << endl;
    }
	
    {
        // false 
        TreeNode n1(1), n2(2), n3(3), n4(4), n5(5);
        n1.left = &n2;
        n1.right = &n3;
        n2.left = &n4;
        n4.right = &n5;

        cout << solution.isBalanced(&n1) << endl;
    }
	
    //Error test cases from leetcode.com
	
	return 0;
}
