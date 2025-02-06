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
        int first = 0, second = 1;
        if(n < 2) return n;
        int third = 0;
        for(int i = 2; i <= n; i++){
            third = first + second;
            first = second;
            second = third;
        }
        return third;
    }
};