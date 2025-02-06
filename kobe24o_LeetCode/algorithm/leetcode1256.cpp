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
    string encode(int num) {
        num++;
        bitset<32> bs(num);
        string ans = bs.to_string();
        int i = 0;
        while(ans[i]=='0')
            i++;
        return ans.substr(i+1);
    }
};