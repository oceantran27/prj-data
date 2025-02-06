#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#Reverse String
/*Write a function that reverses a string. The input string is given as an array of characters char[].*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i;
        char temp;
        for(i=0;i<n/2;i++)
        {
            temp=s[n-i-1];
            s[n-i-1]=s[i];
            s[i]=temp;
        }
        
    }
};