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
    int firstUniqChar(string s) {
        int count[26];
        memset(count, 0, 26 * sizeof(int));
        for(int i = 0; i < s.size(); ++i)
        {
        	count[s[i]-'a']++;
        }
        for(int i = 0; i < s.size(); ++i)
        	if(count[s[i]-'a'] == 1)
        		return i;
    	return -1;
    }
};