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
    bool validWordAbbreviation(string word, string abbr) {
        int n = word.size();
        int i = 0;
        int j = 0;
        int m = abbr.size();
        while(j < m && i<n){
            if(abbr[j]=='0') return false;
            if(abbr[j] == word[i]){
                i++;
                j++;
            }
            else{
                if(!isdigit(abbr[j])) return false;
                int curr = 0;
                while(j<m && isdigit(abbr[j])){
                    curr = curr*10 + abbr[j++]-'0';
                }
                i += curr;
            }
        }
        return j==m && i==n;
    }
};