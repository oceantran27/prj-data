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
    string generateTheString(int n) {
        if(n%2)
            return string(n,'a');
        return string(n-1,'o')+'k';
    }
};