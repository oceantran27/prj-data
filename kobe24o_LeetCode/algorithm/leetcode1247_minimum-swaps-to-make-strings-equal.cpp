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
    int minimumSwap(string s1, string s2) {
        int count1 = 0, count2 = 0, i, ans = 0;
        for(i = 0; i < s1.size(); ++i)
        {
        	if(s1[i]=='x' && s2[i]=='y')
        		count1++;
        	else if(s1[i]=='y' && s2[i]=='x')
        		count2++;
        }
        if((count1+count2)%2)
        	return -1;
        ans += count1/2 + count2/2;
        count1 %= 2;
        count2 %= 2;
        if(count1+count2 == 2)
        	ans += 2;
        return ans;
    }
};