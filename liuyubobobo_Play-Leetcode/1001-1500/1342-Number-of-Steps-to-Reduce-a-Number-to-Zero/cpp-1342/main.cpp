#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/// Source : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
/// Author : liuyubobobo
/// Time   : 2020-02-18

#include <iostream>

using namespace std;


/// Simulation
/// Time Complexity: O(logn)
/// Space Complexity: O(1)
class Solution {
public:
    int numberOfSteps (int num) {

        int res = 0;
        while(num){
            if(num % 2) num --;
            else num /= 2;
            res ++;
        }
        return res;
    }
};


int main() {

    return 0;
}
