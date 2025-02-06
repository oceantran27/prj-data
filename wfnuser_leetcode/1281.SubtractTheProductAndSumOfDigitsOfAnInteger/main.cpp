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
        int sum = 0; 
        int product = 1;
        
        while(n > 0) {
            int c = n % 10;
            sum += c;
            product *= c;
            n /= 10;
        }
        
        return product - sum;
        
    }
};
