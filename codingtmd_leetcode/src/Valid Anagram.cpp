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
    bool isAnagram(string s, string t) {
        vector<int> charcount(26, 0);
        for(int i =0; i< s.length(); i++) {
            charcount[s[i] - 'a'] ++;
        }
        
        for(int i =0; i< t.length(); i++) {
            charcount[t[i] - 'a'] --;
        }
        
        for(int i =0; i<charcount.size(); i++) {
            if(charcount[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};