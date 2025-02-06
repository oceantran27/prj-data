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
    vector<int> fraction(vector<int>& cont) {
        int cont_size=cont.size();
        if (cont_size==1)
            return {cont.at(0),1};
        int molecular=1,denominator=cont.at(cont_size-1);//分子分母
        for (int i=cont_size-1;i>0;--i)
        {
            if (cont.at(i-1)!=0)
            {
                molecular=cont.at(i-1)*denominator+molecular;
                swap(molecular,denominator);
            }
            else if (cont.at(i-1)==0)
                swap(molecular,denominator);      
        }
        swap(molecular,denominator);
        int gongyueshu=gcd(molecular,denominator);
        return {molecular/gongyueshu,denominator/gongyueshu};   
    }
};
