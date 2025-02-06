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
    int add(int a, int b) {
        int sum;
        while(b)
        {
            sum = a^b;
            b = (unsigned(a&b))<<1;
            a = sum;
        }
        return a;
    }
};