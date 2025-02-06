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
    
    int convert(int n, int k)
    {
        string s = "";
        do
        {
            s += to_string(n%k);
            n /= k;
        }while(n);
        return stoi(s);
    }
    

     
    int sumBase(int n, int k) {
        int x = convert(n,k);
        int s = 0;
        while(x)
        {
            s+=x%10;
            x/=10;
        }
        return s;
    }
};