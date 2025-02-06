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
    int countPrefixes(vector<string>& words, string s) {

      int countPrefix = 0;

      for(int i=0;i<words.size();++i){
          if(s.find(words[i])!=string::npos && s.find(words[i])==0){
              countPrefix++;
          }
      }  
      return countPrefix;
    }
};