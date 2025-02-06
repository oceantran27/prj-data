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
    bool lemonadeChange(vector<int>& bills) {
        int rem5 = 0, rem10 = 0;
        for (int i = 0; i < bills.size(); i++){
            if (bills[i] == 5){
                rem5++;
            }else if (bills[i] == 10){
                if (rem5)
                    rem5--,rem10++;
                else 
                    return 0;
            }else {
                if (rem10 && rem5)
                    rem10--,rem5--;
                else if (rem5 >= 3)
                    rem5 -= 3;
                else 
                    return 0;
            }
        }
        return 1;
    }
};