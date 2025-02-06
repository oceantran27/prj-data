#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//厄拉多塞筛法
class Solution {
public:
    int countPrimes(int n) {
        if (n<2)
            return 0;
        vector<bool> prime(n+1,true);
        prime.at(0)=prime.at(1)=false;
        int answer=0;
        for (int i=2;i<n;++i)
            if (prime.at(i))
            {
                ++answer;
                for (int j=i+i;j<n;j=j+i)
                    prime.at(j)=false;
            }
        return answer;
    }
};
