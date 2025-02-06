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
    string kthLuckyNumber(int k) 
    {
        int x = 2+k-1;
        string ret;
        while (x>0)
        {
            if (x%2==0)
                ret.push_back('4');
            else
                ret.push_back('7'); 
            x/=2;
        }
        ret.pop_back();
        reverse(ret.begin(), ret.end());
        return ret;        
    }
};
