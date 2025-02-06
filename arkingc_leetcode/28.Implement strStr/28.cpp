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
    //
    int strStr(string haystack, string needle) {
        if(needle.size() == 0)
            return 0;
        
        char c = needle[0];
        int sz1 = haystack.size(),sz2 = needle.size();
        for(int i = 0 ;i <= sz1 - sz2;i++){
            if(haystack[i] == c){
                int j;
                for(j = 0;j < sz2;j++){
                    if(haystack[i+j] != needle[j])
                        break;
                }
                if(j == needle.size())
                    return i;
            }
        }
        
        return -1;
    }
};