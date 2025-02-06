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
    int removePalindromeSub(string s) {
        int n=s.size();
        bool ans=true;
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
                ans=false;
                break;
            }
            i++;
            j--;
        }
        if(ans)
            return 1;
        else
            return 2;
    }
};