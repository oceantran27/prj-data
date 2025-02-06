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
    string convertToBase7(int num) {
    	if(num == 0)
    		return "0";
        bool negative = (num < 0);
        num = abs(num);
        string ans;
        while(num)
        {
        	ans.append(to_string(num%7));
        	num /= 7;
        }
        if(negative)
        	ans.push_back('-');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};