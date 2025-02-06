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
    int numJewelsInStones(string J, string S) {
        int cnt[52]={0};
        for (char i:J)
            ++cnt[index(i)];
        int ans=0;
        for (char i:S)
            ans+=cnt[index(i)];
        return ans;
    }
    int index(char c)
    {
        if (c>='a' && c<='z')
            return 26+c-'a';
        return c-'A';
    }
};
