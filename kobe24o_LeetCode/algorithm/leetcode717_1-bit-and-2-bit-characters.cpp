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
    bool isOneBitCharacter(vector<int>& bits) {
        for(int i = 0; i < bits.size(); ++i)
        {
        	if(bits[i] == 1)
        		i++;
        	else
        		if(i == bits.size() - 1)
        			return true;
        }
        return false;
    }
};