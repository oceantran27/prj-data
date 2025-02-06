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
    int minInsertions(string s) {
        int left=0;
        int ans=0;
        int s_size=s.size();
        for (int i=0;i<s_size;++i)
        {
            if (s.at(i)=='(')
                ++left;
            else
            {
                if (i+1<s_size && s.at(i+1)==')')
                {
                    if (left>0)
                        --left;
                    else
                        ++ans;
                    ++i;
                }
                else
                {
                    ++ans;
                    if (left>0)
                        --left;
                    else
                        ++ans;
                }
            }
        }
        ans+=left*2;
        return ans;
    }
};
