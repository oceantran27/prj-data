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
    string defangIPaddr(string address) {
        string ans;
        for(int i = 0; i < address.size(); ++i)
        {
        	if(address[i] != '.')
        		ans.push_back(address[i]);
        	else
        		ans += "[.]";
        }
        return ans;
    }
};