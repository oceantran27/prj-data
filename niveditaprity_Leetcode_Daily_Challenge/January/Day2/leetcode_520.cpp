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
    bool detectCapitalUse(string word) {
      
      bool allUpper = true, allLower = true;
      if(word.size() == 0 or word.size() == 1)
      {
          return true;
      }
      for(int i = 1 ; i<word.size(); i++)
      {
         if(islower(word[i]))
         {
             allUpper = false;
         }
         if(isupper(word[i]))
         {
             allLower = false;
         }
      }
      return allLower or (allUpper && isupper(word[0]));
          
    }
};
