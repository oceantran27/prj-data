#include <bits/stdc++.h>
#include <set>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#include "test.h"
#include "binary_tree_zigzag_level_order_traversal.h"

using namespace std;

int main()
{
    Solution solution;
    
    //Test cases
    {
        TreeNode n1(3), n2(9), n3(20), n4(15), n5(7);
        n1.left = &n2;
        n1.right = &n3;
        n3.left = &n4;
        n3.right = &n5;
        
        print_vector_vector(solution.zigzagLevelOrder(&n1));
    }
	
    //Error test cases from leetcode.com
	
	return 0;
}
