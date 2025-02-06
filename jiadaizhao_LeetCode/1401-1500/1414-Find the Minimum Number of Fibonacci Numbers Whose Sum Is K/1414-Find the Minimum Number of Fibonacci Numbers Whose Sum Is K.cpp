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
    int findMinFibonacciNumbers(int k) {
        int a = 1, b = 1, count = 0;
        while (b < k) {
            int temp = a;
            a = b;
            b = temp + b;
        }
        
        while (k > 0) {
            if (b <= k) {
                k -= b;
                ++count;
            }
            int temp = a;
            a = b - a;
            b = temp;
        }
        
        return count;
    }
};
