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
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;
        
        LOOP:while(i < j){
            char A = tolower(s[i]);
            char B = tolower(s[j]);
            int a = A, b = B;
            
            if(!isdigit(s[i])){
                if(a > 122 || a < 97){
                    i++;
                    goto LOOP;
                }
            } 
            if(!isdigit(s[j])){
                if(b > 122 || b < 97){
                    j--;
                    goto LOOP;
                }
            } 
            if(a != b){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
};
