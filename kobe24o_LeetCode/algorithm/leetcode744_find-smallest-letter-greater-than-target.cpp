#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size()-1, mid;
        while(l <= r)
        {
        	mid = l+((r-l)>>1);
        	if(letters[mid] > target)
        	{
        		if(mid != 0 && letters[mid-1] <= target)
        			return letters[mid];
        		else
        			r = mid-1;
        	}
        	else
        	{
        		l = mid+1;
        	}
        }
        return letters[0];
    }
};