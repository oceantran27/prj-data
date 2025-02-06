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
    string addBinary(string a, string b) {
        // 0 + 0 = 0, 0 + 1 = 1, 1 + 0 = 1, 1 + 1 = 10
        string sum = "";
        int carry = 0;//进位
        int i = a.size() - 1, j = b.size() - 1;
        while(i >= 0 || j >= 0 || carry == 1)
        {
            if(i >= 0)
                carry += a[i--] - '0';
            if(j >= 0)
                carry += b[j--] - '0';
            sum = char(carry % 2 + '0') + sum;
            carry /= 2;
            
        }
        return sum;
    }
};