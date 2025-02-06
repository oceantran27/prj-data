#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//找到num的最高位然后一位一位取反
class Solution {
public:
    int findComplement(int num) {
        int highbit=int(log(num)/log(2));
        int key=1<<highbit;
        int ans=0;
        while (key!=0)
        {
            ans<<=1;
            if ((key&num)==0)
                ans|=1;
            key>>=1;
        }
        return ans;
    }
};
