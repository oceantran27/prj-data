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
    int fib(int n) {
        if(n <= 1)
        	return n;
        int i = 2, a = 0, b = 1, sum;
        while(i <= n)
        {
        	sum = (a + b)%1000000007;
        	a = b;
        	b = sum;
        	i++;
        }
        return sum;
    }
};