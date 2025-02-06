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
    void create( vector<vector<int>> &num,vector<int> &tem,int m,int n,int k)
    {
        if(tem.size()==k)
        {
            num.push_back(tem);
            return ;
        }
        if(m<=n)
        {
            tem.push_back(m);
            create(num,tem,m+1,n,k);
            tem.pop_back();
            create(num,tem,m+1,n,k);
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> num;
        vector<int> tem;
        create(num,tem,1,n,k);
        return num;
    }
};