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
    bool queryString(string S, int N) {
    	string str;
        for( ; N >= 1; N--)
        {
        	bitset<32> bs(N);
        	str = bs.to_string();
        	str = str.substr(str.find_first_of('1'));
        	if(S.find(str) == string::npos)
        		return false;
        }
        return true;
    }
};