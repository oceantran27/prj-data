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
       
        string t = s;
        int i=0,j=t.size()-1;
        while(i<j)
        {
            if(!isalnum(t[i]))
                i++;
            else if(!isalnum(t[j]))
                j--;
            else
            if(tolower(t[i++])!=tolower(t[j--]))
                return false;
        }
        return true;
    }
};