#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*请编写一个算法，不用任何额外变量交换两个整数的值*/
#include<iostream>
#include<vector>
using namespace std;
class Swap {
public:
    vector<int> getSwap(vector<int> num) {
        num[0] = num[0]^num[1];
        num[1] = num[1]^num[0];
        num[0] = num[0]^num[1];
        return num;
    }
};