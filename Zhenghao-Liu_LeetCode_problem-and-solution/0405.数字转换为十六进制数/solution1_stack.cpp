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
    string toHex(int num) {
        unsigned int number=num;
        stack<char> helper;
        while (number!=0)
        {
            helper.push(key.at(number%16));
            number/=16;
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
