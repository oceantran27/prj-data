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
    int countLetters(string s) {
    	int i, count = 0, previd = 0;
    	char prev = s[0];
        for(i = 0; i < s.size(); ++i)
        {
        	if(s[i]==prev)
        		count += i-previd+1;
        	else
        	{
        		prev = s[i];
                count += 1;
        		previd = i;
        	}
        }
        return count;
    }
};