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
    string predictPartyVictory(string senate) {
       queue<int>radiantQ,direQ;
       for(int i = 0; i<senate.size(); i++) 
       {
           if(senate[i] == 'R')
           {
               radiantQ.push(i);
           }
           else
           {
               direQ.push(i);
           }
       }
       while(!radiantQ.empty() && !direQ.empty())
       {
           int ri = radiantQ.front();
           radiantQ.pop();
           int di = direQ.front();
           direQ.pop();
           if(ri < di)
           {
               radiantQ.push(ri + senate.size());
           }
           else
           {
              direQ.push(di+senate.size());
           } 
           }
           return (radiantQ.size() > direQ.size())? "Radiant" : "Dire";
    }
};
