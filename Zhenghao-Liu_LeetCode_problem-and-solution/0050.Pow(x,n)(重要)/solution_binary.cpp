#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//二分法
class Solution {
public:
        double myPow(double x, int n) 
        {
        if (n==0)
                return 1;
        else if (n==1)
                return x;
        else if (n==-1)
                return 1.0/x;
        double multiple=myPow(x*x,n/2),remainder=myPow(x,n%2);
        return multiple*remainder;
        }
};
