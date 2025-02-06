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
    vector<int> majorityElement(vector<int>& nums) {
        int nums_size=nums.size();
        int a,a_t,b,b_t;
        //ʼֵֻҪгֵļ
        a=b=5201314;
        a_t=b_t=0;
        for (int &i:nums)
        {
            if (i==a)
            {
                ++a_t;
                continue;
            }
            if (i==b)
            {
                ++b_t;
                continue;
            }
            if (a_t==0)
            {
                a=i;
                a_t=1;
                continue;
            }
            if (b_t==0)
            {
                b=i;
                b_t=1;
                continue;
            }
            --a_t;
            --b_t;
        }
        //ǵóѡˣ󲻳ǳֵĴҪٱһ
        a_t=b_t=0;
        for (int &i:nums)
            if (i==a)
                ++a_t;
            //Ϊпѡͬһelse if
            else if (i==b)
                ++b_t;
        vector<int> answer;
        if (a_t>nums_size/3)
            answer.push_back(a);
        if (b_t>nums_size/3)
            answer.push_back(b);
        return answer;        
    }
};