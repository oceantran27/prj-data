#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/// Source : https://leetcode.com/problems/defanging-an-ip-address/
/// Author : liuyubobobo
/// Time   : 2019-07-06

#include <iostream>

using namespace std;


/// Simulation
/// Time Complexity: O(n)
/// Space Complexity: O(1)
class Solution {
public:
    string defangIPaddr(string address) {

        string res = "";
        for(int start = 0, i = start + 1; i <= address.size(); i ++)
            if(i == address.size() || address[i] == '.'){
                res += address.substr(start, i - start);
                if(i != address.size()) res += "[.]";
                start = i + 1;
                i = start;
            }
        return res;
    }
};


int main() {

    return 0;
}