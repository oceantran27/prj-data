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
    int strStr(string haystack, string needle) {
      int n1 = haystack.size();
      int n2 = needle.size();
      if(n2>n1)
      {
          return -1;
      }
      for(int i = 0 ;i<n1-n2+1;i++)
      {
        if(haystack.substr(i,n2)==needle)
        {
            return i;
        }
      } 
      return -1;
    }
};
