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
    int countOdds(int low, int high) {
        if(high%2!=0)high++;
        if(low%2!=0)low--;
        return (high/2 - low/2);
    }
};
