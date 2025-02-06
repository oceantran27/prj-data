#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(j<t.size()){
        
            while(j<t.size() && t[j]!=s[i]){
                j++;
            }
            if(j==t.size())break;
            i++;
            j++;
        }
        if(i==s.size())return true;
        else return false;
    }
