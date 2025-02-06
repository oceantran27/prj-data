#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author: Noura Algohary
class Solution {
public:
    double average(vector<int>& salary) {
        //accumulate returns the sum of elements of vector "salary"

        return double((accumulate(salary.begin(), salary.end(), 0) - *max_element(salary.begin(), salary.end()) - *min_element(salary.begin(), salary.end()))) / (salary.size() - 2);
    }
};