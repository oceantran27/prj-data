#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/robot-return-to-origin/

class Solution {
public:
    bool judgeCircle(string m) {
        int h=0, v=0;
        for(int i=0;i<m.size();i++){
            switch(m[i]){
                case 'U': v++; break;
                case 'D': v--; break;
                case 'L': h++; break;
                case 'R': h--; break;
            }
        }
        return h==0 && v==0;
    }
};