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
        if(n<=1) return n;
        int secondprev = 0;
        int firstprev = 1;
        for(int i=2;i<=n; i++)
        {
            int curr = secondprev+firstprev;
            secondprev = firstprev;
            firstprev = curr;
        }
        return firstprev;
    }
};