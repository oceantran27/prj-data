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
    bool judgeCircle(string moves) {
      int w=0, h=0;
      for(int i=0;i<moves.length();++i){
        if(moves[i]=='U') ++h;
        else if(moves[i]=='D') --h;
        else if(moves[i]=='R') ++w;
        else --w;
      }
      return h==0&&w==0;
    }
};