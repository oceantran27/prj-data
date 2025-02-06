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
    int getSum(int a, int b) {

        while(b) {
            int sum = a ^ b;
            unsigned int carry = a & b;
            carry = carry << 1;

            a = sum;
            b = carry;
        }

        return a;
    }
};