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
    int addDigits(int num) {
        while(num>=10) {
            int sum = 0;
            while(num) {
                sum += (num%10);
                num = num / 10;
            }
            num = sum;
        }
        return num;
    }
};