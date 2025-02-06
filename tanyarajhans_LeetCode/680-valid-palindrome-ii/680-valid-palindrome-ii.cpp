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
    
    bool isPalindrome(string s, int l, int r){ 
      while(l<r){
          if(s[l]==s[r]){
              l++;
              r--;
          }
          else return false;
       }
       return true;
    } 
    
    bool validPalindrome(string s) {
        int n=s.size();
        if(n==1)
            return true;
        int l=0, r=n-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                if(isPalindrome(s,l,r-1))
                    return true;
                else if(isPalindrome(s,l+1,r))
                    return true;
                else
                    return false;
            }
        }
        return true;
    }
};