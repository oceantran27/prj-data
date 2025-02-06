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
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0},b[26]={0};
        for(int i=0; i<ransomNote.size();i++){
            a[ransomNote[i]-'a']++;
        }
        for(int i=0; i<magazine.size();i++){
            b[magazine[i]-'a']++;
        }
        for(int i=0; i<26; i++){
            if(a[i]>b[i]){
                return false;
            }
        }
        return true;
    }
};