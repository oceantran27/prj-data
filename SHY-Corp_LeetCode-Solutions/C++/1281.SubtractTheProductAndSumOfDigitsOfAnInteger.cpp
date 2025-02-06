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
    int subtractProductAndSum(int n) {
        int sum=0;
        int prod=1;
        int digit;

        while(n!=0)
        {
            //extracting the last digit
            digit = n%10;

            sum += digit;
            prod *= digit;

            //dividing the original number to get quotient equivalent to processing the remaining digits
            n /= 10;
        }

        int diff = (prod - sum);

        return diff;
    }
};
