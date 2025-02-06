#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
    s߿ʼɨάһ˵һҶ˵
    ǰжַʹ˼пȱʹҶ˼
    ʱ临ӶO(n)
*/

class Solution {
public:
    string minWindow(string s, string t) {
        int cnts[300] = {0},cntt[300] = {0};
        for(int i = 0;i < t.size();i++)     cntt[t[i]]++; //ͳtÿԪصĸ
        int lhs = 0,rhs = 0;
        int resl = -1,resr = s.size();  //ַ˺Ҷ
        int sum = 0;                    //ͳsеtַĸ
        while(rhs < s.size()){
            cnts[s[rhs]]++;                //ͳsÿԪصĸ
            if(cntt[s[rhs]] && cntt[s[rhs]] >= cnts[s[rhs]])   sum++;
            if(cnts[s[rhs]] > cntt[s[rhs]]){                        //жģs˿ʼ
                while(lhs <= rhs && cnts[s[lhs]] > cntt[s[lhs]]){
                    cnts[s[lhs]]--;
                    lhs++;
                }
            }
            if(sum == t.size() && rhs - lhs < resr - resl){
                resr = rhs;
                resl = lhs;
            }
            rhs++;
        }
        string res;
        if(resl == -1)  return res;
        else    return s.substr(resl,resr - resl + 1);
    }
};
