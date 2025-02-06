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
    bool detectCapitalUse(string word) {
        if(word.size()<=1){
            return true;
        }
        
        if(islower(word[1])){
            for(int i=2;i<word.size();++i){
                if(isupper(word[i])){
                    return false;
                }
            }
            return true;
        }
        
        for(int i=0;i<word.size();++i){
            if(islower(word[i])){
                return false;
            }
        }
        
        return true;
    }
};
