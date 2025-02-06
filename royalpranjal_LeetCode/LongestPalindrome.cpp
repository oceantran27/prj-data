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
    int longestPalindrome(string s) {
        int ans = 0;
        
        map<char, int> myMap;
        
        for(int i = 0; i < s.size(); i++){
            if(myMap.find(s[i]) != myMap.end()){
                myMap[s[i]]++;
            }
            else{
                myMap[s[i]] = 1;
            }
        }
        
        map<char, int> :: iterator it = myMap.begin();
        
        int last = 0;
        
        while(it != myMap.end()){
            if((it->second)%2 == 0){
                ans = ans + it->second;
            }
            else{
                ans = ans + it->second - 1;
                last = 1;
            }
            it++;
        }
        
        return ans+last;
    }
};
