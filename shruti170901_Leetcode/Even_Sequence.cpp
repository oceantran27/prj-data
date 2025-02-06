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
   string maximumBinaryString(string binary)
    {
        int n=binary.length();
        int cnt=0;
        int first;
        for(int i=0;i<n;i++)
        {
            if(binary[i]=='0')
            {
                if(cnt==0)first=i;
                cnt++;
            }
        }

        if(cnt==0)
        {
            return binary;
        }

        string ans(n,'1');
        ans[first+cnt-1]='0';
        return ans;
    }
};