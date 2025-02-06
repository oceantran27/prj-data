#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author name : Muskaan Rajput
// Date: 2 October 2022

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0)
        {
            return false;
        }
        
        if(n == 1)
        {
            return true;
        }
       
        return (n % 3 == 0) && (isPowerOfThree(n/3));
    }
};
