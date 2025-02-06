#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
 * search_insert_position.cpp
 * Copyright (C) 2013 moondark <liaoxl2012@gmail.com>
 *
 * http://liaoxl.github.io/blog/20131123/leetcode-sip/
 * Distributed under terms of the MIT license.
 */

#include <iostream>

using namespace std;

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        	if(n==0)
			{
				return 0;
			}
			if(n==1)
			{
				if(A[0]<target)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			int mid=n/2;
			if(A[mid]==target)
			{
				return mid;
			}
			else if(A[mid]>target)
			{
				return searchInsert(A, mid, target);
			}
			else
			{
				return mid+searchInsert(A+mid,n-mid,target);
			}

    }
};

int main(int argc, char* argv[])
{
	
	return 0;
}

