#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
201. Bitwise AND of Numbers Range

Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

Example 1:

Input: [5,7]
Output: 4

*/

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
        int count=0;
        while(m<n) {
            m=m>>1;
            n=n>>1;
            count++;
        } 
        return n<<count;
    }
};
