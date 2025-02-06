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
        int a = num;
        while(a >= 10) {
            int r = 0;
            while(a > 0) {
                r += a % 10;
                a /= 10;
            }
            a = r;
        }
        return a;
    }
};


func addDigits(num int) int {
    return num - 9 * ((num - 1) / 9)
}

