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
    bool isPalindrome(int x) {
       if(x==0){
           return true;
       }
        if (x<0 || x%10==0){
            return false;
        }
        int temp=x;
        long int rev=0;
        while(temp!=0){
            int rem=temp%10;
            temp=temp/10;
            rev=rev*10+rem;
        }
        if(x==rev){
            return true;
        }
        else{
            return false;
        }
    }
};
