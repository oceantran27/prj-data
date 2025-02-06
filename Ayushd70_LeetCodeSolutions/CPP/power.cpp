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
    double myPow(double x, int n) {
     float power=1;
        int i=1;
        for(i=1;i<=n;i++)
        {
            power =power*x;
        }
        return power;
    }
};
