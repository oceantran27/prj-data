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
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++)
            for(int j = i; j < s.size(); j++)
                if(isPanlindrome(s.substr(i, j - i + 1))) count++;
        return count;
    }
    
    bool isPanlindrome(string s){
        int i = 0, j = s.size() - 1;
        while(i < j) if(s[i++] != s[j--]) return false;
        return true;
    }
};
