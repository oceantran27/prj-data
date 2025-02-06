#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Link to the " Removing Stars From a String " Problem ==>>  https://leetcode.com/problems/removing-stars-from-a-string/ 
   
Link to the complete Explaination Video ==>> https://youtu.be/JGHBSaGx-Oo

*/

class Solution {
public:
    string removeStars(string s) {

        int i=0,j=0,n=s.length();
        while(j!=n){
            
            if(s[j]=='*') i--;
            else s[i++]=s[j];
            j++;
        }
        return s.substr(0,i);
    }
};
