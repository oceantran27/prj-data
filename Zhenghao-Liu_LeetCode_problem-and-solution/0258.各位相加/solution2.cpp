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
        if (num/10==0)
            return num;
        int result=0;
        while (num!=0)
        {
            result=result+num%10;
            num=num/10;
        }
        return addDigits(result);
    }
};
