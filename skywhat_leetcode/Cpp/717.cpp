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
        int i=0;
        while(i+1 < bits.size()){
            i = bits[i]? i+2 : i+1;
        }
        
		//The given string will always end with a zero
        return i+1 ==  bits.size();
    }
};
