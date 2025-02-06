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
        if (n == 0)
            return 0;
        int a = 1, b = 1, sum = 1;
        for (int i = 2; i < n; i++) {
            sum = a + b;
            b = a;
            a = sum;
        }
        return sum;
    }
};