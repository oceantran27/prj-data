#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//暴力枚举
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num==0)
            return false;
        int sum=0;
        int half_num=num/2;
        for (int i=1;i<=half_num;++i)
        {
            if (num%i==0)
            {
                sum+=i;
                if (sum>num)
                    return false;
            }
        }
        return sum==num;
    }
};
