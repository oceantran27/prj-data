#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<stdexcept>
class Solution {
    vector<int> helper{0};
public:
    int sumNums(int n) {
        try
        {
            return helper.at(n);
        }
        catch(out_of_range & oe)
        {
            return n+sumNums(n-1);
        }
    }
};
