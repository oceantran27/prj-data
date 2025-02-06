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
    string key="0123456789abcdef";
public:
    string toHex(int _num) {
        stack<char> helper;
        unsigned int num=_num;
        while (num!=0)
        {
            //1个16进制对应4位二进制数
            helper.push(key.at(num & 0b1111));
            num>>=4;
        }
        string ans;
        while (!helper.empty())
        {
            if (ans.empty() && helper.top()=='0')
                continue;
            ans+=helper.top();
            helper.pop();
        }
        return ans.empty() ? "0" : ans;
    }
};
