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
    int numberOfSteps (int num) {
        int ans=0;
        while(num!=0){
            if(num%2==0)
                num=num/2;
            else
                num--;
            ans++;
        }
        return ans;
    }
};