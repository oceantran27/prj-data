#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <iostream>

class Solution {
public:
    int subtractProductAndSum(int n) {
       int product=1;
        int sum=0;
        while(n!=0)
        {
            product*=n%10;
            sum+=n%10;
            n=n/10;
        }
        return product-sum;
    }
};

