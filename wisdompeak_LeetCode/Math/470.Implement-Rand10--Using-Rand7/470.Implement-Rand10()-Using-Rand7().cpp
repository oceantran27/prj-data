#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() 
    {
        int m = rand7();
        while (m>5)
            m = rand7();
        int n = rand7();
        while (n==7)
            n = rand7();        
        return (m-1)*2+n%2+1;
    }
};
