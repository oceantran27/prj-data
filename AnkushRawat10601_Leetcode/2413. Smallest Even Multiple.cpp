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
    int smallestEvenMultiple(int n) {
        if(!(n%2)) return n;
        return n*2;
    }
};