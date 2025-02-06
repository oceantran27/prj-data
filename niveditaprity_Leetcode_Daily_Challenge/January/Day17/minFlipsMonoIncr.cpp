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
    int minFlipsMonoIncr(string s) {
      int countFlip = 0;
      int countOne = 0;
      for(int i = 0 ;i<s.size();i++)
      {
          if(s[i] == '1')
          {
             countOne++; 
          }
          if(s[i] == '0')
          {
              if(countOne>0)
              {
                  countFlip++;
              }
          }
      if(countOne < countFlip)
      {
          countFlip = countOne;
      }
      }
      return countFlip;
    }
};
