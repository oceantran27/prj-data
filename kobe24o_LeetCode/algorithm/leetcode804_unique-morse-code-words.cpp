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
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        string str;
        int i, j;
        for(i = 0; i < words.size(); ++i)
        {
        	str = "";
        	for(j = 0; j < words[i].size(); ++j)
        	{
        		str += code[words[i][j]-'a'];
        	}
        	s.insert(str);
        }
        return s.size();
    }
};