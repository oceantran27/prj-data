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
    int numberOfSteps(int num) {
        if(num==0) return 0;
        if(num%2==0) num/=2;
        else num--;
        return 1+numberOfSteps(num);
    }
};
