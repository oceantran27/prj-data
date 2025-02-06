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
        int f1 = 0, f2 = 1;
        while (f2 <= k) {
            swap(f1, f2);
            f2 += f1;
        }
        return 1 + (k == f1 ? 0 : findMinFibonacciNumbers(k - f1));
    }
};