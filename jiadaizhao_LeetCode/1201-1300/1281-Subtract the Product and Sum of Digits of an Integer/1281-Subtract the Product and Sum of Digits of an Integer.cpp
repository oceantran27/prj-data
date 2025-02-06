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
    int subtractProductAndSum(int n) {
        int p = 1, s = 0;
        while (n) {
            p *= n % 10;
            s += n % 10;
            n /= 10;
        }
        return p - s;
    }
};
