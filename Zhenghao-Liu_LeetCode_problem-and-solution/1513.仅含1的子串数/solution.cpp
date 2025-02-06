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
    int base=1e9+7;
public:
    int numSub(string s) {
        vector<int> v;
        int i=0;
        int size=s.size();
        for (int i=0;i<size;++i)
        {
            if (s.at(i)=='0')
                continue;
            int j;
            for (j=i;j<size;++j)
                if (s.at(j)=='0')
                    break;
            v.push_back(j-i);
            i=j;
        }
        long long ans=0;
        for (int i:v)
        {
            ans+=get_ans(i);
            ans%=base;
        }
        return (int)ans;
    }
    int get_ans(int n)
    {
        return ((long long)(n+1)%base*n%base)/2%base;
    }
};
