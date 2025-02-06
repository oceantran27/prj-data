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
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int sum = 0;
        vector<bool> ans(A.size());
        for(int i = 0; i < A.size(); ++i)
        {
        	sum = sum*2+A[i];
        	ans[i] = (sum%5 == 0);
            sum %= 5;//防止溢出
        }
        return ans;
    }
};

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int sum = 0;
        vector<bool> ans(A.size());
        for(int i = 0; i < A.size(); ++i)
        {
        	sum = ((sum<<1)+A[i])%5;
        	ans[i] = (sum == 0);
        }
        return ans;
    }
};