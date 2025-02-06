#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class ProductOfNumbers 
{
public:
    ProductOfNumbers() {}
    
    void add(int num) 
    {
        if (num == 0) pre = {1};
        else pre.push_back(pre.back() * num);
    }
    
    int getProduct(int k) 
    {
        if (pre.size() <= k) return 0;
        return pre.back() / pre[pre.size() - k - 1];
    }
    
private:
    vector<int> pre = {1};
};