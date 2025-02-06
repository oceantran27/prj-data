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
    int addDigits(int num) {
        int ans=0;;
        while(num>0){
            int r=num%10;
            ans+=r;
            num/=10;
            if(num==0 && ans>9){
                num=ans;
                ans=0;
            }
        }
        return ans;
    }
};