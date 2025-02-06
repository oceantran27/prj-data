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
    int lengthOfLastWord(const char *s) {
        string str(s);
    	int i = str.length() - 1;

    	while(i >= 0 && str[i] == ' ') {
    		--i;
    	}

    	int length = 0;
    	while(i >= 0 && str[i] != ' ') {
    		++length;
    		--i;
    	}

    	return length;
    }
};

