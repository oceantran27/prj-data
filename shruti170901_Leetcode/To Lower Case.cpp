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
    string toLowerCase(string str) 
    {
      int i;
      for (i=0;i<str.length();i++)
          str[i]=tolower(str[i]);
      return str;
    }
};
