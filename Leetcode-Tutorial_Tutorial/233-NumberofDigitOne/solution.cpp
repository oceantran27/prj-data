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
    int countDigitOne(int n) {
        int ans = 0, temp = n;
        if(n <= 0) return ans;
        vector<int> ve;
        while(temp){//ָ
            ve.push_back(temp%10);
            temp /= 10;
        }
        for(int i = 0, pre = n/10, suf = 0, pow = 1; i < ve.size(); i++){
            //ӵλλͳ
            //λΪ0ǰ׺ΧΪ0~pre-1, ׺ΧΪ0~99..9
            if(ve[i] == 0) ans += pre*pow;
            //λΪ1ǰ׺ΧΪ0~pre-1ʱ, ׺ΧΪ0~99..9, ǰ׺Ϊpreʱ,׺ΧΪ0~suf
            else if(ve[i] == 1) ans += pre*pow+suf+1;
            //, ǰ׺ΧΪ0~pre׺ΧΪ0~99..9
            else ans += (pre+1)*pow;
            pre /= 10, suf += ve[i]*pow, pow *= 10;
        }
        return ans;
    }
};
