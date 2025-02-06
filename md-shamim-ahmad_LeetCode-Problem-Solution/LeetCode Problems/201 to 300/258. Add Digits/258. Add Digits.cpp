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
    int DigitsSum(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int addDigits(int num) {
        int dSum = DigitsSum(num);
        cout << dSum << '\n';
        while (true) {
            if (dSum <= 9) {
                return dSum;
            }
            dSum = DigitsSum(dSum);
        }
        return 0;
    }
};