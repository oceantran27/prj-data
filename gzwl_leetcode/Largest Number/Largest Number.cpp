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
    Ȱÿתַ
    Ȼַab
    Ƚa+bb+aĴСжĸǰ漴
    Ҫעⶼ0
*/

bool cmp(const string& lhs,const string& rhs)
{
    return lhs + rhs > rhs + lhs;
}

class Solution {
public:
    string largestNumber(vector<int> &num) {
        vector<string> vs;
        for(int i = 0;i < num.size();i++) {
            string s;
            if(num[i] == 0)     s += '0';
            else {
                while(num[i]) {
                    s += static_cast<char>( num[i] % 10+'0');
                    num[i] /= 10;
                }
                reverse(s.begin(),s.end());
            }
            vs.push_back(s);
        }
        sort(vs.begin(),vs.end(),cmp);
        string res;
        if(vs[0][0] != '0')     for(int i = 0;i < vs.size();i++)   res += vs[i];
        else    res += '0';
        return res;
    }
};

