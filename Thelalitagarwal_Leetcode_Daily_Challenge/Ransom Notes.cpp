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
        unordered_map<char, int> m;
        for(auto it: magazine){
            m[it]++;
        }
        for(auto it: ransomNote){
            if(!m[it]--){
                return false;
            }
        }
        return true;
    }
};