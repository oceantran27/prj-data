#include <bits/stdc++.h>
#include <set>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#include "test.h"
#include "remove_duplicates_from_sorted_array.h"

using namespace std;

int main()
{
    Solution solution;
    
    //Test cases
    {
        int a[] = {1, 1, 2};
        int n = solution.removeDuplicates(a, sizeof(a) / sizeof(a[0]));

        print_arr(a, n);
    }
	
    {
        int a[] = {1, 3, 2};
        int n = solution.removeDuplicates(a, sizeof(a) / sizeof(a[0]));

        print_arr(a, n);
    }
	
    {
        int a[] = {};
        int n = solution.removeDuplicates(a, sizeof(a) / sizeof(a[0]));

        print_arr(a, n);
    }
	
    //Error test cases from leetcode.com
	
	return 0;
}
