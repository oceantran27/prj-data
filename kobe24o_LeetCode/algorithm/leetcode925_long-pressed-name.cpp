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
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;
        if(name.size() > typed.size())
        	return false;
        for( ; i < name.size() && j < typed.size(); ++j)
        {
        	if(name[i] == typed[j])
        		i++;
        }
        return (i == name.size());
    }
};