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
    bool isValidSerialization(string preorder) {
    	if(preorder[0]=='#')
    		return preorder.size()==1;
    	int degree = 1, i, n = preorder.size();
    	for(i = 0; i < n-1; ++i)
    	{
    		if(i==0 || (preorder[i]==','&& isdigit(preorder[i+1])))
    			degree++;
    		else if(preorder[i] == ',' && preorder[i+1]=='#')
    			degree--;
    		if(degree==0 && i != n-2)
    			return false;
    	}
    	return degree==0;
    }
};