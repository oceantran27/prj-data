#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}


class Solution {
public:
    double average(vector<int>& salary) {
        int minSalary = INT_MAX;
        int maxSalary = INT_MIN;
        int totalSalary = 0;
        int numEmployees = 0;
        
        for (int s : salary) {
            if (s < minSalary) {
                minSalary = s;
            }
            if (s > maxSalary) {
                maxSalary = s;
            }
            totalSalary += s;
            numEmployees++;
        }
        
        totalSalary -= minSalary + maxSalary;
        numEmployees -= 2;
        
        return (double) totalSalary / numEmployees;
    }
};