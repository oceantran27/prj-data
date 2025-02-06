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
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int curwidth = 0, lines = 1;
        for(int i = 0; i < S.size(); ++i)
        {
        	if(curwidth+widths[S[i]-'a'] > 100)
    		{
    			++lines;
    			curwidth = widths[S[i]-'a'];
    		}
    		else
    			curwidth += widths[S[i]-'a'];
        }
        return {lines,curwidth};
    }
};