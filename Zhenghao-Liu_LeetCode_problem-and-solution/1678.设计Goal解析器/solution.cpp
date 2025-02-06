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
    string interpret(string command) {
        string ans;
        int size=command.size();
        for (int i=0;i<size;)
        {
            if (command.at(i)=='G')
            {
                ans+='G';
                ++i;
            }
            else
            {
                if (command.at(i+1)==')')
                {
                    ans+='o';
                    i+=2;
                }
                else
                {
                    ans+="al";
                    i+=4;
                }
            }
        }
        return ans;
    }
};
