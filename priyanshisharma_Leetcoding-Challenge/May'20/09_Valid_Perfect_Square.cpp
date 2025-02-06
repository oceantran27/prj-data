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
    bool isPerfectSquare(int num) {
        
        for(double i=0;i*i<=num;i++)
        {
            if(i*i == num)
                return true;
        }
        return false;
        
    }
};
