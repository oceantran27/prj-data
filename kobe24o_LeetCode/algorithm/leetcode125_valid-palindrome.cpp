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
    bool isPalindrome(string s) {
    	if(s.size()<=1)
    		return true;
        int i = 0, j = s.size()-1;
        while(i < j)
        {
        	if(!isalpha(s[i]) && !isdigit(s[i]))
        	{
        		i++;
        		continue;
        	}
        	if(!isalpha(s[j]) && !isdigit(s[j]))
    		{
    			j--;
        		continue;
        	}
        	if(tolower(s[i]) == tolower(s[j]))
        		i++,j--;
        	else
        		return false;
        }
        return true;
    }
};